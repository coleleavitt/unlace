char __fastcall sub_AB1240(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  char result; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  char v25; // r15
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  char v34; // [rsp+Fh] [rbp-39h]

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = v3;
  v5 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (__int64 *)(*(_QWORD *)(*v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v6;
  if ( *(_BYTE *)(*v6 + 16) != 13 || !(unsigned __int8)sub_F58410(*v6) )
    goto LABEL_16;
  v9 = *v5;
  v3 = (__int64 *)*v5;
  if ( (unsigned int)*(unsigned __int8 *)(*v5 + 16) - 57 <= 1 )
  {
LABEL_4:
    if ( (*(_BYTE *)(v9 + 18) & 0x78) != 0 )
    {
      v10 = *(_QWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 13 )
        goto LABEL_6;
      return 0;
    }
    v34 = *(_BYTE *)(a1[290] + 200) >> 6;
    v15 = sub_A97D20((__int64)a1, (__int64)v3);
    v3 = (__int64 *)v7;
    if ( v15 == sub_AA8D40(a1, v7) )
    {
      if ( v34 == 2 )
        return 1;
      if ( v34 == 1 )
      {
        if ( sub_9EC890(
               *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
               v7,
               v16,
               v17,
               v18) )
        {
          v3 = a1;
          v19 = sub_F58440(*v4, a1);
          result = sub_9EC890(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a1, v20, v21, v22);
          if ( result )
            return result;
        }
      }
    }
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(unsigned __int8 *)(v10 + 16);
  v24 = (unsigned int)(v23 - 57);
  if ( (unsigned int)v24 <= 1 )
  {
    v9 = sub_F63050(*v5, v3, v24, v8);
    if ( v9 )
    {
      v3 = (__int64 *)*v5;
      goto LABEL_4;
    }
LABEL_16:
    v10 = *(_QWORD *)(*(_QWORD *)(*v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v23) = *(_BYTE *)(v10 + 16);
  }
  if ( (_BYTE)v23 != 13 )
    return 0;
LABEL_6:
  if ( !(unsigned __int8)sub_F58410(v10) )
    return 0;
  v13 = *v4;
  if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 57 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
      return 0;
    v13 = sub_F63050(*v4, v3, v11, v12);
    if ( !v13 )
      return 0;
  }
  if ( (*(_BYTE *)(v13 + 18) & 0x78) != 0 )
    return 0;
  v25 = *(_BYTE *)(a1[290] + 200) >> 6;
  v26 = sub_A97D20((__int64)a1, *v4);
  if ( v26 != sub_AA8D40(a1, v10) )
    return 0;
  if ( v25 == 2 )
    return 1;
  if ( v25 != 1 )
    return 0;
  if ( !sub_9EC890(
          *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          v10,
          v27,
          v28,
          v29) )
    return 0;
  v30 = sub_F58440(*v5, a1);
  result = sub_9EC890(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a1, v31, v32, v33);
  if ( !result )
    return 0;
  return result;
}
