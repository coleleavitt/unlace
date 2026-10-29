__int64 __fastcall sub_DD8FE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  void *v5; // r13
  unsigned int v6; // ebx
  __m128i v8; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+18h] [rbp-60h] BYREF
  __m128i v10; // [rsp+20h] [rbp-58h] BYREF
  void *v11; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-40h]
  char v13; // [rsp+3Ch] [rbp-3Ch]
  void *v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 176);
  v8 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v3, 16));
  sub_DFDA50(v3, 16);
  v4 = *(_QWORD *)(a1 + 176);
  v10 = _mm_load_si128(&v8);
  v5 = *(void **)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v9 = 0;
  sub_D27A40((__int64)&v14, (__int64)&v10, 0);
  v11 = v5;
  v12 = 64;
  v13 = 0;
  v6 = sub_D570F0(a1, a2, (__int64)&v11, (__int64)&v14, &v9);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return v6;
}

