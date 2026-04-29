__int64 __fastcall sub_3DEED0(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm1
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __m128i v10; // xmm2
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __m128i v19; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  sub_3DEB00((__int64)&v18, a1 + 272);
  v3 = _mm_loadu_si128(&v19);
  v4 = *(_QWORD *)(a1 + 248);
  v5 = v18;
  v19 = 0;
  v18 = 0;
  v17 = v3;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 256);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = v4 + 32 * i;
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 16) = 0;
          qfree(v9);
          v4 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v4);
    v10 = _mm_load_si128(&v17);
    v11 = v18;
    *(_QWORD *)(a1 + 248) = v5;
    *(__m128i *)(a1 + 256) = v10;
    if ( v11 )
    {
      v12 = v19.m128i_i64[0];
      if ( v19.m128i_i64[0] )
      {
        v13 = 0;
        do
        {
          v14 = v11 + 32 * v13;
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            *(_QWORD *)(v14 + 16) = 0;
            qfree(v15);
            v11 = v18;
          }
          ++v13;
        }
        while ( v12 != v13 );
      }
      v19.m128i_i64[0] = 0;
      qfree(v11);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v5;
    *(__m128i *)(a1 + 256) = v3;
  }
  return a2;
}
