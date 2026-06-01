_UNKNOWN **__fastcall sub_3D7D10(__int64 a1, const char *a2, unsigned __int8 a3, unsigned __int8 a4, int a5, char a6)
{
  size_t v10; // r15
  void *v11; // rax
  char v12; // al
  const char *v13; // rdx
  __m128i v14; // xmm0
  _QWORD *v15; // rbp
  unsigned int v16; // edx
  __m128i v17; // xmm0
  struct _Unwind_Exception *v19; // rbp

  *(_QWORD *)a1 = &off_4E6AE8;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a2
    && (v10 = strlen(a2),
        v11 = (void *)qvector_reserve(),
        *(_QWORD *)(a1 + 8) = v11,
        *(_QWORD *)(a1 + 16) = v10 + 1,
        memmove(v11, a2, v10),
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v10) = 0,
        v12 = a6,
        *(_QWORD *)(a1 + 16)) )
  {
    v13 = *(const char **)(a1 + 8);
  }
  else
  {
    v12 = a6;
    v13 = s1;
  }
  *(_BYTE *)(a1 + 42) = v12;
  *(_OWORD *)(a1 + 48) = -1;
  v14 = _mm_loadl_epi64((const __m128i *)&off_4E8998);
  *(_QWORD *)(a1 + 32) = &unk_4EB238;
  *(_WORD *)(a1 + 40) = 4;
  *(_BYTE *)(a1 + 43) = -1;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = v13;
  *(_DWORD *)(a1 + 80) = 1;
  *(_DWORD *)(a1 + 104) = -1;
  *(_DWORD *)(a1 + 44) = ((a3 + 3840) | a5 | (2 * a4)) & 0xFFFFFFFB;
  v15 = (_QWORD *)(a1 + 112);
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)&off_4E8968);
  do
  {
    *v15 = 0;
    v15 += 3;
    *((_OWORD *)v15 - 1) = 0;
  }
  while ( v15 != (_QWORD *)(a1 + 208) );
  *(_DWORD *)(a1 + 208) = 0;
  v16 = *(_DWORD *)(a1 + 44);
  if ( ((v16 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 43) != 0xFF )
    {
      if ( !under_debugger )
      {
        v19 = (struct _Unwind_Exception *)interr();
        if ( *(_QWORD *)(a1 + 8) )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree();
        }
        _Unwind_Resume(v19);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 43) = ((v16 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 44) = v16 & 0xFE07FFFF;
  }
  v17 = _mm_loadl_epi64((const __m128i *)off_4E8988);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)a1 = &unk_4EBA00;
  *(_QWORD *)(a1 + 32) = &unk_4EBA38;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)&off_4EBB10);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E8990),
                             (__m128i)(unsigned __int64)&off_4EBB40);
  *(_OWORD *)(a1 + 256) = 0;
  return &off_4EBB40;
}
