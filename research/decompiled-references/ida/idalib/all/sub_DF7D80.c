__int64 __fastcall sub_DF7D80(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  void *v3; // r13
  __int64 v4; // rbp
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __m128i v14; // [rsp+0h] [rbp-88h] BYREF
  void *v15; // [rsp+10h] [rbp-78h]
  __int64 v16; // [rsp+18h] [rbp-70h]
  __m128i v17; // [rsp+20h] [rbp-68h] BYREF
  void *v18; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+38h] [rbp-50h]
  void *v20; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-40h]
  void *v22; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-30h]
  char v24; // [rsp+5Ch] [rbp-2Ch]

  v2 = a1[22];
  v3 = *(void **)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = a1[22];
  v14 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v5 = _mm_load_si128(&v14);
  v18 = nullptr;
  v19 = 0;
  v17 = v5;
  v10 = (void *)sub_D45A20(a1, v5.m128i_u32[2], v6, v7, v8, v9);
  v23 = 64;
  v16 = v11;
  v15 = v10;
  v18 = v10;
  v22 = v3;
  v19 = v11;
  v24 = 0;
  sub_D47D10((__int64)&v20, (__int64)&v17, 0);
  v12 = sub_D6D520((__int64)a1, a2, (__int64)&v20, (__int64)&v22, &v18);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  return v12;
}
