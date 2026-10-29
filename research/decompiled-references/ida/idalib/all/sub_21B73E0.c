void __fastcall sub_21B73E0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r15
  __int64 *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 *v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  __m128 v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+24h] [rbp-44h]

  v15 = a2;
  v16.m128_u64[0] = __PAIR64__(a4, a3);
  v6 = sub_21B6DA0(a1, (int *)&v16, 2);
  v7 = *(_QWORD *)(a1 + 8);
  v17 = a3;
  v18 = a4;
  v8 = (__int64 *)(v7 + 8LL * (unsigned int)v6);
  v9 = (__int64 *)(v7 + 8 * HIDWORD(v6));
  v14 = v9;
  v16 = _mm_loadh_ps((const double *)&v14);
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( a3 && ((unsigned __int8)sub_21B9810(*v8, a3) || a4 && (unsigned __int8)sub_21B9810(v10, a4)) )
          break;
      }
      v16.m128_u64[0] = (unsigned __int64)++v8;
      if ( v9 == v8 )
        return;
    }
    v14 = v9;
    v17 = a3;
    v18 = a4;
    v16 = _mm_loadh_ps((const double *)&v14);
    if ( v9 != v8 )
    {
      do
      {
        v11 = *v8;
        v12 = *(_QWORD *)(*v8 + 16);
        if ( !v12 )
          v12 = *v8;
        v13 = v8 + 1;
        *(_BYTE *)(v12 + 44) |= 1u;
        v16.m128_u64[0] = (unsigned __int64)v13;
        if ( v13 == v9 )
          break;
        while ( 1 )
        {
          if ( *v13 )
          {
            v14 = (__int64 *)*v13;
            if ( (unsigned __int8)sub_21B9810(v14, a3) || a4 && (unsigned __int8)sub_21B9810(v14, a4) )
              break;
          }
          v16.m128_u64[0] = (unsigned __int64)++v13;
          if ( v9 == v13 )
            goto LABEL_18;
        }
        v8 = (__int64 *)v16.m128_u64[0];
      }
      while ( v9 != (__int64 *)v16.m128_u64[0] );
LABEL_18:
      if ( (unsigned __int8)sub_21B9810(v11, a3) )
        sub_21B5A40(v11, a1, v15);
    }
  }
}
