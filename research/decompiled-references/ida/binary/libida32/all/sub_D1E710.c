__int64 __fastcall sub_D1E710(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // r13
  __m128i v7; // rax
  __m128i v8; // [rsp+0h] [rbp-88h] BYREF
  char v9; // [rsp+1Fh] [rbp-69h] BYREF
  __m128i v10; // [rsp+20h] [rbp-68h] BYREF
  __m128i v11; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+40h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v6 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a4;
    v8 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v6, 16));
    sub_DFDA50(v6, 16);
    v10 = _mm_load_si128(&v8);
    v7.m128i_i64[0] = sub_D1E4A0((_QWORD *)(a1 + 384), a2);
    v11 = v7;
    sub_CDADA0((__int64)v12, (__int64)&v10);
    sub_21DEB80(v12, a2, a3, &v9);
    sub_CDAFD0((__int64)&v11, v12);
    sub_971860(v12);
    *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v11);
  }
  return 1;
}

