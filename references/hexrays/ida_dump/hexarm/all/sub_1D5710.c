__int64 __fastcall sub_1D5710(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 flags; // rax
  __int64 not_tail; // rax
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int8 v30; // [rsp+6h] [rbp-32h] BYREF
  char v31; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v32; // [rsp+8h] [rbp-30h]

  v8 = a1[1];
  v9 = *a1;
  v32 = __readfsqword(0x28u);
  *((_BYTE *)a1 + 400) = 0;
  a1[3] = v8;
  a1[49] = -1;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v9 + 1496) + 8LL) + 10LL) >= 0 )
    goto LABEL_2;
  v30 = 1;
  v31 = 1;
  if ( sub_CF9B0(0x2Du, a1 + 3, &v30, &v31) != 1 )
  {
    v8 = a1[1];
LABEL_2:
    a1[3] = -1;
    goto LABEL_3;
  }
  v19 = a1[3];
  a3 = v30;
  if ( v19 != -1 )
  {
    v8 = a1[1];
    if ( v19 == v8 )
    {
      a1[3] = -1;
      flags = get_flags_ex(v8, 4);
      v8 = a1[1];
      if ( (flags & 0x10000) != 0 )
      {
        not_tail = prev_not_tail(v8, 4, a3);
        v26 = not_tail;
        if ( not_tail == -1 || (v27 = *a1, v28 = sub_3312A0(*a1, not_tail), !(unsigned __int8)sub_332C60(v27 + 8, v28)) )
        {
LABEL_19:
          v8 = a1[1];
          goto LABEL_3;
        }
        v29 = get_flags_ex(v26, 4);
        v8 = a1[1];
        if ( (~BYTE1(v29) & 6) == 0 )
          a1[49] = v26;
      }
    }
    else
    {
      if ( !v30 )
      {
        if ( !under_debugger )
          sub_3835A0(52245);
        BUG();
      }
      *((_BYTE *)a1 + 400) = v31 ^ 1;
      if ( v19 >= a1[2] )
      {
        v20 = *a1;
        v21 = sub_3312A0(*a1, v19);
        if ( !(unsigned __int8)sub_332C60(v20 + 8, v21) )
          return 4294967266LL;
        goto LABEL_19;
      }
    }
LABEL_3:
    if ( !(unsigned int)decode_insn(a2, v8, a3, a4, a5, a6, a7) )
      return 4294967294LL;
    v15 = a1[3];
    if ( v15 == -1 )
      goto LABEL_5;
    if ( !(unsigned int)decode_insn(a1 + 4, v15, v11, v12, v13, v14, a7) )
      return 4294967294LL;
    v17 = a1[3];
    v18 = v17 + *((unsigned __int16 *)a1 + 29);
    if ( v18 < a1[2] )
    {
LABEL_9:
      if ( v17 != -1 && v17 < a1[2] )
      {
        a1[1] = *((unsigned __int16 *)a1 + 29) + v17;
        return 0;
      }
LABEL_5:
      a1[1] += *(unsigned __int16 *)(a2 + 26);
      return 0;
    }
    v22 = *a1;
    v23 = sub_3312A0(*a1, v18 - 1);
    if ( (unsigned __int8)sub_332C60(v22 + 8, v23) )
    {
      v17 = a1[3];
      goto LABEL_9;
    }
    return 4294967266LL;
  }
  return 4294967264LL;
}
