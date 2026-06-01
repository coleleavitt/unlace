__int64 __fastcall sub_D4A670(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  int v12; // edx
  int v13; // r12d
  void *v14; // rbx
  __int64 v15; // rax
  unsigned int v17; // eax
  void *v18; // r13
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __m128i v20; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21[2]; // [rsp+20h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-40h]
  void *v24; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-30h]

  v1 = a1[22];
  v2 = (__int64 *)sub_E21760(v1, 16);
  v3 = v2[1];
  v4 = *v2;
  sub_E21790(v1, 16);
  v5 = a1[22];
  v19 = _mm_loadu_si128((const __m128i *)sub_E21760(v5, 16));
  sub_E21790(v5, 16);
  v10 = sub_D45A20(a1, v3, v6, v7, v8, v9);
  v11 = _mm_load_si128(&v19);
  v21[1] = v3;
  v21[0] = v4;
  v13 = v12;
  v14 = (void *)v10;
  v20 = v11;
  sub_D47CB0((__int64)&src, v21);
  sub_D47CB0((__int64)&v24, v20.m128i_i64);
  if ( v23 > 0x40 )
  {
    sub_2205CC0(&src, &v24);
    v17 = v23;
    v18 = src;
    v23 = 0;
    if ( v17 <= 0x40 )
    {
      v14 = src;
    }
    else
    {
      memcpy(v14, src, 8 * (((unsigned __int64)v17 + 63) >> 6));
      operator delete[](v18);
    }
  }
  else
  {
    v14 = (void *)((unsigned __int64)v24 ^ (unsigned __int64)src);
    v23 = 0;
    src = (void *)((unsigned __int64)v24 ^ (unsigned __int64)src);
  }
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v23 > 0x40 && src )
    operator delete[](src);
  v15 = sub_E216C0(a1[22], 16);
  *(_QWORD *)v15 = v14;
  *(_DWORD *)(v15 + 8) = v13;
  return 1;
}
