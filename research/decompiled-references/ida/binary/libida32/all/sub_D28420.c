__int64 __fastcall sub_D28420(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __m128i v9; // rax
  __m128i v10; // [rsp+0h] [rbp-38h] BYREF
  void *v11; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v8 = (_QWORD *)(a1 + 384);
  v8[107] = *a3;
  v9.m128i_i64[0] = sub_D21170(v8, *(_DWORD *)(a2 + 8), (__int64)a3, a4, a5, a6);
  v10 = v9;
  sub_D27A40((__int64)&v11, a2, 0);
  sub_CE8850((void **)&v10, (__int64)&v11);
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
  *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v10);
  return 1;
}

