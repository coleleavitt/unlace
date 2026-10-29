char __fastcall sub_1A5D3E0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned __int8 a9)
{
  __int64 *v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  if ( !a4 )
  {
    v10 = a5 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return sub_1A49A10(a1, a2, a3, (unsigned __int8)a6, 0, a6, a7, a8);
    goto LABEL_6;
  }
  v9 = (__int64 *)a4;
  if ( !*(_DWORD *)a4 || (a4 = *(unsigned int *)(a4 + 4), !(_DWORD)a4) )
  {
    v10 = a5 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      if ( v9[1] )
        goto LABEL_10;
      return sub_1A49A10(a1, a2, a3, (unsigned __int8)a6, 0, a6, a7, a8);
    }
LABEL_6:
    v14 = sub_169D2C0(a1, a5, (__int64)a3, a4, a5, a6);
    if ( v14 )
      return sub_1A5C990(a1, a2, (unsigned __int64)v14, v11, a7, a8, v12, v13);
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 17LL) & 4) == 0 )
      return 0;
LABEL_18:
    *(_DWORD *)a2 = 1;
    return 0;
  }
  if ( !v9[1] )
    return 0;
  v10 = a5 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    goto LABEL_6;
LABEL_10:
  v16 = sub_16A2930(a1, (__int64)v9, a9, a4, a5, a6);
  v14 = (_QWORD *)v16;
  if ( !v16 )
  {
    if ( !sub_169D3A0(a1, (__int64)v9, v17, v18, v19, v20) )
      return 0;
    goto LABEL_18;
  }
  if ( !(unsigned __int8)sub_B8E180(v16) && (unsigned __int8)sub_169F990(a1, (__int64)v9, (unsigned __int64)v14) )
    return 0;
  v21 = *v9;
  v22 = v9[1];
  *(_QWORD *)(a2 + 144) = v21;
  if ( (unsigned int)sub_E90000(v22) != 5 )
    return sub_1A5C990(a1, a2, (unsigned __int64)v14, v11, a7, a8, v12, v13);
  v23 = sub_E900C0(v22);
  return sub_1A5CFC0(a1, a2, v23, v24, v25, v26);
}
