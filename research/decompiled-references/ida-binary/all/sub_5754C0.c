signed __int64 __fastcall sub_5754C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rsi
  _DWORD *v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  signed __int64 result; // rax
  struct timespec v17; // [rsp+20h] [rbp-28h] BYREF

  v10 = a1 + 8;
  *(_DWORD *)(v10 + 40) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  sub_5753C0(
    v10,
    a2,
    a3,
    a4,
    a5,
    a6,
    (__int128)_mm_loadu_si128((const __m128i *)&a7),
    (__int128)_mm_loadu_si128((const __m128i *)&a8));
  v11 = *(_DWORD *)(a1 + 80);
  if ( (_WORD)v11 )
  {
    v12 = *(_QWORD *)(a1 + 72);
    v13 = (_DWORD *)(v12 + 8);
    do
    {
      *v13 = -1;
      v13 += 4;
    }
    while ( (_DWORD *)(v12 + 16LL * (unsigned __int16)(v11 - 1) + 24) != v13 );
  }
  *(_QWORD *)a1 = a2;
  v14 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 108) = v11;
  v15 = 0;
  *(_QWORD *)(a1 + 200) = 0x100000000LL;
  result = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( v14 )
  {
    clock_gettime(1, &v17);
    v15 = v14 / 0xF4240 + v17.tv_sec;
    result = v17.tv_nsec + 1000 * (v14 % 0xF4240);
    if ( result > 999999999 )
    {
      result -= 1000000000LL;
      ++v15;
    }
  }
  *(_QWORD *)(a1 + 152) = v15;
  *(_QWORD *)(a1 + 160) = result;
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  return result;
}
