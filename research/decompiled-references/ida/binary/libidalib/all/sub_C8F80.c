bool sub_C8F80()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  __m128i v2; // xmm0
  unsigned int v3; // edx
  int v4; // eax
  int v6; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( !dbg )
    return 0;
  v0 = qalloc_or_throw();
  *(_QWORD *)v0 = &stru_236898;
  *(_QWORD *)(v0 + 8) = 0x200840E000004LL;
  *(_QWORD *)(v0 + 40) = "@0:1423[]\nNOMAINMENU\nNOSTATUSBAR\nThreads";
  *(_OWORD *)(v0 + 16) = -1;
  v1 = (_QWORD *)(v0 + 80);
  v2 = _mm_loadl_epi64((const __m128i *)&off_230CD0);
  *(_QWORD *)(v0 + 32) = 0;
  *(_DWORD *)(v0 + 48) = 4;
  *(_DWORD *)(v0 + 72) = -1;
  *(__m128i *)(v0 + 56) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_230B40);
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
  *(_DWORD *)(v0 + 72) = 121;
  *(_QWORD *)v0 = off_230458;
  v4 = dword_252588;
  *(_DWORD *)(v0 + 180) = dword_252588;
  v6 = v4;
  return sub_198E60(v0, &v6) == 0;
}

