void __fastcall sub_144F1E0(double a1, double a2, __int64 a3, __int64 a4, __int64 a5, unsigned int *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v11[96]; // [rsp+18h] [rbp-60h] BYREF

  v7 = *(_QWORD *)(a4 + 1112);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v11;
  sub_13DB780(v7, &ptr, si128, a2);
  v8 = *(_QWORD *)(a4 + 1192);
  if ( v8 )
    (*(void (__fastcall **)(__int64, _QWORD, void *, __int64))(*(_QWORD *)v8 + 128LL))(v8, *a6, ptr, si128.m128i_i64[0]);
  if ( ptr != v11 )
    free(ptr);
}
