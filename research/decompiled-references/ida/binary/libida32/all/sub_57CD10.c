__int64 __fastcall sub_57CD10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, __int64 a6, __int64 *a7)
{
  int v7; // r14d
  _UNKNOWN **v8; // r13
  __int64 v9; // rsi
  __m128i si128; // xmm0
  __int64 v12; // rax

  v7 = 0;
  v8 = &off_2BD12A0;
  do
  {
    if ( !strcmp(a5, (const char *)v8[3]) )
    {
      qlseek(a2, 0, 0);
      sub_395C70((int)"HIDECANCEL\nBuilding list of the modules");
    }
    ++v7;
    v8 += 5;
  }
  while ( v7 != 4 );
  if ( a7 )
  {
    v9 = *a7;
    if ( (unsigned __int64)a7[2] <= 0x16 )
    {
      v12 = qvector_reserve(a7, v9, 23, 1);
      *a7 = v12;
      v9 = v12;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383CE0);
    a7[1] = 23;
    *(__m128i *)v9 = si128;
    *(_QWORD *)(v9 + 14) = 0x656D616E2074616DLL;
    *(_BYTE *)(*a7 + 22) = 0;
  }
  return 0;
}

