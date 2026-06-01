__int64 __fastcall sub_80070(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  int v9; // r9d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __m128i v13; // xmm0
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9

  v3 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 608) = 0;
  if ( a2 && *(_QWORD *)(a1 + 568) == a2 )
    goto LABEL_10;
  v5 = *(_QWORD *)(a1 + 544);
  if ( a2 < v5 && *(_QWORD *)(v3 + 24) < v5 - a2 )
    goto LABEL_10;
  if ( (*(_BYTE *)(a1 + 153) & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 752) == a1 + 752 )
    {
      v6 = 0;
    }
    else
    {
      v13 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 760) - 24LL));
      v6 = _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0];
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 528);
  }
  v7 = *(_QWORD *)(a1 + 512);
  v8 = *(_QWORD *)(a1 + 8) - v7;
  v9 = *(_DWORD *)(a1 + 536);
  v10 = v7 - v6;
  *(_QWORD *)(a1 + 616) = v8;
  *(_QWORD *)(a1 + 600) = v10;
  if ( !v9 )
  {
    if ( v10 > a2 )
      v10 = a2;
    *(_QWORD *)(a1 + 600) = v10;
    if ( !*(_DWORD *)(v3 + 128) )
      goto LABEL_17;
    v14 = *(_QWORD *)(v3 + 120) - a2 + (*(_QWORD *)(v3 + 112) << *(_QWORD *)(v3 + 72));
    if ( v14 >= v8 )
      goto LABEL_17;
    goto LABEL_21;
  }
  v11 = *(_QWORD *)(v3 + 64);
  if ( a2 < v11 || v11 + *(_QWORD *)(v3 + 56) < a2 )
  {
LABEL_10:
    *(_QWORD *)(a1 + 568) = a2;
    *(_DWORD *)(a1 + 552) = 3;
    return 1;
  }
  v15 = a2 - v11;
  if ( a2 - v11 > v10 )
    v15 = v10;
  *(_QWORD *)(a1 + 600) = v15;
  v14 = *(_QWORD *)(v3 + 64) + *(_QWORD *)(v3 + 56) - a2;
  if ( v14 < v8 )
LABEL_21:
    *(_QWORD *)(a1 + 616) = v14;
LABEL_17:
  *(_QWORD *)(a1 + 560) = a2;
  *(_DWORD *)(a1 + 552) = 1;
  *(_QWORD *)(a1 + 568) = a2;
  return 0;
}

