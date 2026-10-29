__int64 (__fastcall *__fastcall sub_46AFC0(int *a1, __int64 *a2, void *a3))(_QWORD, _QWORD)
{
  bool v3; // r15
  __int64 v7; // r14
  _QWORD *v8; // r13
  __int64 v9; // rax
  const char *v10; // rcx
  unsigned __int64 v11; // rax
  bool v12; // zf
  const char *v13; // rdx
  void *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  int aflags; // eax
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // esi
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // esi
  int v25; // ecx
  const char *v27; // rdx
  unsigned __int64 v28; // rax
  const char *v29; // rdx
  int v30; // [rsp+8h] [rbp-70h]
  unsigned __int64 v31; // [rsp+18h] [rbp-60h]
  unsigned __int64 v32; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v34 = __readfsqword(0x28u);
  v7 = qword_2CCB598;
  v8 = *(_QWORD **)(qword_2CCB598 + 1672);
  v30 = *a1;
  v9 = sub_5CAA10(v8);
  if ( v9 )
  {
    v10 = haystack;
    if ( *((_QWORD *)a1 + 5) )
      v10 = *((const char **)a1 + 4);
    v3 = (v30 & 0x20) != 0;
    sub_63F740(v8, v9, a3, v10);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v11 = sub_3BDD60(v8, (__int64)a3);
    v12 = *((_QWORD *)a1 + 2) == 0;
    v13 = haystack;
    v32 = v11;
    if ( !v12 )
      v13 = *((const char **)a1 + 1);
    if ( !(unsigned __int8)sub_7BF170(&v32, v7, v13, 0) )
    {
      v27 = haystack;
      if ( *((_QWORD *)a1 + 2) )
        v27 = *((const char **)a1 + 1);
      sub_7BEFF0(&v33, v7, v27, 0, 0);
      v28 = sub_3BDE50(v8, v33);
      if ( v28 != -1 )
      {
        v31 = v28;
        v33 = sub_3BDD60(v8, v28);
        sub_7BF170(&v33, v7, &byte_22F0C30, 0);
        sub_4CB280(v8, v31);
        v29 = haystack;
        if ( *((_QWORD *)a1 + 2) )
          v29 = *((const char **)a1 + 1);
        if ( !(unsigned __int8)sub_7BF170(&v32, v7, v29, 0) )
        {
          if ( !under_debugger )
            interr(2199);
          BUG();
        }
      }
    }
    v14 = a3;
    v15 = v8;
    if ( (*a1 & 3) != 2 )
      goto LABEL_10;
  }
  else
  {
    v33 = sub_3BDD60(v8, (__int64)a3);
    sub_7BF170(&v33, v7, &byte_22F0C30, 0);
    v14 = a3;
    v15 = v8;
    if ( (*a1 & 3) != 2 )
    {
LABEL_10:
      sub_4CB0C0(v15, v14);
      goto LABEL_11;
    }
  }
  sub_4CB130(v15, v14);
LABEL_11:
  sub_4CE8A0(v8, a3, (*(_BYTE *)a1 & 4) != 0);
  v16 = *a2;
  v17 = *a2;
  BYTE1(v17) = BYTE1(*a2) & 0x3F;
  *a2 = v17;
  if ( !v3 )
  {
    if ( (*a1 & 1) != 0 )
    {
      BYTE1(v17) |= 0x40u;
      *a2 = v17;
      if ( (*a1 & 3u) - 2 <= 1 )
      {
        BYTE1(v16) |= 0xC0u;
        *a2 = v16;
        aflags = get_aflags(a3);
LABEL_34:
        v19 = aflags & 0xFFFFBFFF;
        goto LABEL_15;
      }
    }
    else if ( (*a1 & 3) != 0 )
    {
      BYTE1(v17) |= 0x80u;
      *a2 = v17;
      aflags = get_aflags(a3);
      goto LABEL_34;
    }
    aflags = get_aflags(a3);
    goto LABEL_34;
  }
  BYTE1(v17) |= 0x40u;
  *a2 = v17;
  if ( (*a1 & 3u) - 2 <= 1 )
  {
    BYTE1(v16) |= 0xC0u;
    *a2 = v16;
  }
  aflags = get_aflags(a3);
  v19 = aflags | 0x4000;
LABEL_15:
  v20 = v19;
  v21 = v19 & 0xFFFFFFFB;
  v22 = v20 | 4;
  if ( (*a1 & 8) != 0 )
    v21 = v22;
  v23 = v21;
  v24 = v21 & 0xFFFFFFF7;
  v25 = v23 | 8;
  if ( (*a1 & 0x10) != 0 )
    v24 = v25;
  if ( aflags == v24 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))(v34 - __readfsqword(0x28u));
  else
    return set_aflags(a3, v24);
}
