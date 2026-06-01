__int64 __fastcall sub_1B7D0C0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int16 *a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v8; // r15d
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned __int16 *v15; // [rsp+8h] [rbp-40h]

  v8 = a3;
  v11 = *a2;
  if ( a6 == 1 )
  {
    v15 = a5;
    sub_18C74E0(v11, 4, 0, 4);
    a5 = v15;
  }
  if ( a4 )
  {
    v12 = sub_1B04070((__int64)a2, a4);
    if ( v12 )
    {
      sub_19B4DA0(a1, *a2, v12, v8, a6, a7, a8);
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
    sub_190D5E0(v11, a7);
    return a1;
  }
  if ( a5 )
  {
    v14 = sub_1B7CAD0(a2, a5, a7, a8, a3, a4, (__int64)a5);
    if ( v14 == 1 )
      goto LABEL_10;
    sub_1917B40(a1, *a2, a7, a8, 0, v8, v14 & 0xFFFFFFFFFFFFFFFELL, a6, 1);
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
