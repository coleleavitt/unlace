__int64 __fastcall sub_10DE660(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r15
  _QWORD *v14; // [rsp+8h] [rbp-60h] BYREF
  __m128 v15; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+20h] [rbp-48h]
  unsigned int v17; // [rsp+24h] [rbp-44h]

  v15.m128_u64[0] = __PAIR64__(a3, a2);
  v4 = sub_21B6DA0(a1, &v15, 2);
  v5 = *(_QWORD *)(a1 + 8);
  v16 = a2;
  v17 = a3;
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  v14 = v7;
  v15 = _mm_loadh_ps((const double *)&v14);
  if ( v6 == v7 )
    return 0;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( a2 && ((unsigned __int8)sub_21B9810(*v6, a2) || a3 && (unsigned __int8)sub_21B9810(v8, a3)) )
        break;
    }
    v15.m128_u64[0] = (unsigned __int64)++v6;
    if ( v7 == v6 )
      return 0;
  }
  v14 = v7;
  v16 = a2;
  v17 = a3;
  v15 = _mm_loadh_ps((const double *)&v14);
  if ( v7 == v6 )
    return 0;
  do
  {
    v9 = *v6;
    v11 = *(_QWORD *)(*v6 + 16LL);
    if ( !v11 )
      v11 = *v6;
    v12 = v6 + 1;
    *(_BYTE *)(v11 + 44) |= 1u;
    v15.m128_u64[0] = (unsigned __int64)v12;
    if ( v12 == v7 )
      break;
    while ( 1 )
    {
      v13 = *v12;
      if ( *v12 )
      {
        if ( (unsigned __int8)sub_21B9810(*v12, a2) || a3 && (unsigned __int8)sub_21B9810(v13, a3) )
          break;
      }
      v15.m128_u64[0] = (unsigned __int64)++v12;
      if ( v7 == v12 )
        return v9;
    }
    v6 = (_QWORD *)v15.m128_u64[0];
  }
  while ( v7 != (_QWORD *)v15.m128_u64[0] );
  return v9;
}
