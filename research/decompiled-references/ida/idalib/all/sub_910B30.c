__int64 __fastcall sub_910B30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __m128i v10; // xmm0
  _BOOL4 v16; // ecx

  v9 = a1 + 8;
  *(_QWORD *)(v9 - 8) = 0;
  *(_QWORD *)(v9 + 5240) = 0;
  memset(
    (void *)(v9 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v9 & 0xFFFFFFF8) + 5256) >> 3));
  v10 = _mm_loadu_si128((const __m128i *)&a7);
  *(_QWORD *)(a1 + 888) = a8;
  _RAX = 0;
  *(__m128i *)(a1 + 872) = v10;
  __asm { cpuid }
  v16 = 0;
  if ( (unsigned int)_RAX > 6 )
  {
    _RAX = 7;
    __asm { cpuid }
    v16 = (_RBX & 0x108) == 264;
  }
  *(_DWORD *)(a1 + 8) = v16;
  return sub_910AC0(a1, 2);
}
