__int64 __fastcall sub_450800(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, _QWORD, _QWORD))
{
  __int64 v11; // r15
  void *v12; // rdi
  __m128i si128; // xmm1
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // edx

  if ( !a5 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(void **)(a2 + 96);
    *(_DWORD *)a2 = (_DWORD)&loc_800000;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    *(_WORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 64) = -1;
    *(_BYTE *)(a2 + 68) = 0;
    *(_QWORD *)(a2 + 72) = 0;
    *(_DWORD *)(a2 + 80) = 2;
    *(_QWORD *)(a2 + 88) = -1;
    *(__m128i *)(a2 + 8) = si128;
    *(_OWORD *)(a2 + 24) = -1;
    if ( v12 )
    {
      *(_QWORD *)(a2 + 104) = 0;
      qfree(v12);
    }
    *(_QWORD *)(a2 + 96) = 0;
    *(_OWORD *)(a2 + 104) = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a4 + 8 * v11))(a2, a3, *(_QWORD *)(*a1 + 632));
    if ( v14 )
      break;
    if ( a5 == ++v11 )
      return 0;
  }
  v15 = *(_QWORD *)(a3 + 16);
  if ( a6 )
    v16 = a6(a2, v15, v14, *(_QWORD *)(*a1 + 632));
  else
    v16 = sub_44D340(a1, a2, v15, v14);
  v17 = 1;
  if ( v16 != 1 )
  {
    if ( v16 == 2 )
      sub_450680((int)a1);
    return 0;
  }
  return v17;
}
