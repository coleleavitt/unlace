__int64 __fastcall sub_DFBFC0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __m128i v14; // [rsp+0h] [rbp-98h] BYREF
  void *v15; // [rsp+10h] [rbp-88h]
  __int64 v16; // [rsp+18h] [rbp-80h]
  __m128i v17; // [rsp+20h] [rbp-78h] BYREF
  __m128i v18; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+48h] [rbp-50h]
  void *v21; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-40h]
  void *v23; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+68h] [rbp-30h]

  v3 = a1[22];
  v14 = _mm_loadu_si128((const __m128i *)sub_E21760(v3, 16));
  sub_E21790(v3, 16);
  v4 = a1[22];
  v17 = _mm_load_si128(&v14);
  v14 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v5 = _mm_load_si128(&v14);
  v19 = nullptr;
  v20 = 0;
  v18 = v5;
  v10 = (void *)sub_D45A20(a1, v5.m128i_u32[2], v6, v7, v8, v9);
  v16 = v11;
  v15 = v10;
  v19 = v10;
  v20 = v11;
  sub_D47D10((__int64)&v23, (__int64)&v17, 0);
  sub_D47D10((__int64)&v21, (__int64)&v18, 0);
  v12 = sub_D73480((__int64)a1, a2, (__int64)&v21, (__int64)&v23, &v19);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  return v12;
}
