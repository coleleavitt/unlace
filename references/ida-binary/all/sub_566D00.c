unsigned __int64 __fastcall sub_566D00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  int v14; // ebp
  unsigned __int64 v15; // rax

  v8 = *(_QWORD *)a8;
  LODWORD(v9) = *(unsigned __int8 *)(a8 + 7);
  if ( (*(_QWORD *)a8 & 1) != 0 )
  {
    v10 = sub_565DD0(a1, a2, a8, a4, a5, a6, (__int128)_mm_loadu_si128((const __m128i *)&a7));
    v11 = v10;
    v12 = HIDWORD(v10);
    return ((unsigned __int64)(unsigned int)(v12 + v9) << 32) | v11;
  }
  v14 = *(_DWORD *)(v8 + 20);
  v9 = *(unsigned int *)(v8 + 24);
  v15 = sub_565DD0(a1, a2, a8, a4, a5, a6, (__int128)_mm_loadu_si128((const __m128i *)&a7));
  v11 = v15;
  if ( !v14 )
  {
    v12 = HIDWORD(v15);
    return ((unsigned __int64)(unsigned int)(v12 + v9) << 32) | v11;
  }
  return (v9 << 32) | (unsigned int)(v14 + v15);
}
