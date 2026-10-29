__int64 __fastcall sub_1E5F620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // rbp
  __int64 v8; // rax
  __m128i v9; // xmm0
  unsigned int v10; // r12d
  void *v11; // rdi
  void **v12; // rbx
  unsigned __int64 v13; // rbp
  void *v14; // rdi
  __int64 v15; // rsi
  __m128i v17; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v18; // [rsp+18h] [rbp-E0h]
  unsigned int v19; // [rsp+20h] [rbp-D8h]
  _QWORD v20[3]; // [rsp+30h] [rbp-C8h] BYREF
  void *v21; // [rsp+48h] [rbp-B0h]
  __int64 v22; // [rsp+50h] [rbp-A8h]
  __m128i v23; // [rsp+58h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-90h]
  void **v25; // [rsp+70h] [rbp-88h]
  __int64 v26; // [rsp+78h] [rbp-80h]
  __int64 v27; // [rsp+80h] [rbp-78h]
  __int64 v28; // [rsp+88h] [rbp-70h]
  char *v29; // [rsp+90h] [rbp-68h]
  __int64 v30; // [rsp+98h] [rbp-60h]
  __int64 v31; // [rsp+A0h] [rbp-58h]
  unsigned int v32; // [rsp+A8h] [rbp-50h]
  __int64 *v33; // [rsp+B0h] [rbp-48h]
  __int64 v34; // [rsp+B8h] [rbp-40h]
  char v35; // [rsp+C0h] [rbp-38h]

  v3 = a3;
  v17.m128i_i64[1] = 0;
  v18 = 0;
  v19 = 0;
  if ( a3 )
  {
    v4 = sub_B8C330(a3);
    v5 = sub_B8C330(a2);
    v20[2] = v4;
    v6 = *(_QWORD *)(a1 + 232);
    v20[1] = v5;
    v20[0] = v6;
    v23 = 0u;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = nullptr;
    v22 = 8;
    v21 = (void *)operator new(0x40u);
    v7 = (char *)v21 + 24;
    v8 = operator new(0x200u);
    v25 = (void **)((char *)v21 + 24);
    v17.m128i_i64[0] = v8;
    v9 = _mm_loadl_epi64(&v17);
    *((_QWORD *)v21 + 3) = v8;
    v27 = v8;
    v26 = v8;
    v24 = v8 + 512;
    v28 = v8 + 512;
    v33 = &v17.m128i_i64[1];
    v23 = _mm_unpacklo_epi64(v9, v9);
    v29 = v7;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v34 = 0x1010000000000LL;
    v35 = 0;
    v10 = sub_AFA170((__int64)v20, a2, v3);
    operator delete(v30, 16LL * v32, 8);
    v11 = v21;
    if ( v21 )
    {
      v12 = v25;
      v13 = (unsigned __int64)(v29 + 8);
      if ( v29 + 8 > (char *)v25 )
      {
        do
        {
          v14 = *v12++;
          operator delete(v14);
        }
        while ( v13 > (unsigned __int64)v12 );
        v11 = v21;
      }
      operator delete(v11);
    }
    v3 = v17.m128i_i64[1];
    v15 = 24LL * v19;
  }
  else
  {
    v15 = 0;
    v10 = 0;
  }
  operator delete(v3, v15, 8);
  return v10;
}
