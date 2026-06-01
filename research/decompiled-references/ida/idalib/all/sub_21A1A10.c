__int64 __fastcall sub_21A1A10(__int64 a1, char a2, char a3, int a4, __int32 a5, __int64 a6, __int128 a7, __int128 a8)
{
  _QWORD *v12; // rbx
  void **v13; // r12
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  __int64 v21; // [rsp+18h] [rbp-60h] BYREF
  __m128i v22; // [rsp+20h] [rbp-58h]
  __m128i v23; // [rsp+30h] [rbp-48h]

  v21 = 0;
  v22 = _mm_loadu_si128((const __m128i *)&a7);
  v23 = _mm_loadu_si128((const __m128i *)&a8);
  v12 = (_QWORD *)operator new(0x168u);
  sub_219EE60(
    (__int64)v12,
    a2,
    a3,
    &v21,
    a4,
    a5,
    v22.m128i_i64[0],
    v22.m128i_i64[1],
    v23.m128i_i64[0],
    v23.m128i_i64[1],
    a6);
  if ( v21 )
  {
    *(_QWORD *)a1 = v21;
    v13 = (void **)v12[33];
    *(_BYTE *)(a1 + 8) |= 1u;
    v21 = 0;
    *v12 = &off_2C74438;
    if ( v13 )
    {
      if ( *v13 != v13 + 2 )
        free(*v13);
      operator delete(v13, 0x918u);
    }
    v14 = (_QWORD *)v12[29];
    if ( v14 != v12 + 31 )
      free(v14);
    v15 = (_QWORD *)v12[26];
    if ( v15 != v12 + 28 )
      free(v15);
    v16 = (_QWORD *)v12[16];
    if ( v16 != v12 + 18 )
      free(v16);
    v17 = (_QWORD *)v12[13];
    if ( v17 != v12 + 15 )
      free(v17);
    v18 = (_QWORD *)v12[10];
    if ( v18 != v12 + 12 )
      free(v18);
    *v12 = &unk_2C74610;
    sub_21A25E0(v12);
    operator delete(v12, 0x168u);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v12;
  }
  return a1;
}
