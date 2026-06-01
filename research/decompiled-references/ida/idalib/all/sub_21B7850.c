__int64 __fastcall sub_21B7850(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // r15
  _QWORD *v16; // [rsp+8h] [rbp-60h] BYREF
  __m128 v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+24h] [rbp-44h]

  v17.m128_u64[0] = __PAIR64__(a3, a2);
  v6 = sub_21B6DA0(a1, (int *)&v17, 2);
  v7 = *(_QWORD *)(a1 + 8);
  v18 = a2;
  v19 = a3;
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  v16 = v9;
  v17 = _mm_loadh_ps((const double *)&v16);
  if ( v8 == v9 )
    return a4;
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 )
    {
      if ( a2 && ((unsigned __int8)sub_21B9810(*v8, a2) || a3 && (unsigned __int8)sub_21B9810(v10, a3)) )
        break;
    }
    v17.m128_u64[0] = (unsigned __int64)++v8;
    if ( v9 == v8 )
      return a4;
  }
  v16 = v9;
  v18 = a2;
  v19 = a3;
  v17 = _mm_loadh_ps((const double *)&v16);
  if ( v9 == v8 )
    return a4;
  do
  {
    v12 = *v8;
    v13 = *(_QWORD *)(*v8 + 16LL);
    if ( !v13 )
      v13 = *v8;
    v14 = v8 + 1;
    *(_BYTE *)(v13 + 44) |= 1u;
    v17.m128_u64[0] = (unsigned __int64)v14;
    if ( v14 == v9 )
      break;
    while ( 1 )
    {
      v15 = *v14;
      if ( *v14 )
      {
        if ( (unsigned __int8)sub_21B9810(*v14, a2) || a3 && (unsigned __int8)sub_21B9810(v15, a3) )
          break;
      }
      v17.m128_u64[0] = (unsigned __int64)++v14;
      if ( v9 == v14 )
        return sub_21B9810(v12, a2);
    }
    v8 = (_QWORD *)v17.m128_u64[0];
  }
  while ( v9 != (_QWORD *)v17.m128_u64[0] );
  return sub_21B9810(v12, a2);
}
