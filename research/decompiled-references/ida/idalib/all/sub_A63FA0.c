__int64 __fastcall sub_A63FA0(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __m128 v6; // xmm0
  __int64 *v7; // r12
  __int64 v8; // rax
  __m128i v9; // xmm0
  void *v10; // rdi
  void **v11; // rbx
  unsigned __int64 v12; // r12
  void *v13; // rdi
  __m128i v14; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+18h] [rbp-D0h]
  unsigned int v16; // [rsp+20h] [rbp-C8h]
  __m128 v17; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-A8h]
  void *v19; // [rsp+48h] [rbp-A0h]
  __int64 v20; // [rsp+50h] [rbp-98h]
  __m128i v21; // [rsp+58h] [rbp-90h]
  __int64 v22; // [rsp+68h] [rbp-80h]
  unsigned __int64 v23; // [rsp+70h] [rbp-78h]
  __int64 v24; // [rsp+78h] [rbp-70h]
  __int64 v25; // [rsp+80h] [rbp-68h]
  __int64 v26; // [rsp+88h] [rbp-60h]
  __int64 *v27; // [rsp+90h] [rbp-58h]
  __int64 v28; // [rsp+98h] [rbp-50h]
  __int64 v29; // [rsp+A0h] [rbp-48h]
  unsigned int v30; // [rsp+A8h] [rbp-40h]
  __int64 *v31; // [rsp+B0h] [rbp-38h]
  __int64 v32; // [rsp+B8h] [rbp-30h]
  char v33; // [rsp+C0h] [rbp-28h]

  if ( (**(_WORD **)(a1 + 2320) & 0x808) != 8 )
    return 0;
  v4 = a2;
  v14 = (__m128i)a1;
  v18 = a1;
  v6 = _mm_loadh_ps((const double *)v14.m128i_i64);
  v15 = 0;
  v17 = v6;
  v16 = 0;
  v19 = nullptr;
  v21 = 0u;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = nullptr;
  v20 = 8;
  v19 = (void *)operator new(0x40u);
  v7 = (__int64 *)((char *)v19 + 8 * ((unsigned __int64)(v20 - 1) >> 1));
  v8 = operator new(0x200u);
  v23 = (unsigned __int64)v7;
  v14.m128i_i64[0] = v8;
  v9 = _mm_loadl_epi64(&v14);
  *v7 = v8;
  v25 = v8;
  v24 = v8;
  v22 = v8 + 512;
  v26 = v8 + 512;
  v31 = &v14.m128i_i64[1];
  v21 = _mm_unpacklo_epi64(v9, v9);
  v27 = v7;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0x10000000000LL;
  v33 = 0;
  if ( !(unsigned __int8)sub_AFA150(&v17, a2, a3) )
    v4 = 0;
  operator delete(v28, 16LL * v30, 8);
  v10 = v19;
  if ( v19 )
  {
    v11 = (void **)v23;
    v12 = (unsigned __int64)(v27 + 1);
    if ( (unsigned __int64)(v27 + 1) > v23 )
    {
      do
      {
        v13 = *v11++;
        operator delete(v13);
      }
      while ( v12 > (unsigned __int64)v11 );
      v10 = v19;
    }
    operator delete(v10);
  }
  operator delete(v14.m128i_i64[1], 24LL * v16, 8);
  return v4;
}
