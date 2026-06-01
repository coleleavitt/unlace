__int64 __fastcall sub_175C5C0(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v12; // rax
  unsigned __int16 *v13; // [rsp+8h] [rbp-40h]

  v9 = *a2;
  if ( a6 == 1 )
  {
    v13 = a5;
    sub_18C74E0(v9, 4, 0, 4);
    a5 = v13;
  }
  if ( a4 )
  {
    v10 = sub_17473B0((__int64)a2, a4);
    if ( v10 )
    {
      sub_19B4DA0(a1, *a2, v10, a3, a6);
      goto LABEL_6;
    }
LABEL_10:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 18) = 0;
    if ( a6 != 1 )
      return a1;
LABEL_11:
    sub_190D5E0(v9);
    return a1;
  }
  if ( a5 )
  {
    v12 = sub_175B800(a2, a5);
    if ( v12 == 1 )
      goto LABEL_10;
    sub_1917B40(a1, *a2, 0, a3, v12 & 0xFFFFFFFE, a6, 1);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 18) = 0;
  }
LABEL_6:
  if ( a6 == 1 )
    goto LABEL_11;
  return a1;
}
