__int64 __fastcall sub_D4AFE0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  bool v12; // r15
  unsigned __int64 v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __int64 v17; // rbp
  __int64 *v18; // rbx
  void *v19; // rax
  __m128i v20; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-B8h]
  __int64 v22; // [rsp+18h] [rbp-B0h]
  __m128i v23; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v24; // [rsp+30h] [rbp-98h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-88h] BYREF
  __m128i v26; // [rsp+50h] [rbp-78h] BYREF
  void *v27; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+68h] [rbp-60h]
  void *v29; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+78h] [rbp-50h]
  void *v31; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+88h] [rbp-40h]

  v2 = a1[22];
  v20 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = a1[22];
  v23 = _mm_load_si128(&v20);
  v4 = (__int64 *)sub_E21760(v3, 16);
  v5 = *v4;
  v6 = v4[1];
  sub_E21790(v3, 16);
  sub_D47CB0((__int64)&v31, v23.m128i_i64);
  v11 = v32;
  if ( v32 <= 0x40 )
  {
    if ( v31 )
    {
LABEL_5:
      v24.m128i_i64[0] = 0;
      v24.m128i_i32[2] = 0;
      v13 = sub_D45A20(a1, v6, v7, v8, v9, v10);
      v14 = _mm_load_si128(&v23);
      v25[1] = v6;
      v22 = v15;
      v21 = v13;
      v24.m128i_i64[0] = v13;
      v25[0] = v5;
      v24.m128i_i32[2] = v15;
      v26 = v14;
      sub_D47CB0((__int64)&v29, v25);
      sub_D47CB0((__int64)&v27, v26.m128i_i64);
      sub_2207ED0(&v31, &v29, &v27);
      sub_CF0850((void **)&v24, (__int64)&v31);
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      if ( v30 > 0x40 )
      {
        if ( v29 )
          operator delete[](v29);
      }
      *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v24);
      return 1;
    }
  }
  else
  {
    v12 = v11 == (unsigned int)sub_2206780(&v31);
    if ( v31 )
      operator delete[](v31);
    if ( !v12 )
      goto LABEL_5;
  }
  v17 = sub_E1EF60(a1[50]);
  v18 = (__int64 *)sub_E33C10(a1, v17, 2508, 0);
  v19 = (void *)sub_EEC8C0(*(_QWORD *)(v17 + 24));
  if ( v18 )
  {
    v31 = v19;
    LOBYTE(v32) = 1;
    sub_AEC610(v18, (__int64 *)&v31);
  }
  return 0;
}
