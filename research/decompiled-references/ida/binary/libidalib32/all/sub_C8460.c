__int64 sub_C8460()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  __m128i v2; // xmm0
  unsigned int v3; // edx
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  *(_QWORD *)v0 = &stru_235898;
  *(_QWORD *)(v0 + 8) = 0x200040F000004LL;
  *(_QWORD *)(v0 + 40) = "@0:1457[]\nModules";
  *(_OWORD *)(v0 + 16) = -1;
  v1 = (_QWORD *)(v0 + 80);
  v2 = _mm_loadl_epi64((const __m128i *)&off_22FC60);
  *(_QWORD *)(v0 + 32) = 0;
  *(_DWORD *)(v0 + 48) = 3;
  *(_DWORD *)(v0 + 72) = -1;
  *(__m128i *)(v0 + 56) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&off_22FA90);
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
  *(_DWORD *)(v0 + 72) = 150;
  *(_QWORD *)v0 = off_22F578;
  v5 = 0;
  v6 = 0;
  LOBYTE(v0) = sub_198260(v0, &v5) == 0;
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return (unsigned int)v0;
}

