bool sub_14A840()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  __m128i v2; // xmm0
  unsigned int v3; // edx
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( dword_245160 < (unsigned __int64)xmmword_252598 )
    sub_14A080(
      (int *)(qword_252590 + ((__int64)dword_245160 << 8)),
      (__int64 *)(qword_252590 + ((__int64)dword_245160 << 8) + 88));
  v0 = qalloc_or_throw();
  *(_QWORD *)v0 = &stru_236898;
  *(_QWORD *)(v0 + 8) = 0x2088011000004LL;
  *(_QWORD *)(v0 + 40) = "@0:1412[]\nCall Stack";
  *(_OWORD *)(v0 + 16) = -1;
  v1 = (_QWORD *)(v0 + 80);
  v2 = _mm_loadl_epi64((const __m128i *)&off_234A48);
  *(_QWORD *)(v0 + 32) = 0;
  *(_DWORD *)(v0 + 48) = 3;
  *(_DWORD *)(v0 + 72) = -1;
  *(__m128i *)(v0 + 56) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&off_234A30);
  do
  {
    *v1 = 0;
    v1 += 3;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( v1 != (_QWORD *)(v0 + 176) );
  *(_DWORD *)(v0 + 176) = 0;
  v3 = *(_DWORD *)(v0 + 12);
  if ( ((v3 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v0 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v0 + 11) = ((v3 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v0 + 12) = v3 & 0xFE07FFFF;
  }
  *(_DWORD *)(v0 + 72) = 131;
  *(_QWORD *)v0 = off_234978;
  v5[0] = 0;
  return sub_198E60(v0, v5) == 0;
}

