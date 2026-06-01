__int64 __fastcall sub_D4F7B0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 *v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  unsigned int v13; // edx
  void *v14; // rax
  __m128i v16; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v17; // [rsp+10h] [rbp-98h]
  __int64 v18; // [rsp+18h] [rbp-90h]
  __m128i v19; // [rsp+20h] [rbp-88h] BYREF
  __m128i v20; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v22; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-50h]
  void *v24; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-40h]
  void *v26; // [rsp+70h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+78h] [rbp-30h]

  v1 = a1[22];
  v2 = (__int64 *)sub_E21760(v1, 16);
  v3 = v2[1];
  v4 = *v2;
  sub_E21790(v1, 16);
  v5 = a1[22];
  v16 = _mm_loadu_si128((const __m128i *)sub_E21760(v5, 16));
  sub_E21790(v5, 16);
  v19.m128i_i64[0] = 0;
  v19.m128i_i32[2] = 0;
  v10 = sub_D44EB0(a1, v3, v6, v7, v8, v9);
  v11 = _mm_load_si128(&v16);
  v21[1] = v3;
  v18 = v12;
  v17 = v10;
  v19.m128i_i64[0] = v10;
  v20 = v11;
  v19.m128i_i32[2] = v12;
  v21[0] = v4;
  sub_D4B720((__int64)&v24, v21);
  sub_D4B720((__int64)&v26, v20.m128i_i64);
  v13 = v25;
  if ( v25 > 0x40 )
  {
    sub_2205B60(&v24, &v26);
    v13 = v25;
    v14 = v24;
  }
  else
  {
    v14 = (void *)((unsigned __int64)v26 & (unsigned __int64)v24);
    v24 = (void *)((unsigned __int64)v26 & (unsigned __int64)v24);
  }
  v23 = v13;
  v22 = v14;
  v25 = 0;
  sub_D0C590((void **)&v19, (__int64)&v22);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v19);
  return 1;
}
