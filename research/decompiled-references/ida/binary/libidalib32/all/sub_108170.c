__int64 sub_108170()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  __m128i v2; // xmm0
  unsigned int v3; // edx
  bool v4; // cc
  _OWORD *v5; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  *(_QWORD *)v0 = &stru_235898;
  *(_QWORD *)(v0 + 8) = 0x20C0236000004LL;
  *(_QWORD *)(v0 + 40) = "@0:1714[]\nUndo history";
  *(_OWORD *)(v0 + 16) = -1;
  v1 = (_QWORD *)(v0 + 80);
  v2 = _mm_loadl_epi64((const __m128i *)&off_230A90);
  *(_QWORD *)(v0 + 32) = 0;
  *(_DWORD *)(v0 + 48) = 2;
  *(_DWORD *)(v0 + 72) = -1;
  *(__m128i *)(v0 + 56) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&off_230A80);
  do
  {
    *v1 = 0;
    v1 += 3;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( (_QWORD *)(v0 + 176) != v1 );
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
  v4 = *(_QWORD *)(v0 + 144) <= 0x10u;
  *(_QWORD *)(v0 + 184) = 0;
  *(_QWORD *)v0 = off_2305A0;
  v5 = *(_OWORD **)(v0 + 128);
  *(_OWORD *)(v0 + 192) = 0;
  *(_OWORD *)(v0 + 208) = 0;
  if ( v4 )
  {
    v8 = qvector_reserve();
    *(_QWORD *)(v0 + 128) = v8;
    v5 = (_OWORD *)v8;
  }
  si128 = _mm_load_si128(xmmword_1D24B0);
  *(_QWORD *)(v0 + 136) = 17;
  v9[0] = -1;
  *v5 = si128;
  *(_BYTE *)(*(_QWORD *)(v0 + 128) + 16LL) = 0;
  sub_198260(v0, v9);
  return 1;
}

