__int64 __fastcall sub_10D7050(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int8 a6,
        _BYTE *a7,
        void *a8,
        unsigned __int8 a9,
        __int64 a10,
        _QWORD *a11,
        unsigned int a12)
{
  __int64 v14; // rax
  __int64 *v16; // rax
  int v17; // eax
  __int64 v20; // [rsp+20h] [rbp-118h] BYREF
  void *v21; // [rsp+28h] [rbp-110h]
  __int64 v22; // [rsp+30h] [rbp-108h]
  __m128i si128; // [rsp+38h] [rbp-100h] BYREF
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-E0h]
  __m128i v26[13]; // [rsp+60h] [rbp-D8h] BYREF

  sub_10BEA20(&ptr, (__int64)a5, a7, (size_t)a8, a12);
  v20 = a4;
  v21 = &si128;
  if ( ptr == v26 )
  {
    si128 = _mm_load_si128(v26);
  }
  else
  {
    v21 = ptr;
    si128.m128i_i64[0] = v26[0].m128i_i64[0];
  }
  v22 = v25;
  v14 = sub_10BD7C0((__int64)a11, (unsigned __int64 *)&v20);
  if ( (_QWORD *)v14 == a11 + 1 )
  {
    sub_10D4260((__int64)&ptr, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    v16 = sub_10CCF40(a11, (unsigned __int64 *)&v20);
    sub_10BD900(v16, (__int64 *)&ptr);
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    v17 = v25;
    *(_QWORD *)a1 = a1 + 16;
    if ( v17 )
      sub_10BDA30((char ***)a1, (char ***)&ptr);
    if ( ptr != v26 )
      free(ptr);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    if ( *(_DWORD *)(v14 + 80) )
      sub_10BD900((__int64 *)a1, (__int64 *)(v14 + 72));
  }
  if ( v21 != &si128 )
    operator delete(v21);
  return a1;
}

