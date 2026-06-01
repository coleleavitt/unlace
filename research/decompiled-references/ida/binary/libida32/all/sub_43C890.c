__int64 __fastcall sub_43C890(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, _QWORD, _QWORD))
{
  __int64 v9; // r12
  __m128i si128; // xmm0
  void *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // edx

  if ( !a5 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
    v11 = *(void **)(a2 + 56);
    *(_DWORD *)a2 = 0x800000;
    *(_WORD *)(a2 + 4) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 32) = 0xFFFFFFFF00000000LL;
    *(_BYTE *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_QWORD *)(a2 + 48) = 0xFFFFFFFF00000002LL;
    *(__m128i *)(a2 + 8) = si128;
    if ( v11 )
    {
      *(_QWORD *)(a2 + 64) = 0;
      qfree(v11);
    }
    *(_QWORD *)(a2 + 56) = 0;
    *(_OWORD *)(a2 + 64) = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a4 + 8 * v9))(a2, a3, *(_QWORD *)(*a1 + 544LL));
    if ( v12 )
      break;
    if ( a5 == ++v9 )
      return 0;
  }
  v13 = *(unsigned int *)(a3 + 8);
  if ( a6 )
    v14 = a6(a2, v13, v12, *(_QWORD *)(*a1 + 544LL));
  else
    v14 = sub_439600(a1, a2, v13, v12);
  v15 = 1;
  if ( v14 != 1 )
  {
    if ( v14 == 2 )
      sub_43C710((int)a1, *(_DWORD *)(a3 + 8));
    return 0;
  }
  return v15;
}

