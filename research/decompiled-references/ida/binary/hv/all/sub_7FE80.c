__int64 __fastcall sub_7FE80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __m128i *v9; // rcx

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 16, 1);
  if ( !v3 )
  {
    *(_QWORD *)(a1 + 64) = "out of memory";
    return 12;
  }
  v4 = (_QWORD *)v3;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 48, a2);
  if ( !v5 )
  {
    *(_QWORD *)(a1 + 64) = "out of memory";
    *v4 = 0;
    return 12;
  }
  *v4 = v5;
  v6 = 0;
  v4[1] = *(_QWORD *)(a1 + 792);
  v7 = 0;
  *(_QWORD *)(a1 + 792) = v4;
  if ( a2 )
  {
    do
    {
      v8 = *(_QWORD **)(a1 + 776);
      ++v7;
      v9 = (__m128i *)(v6 + *v4);
      v6 += 48;
      *(_QWORD *)(a1 + 776) = v9 + 2;
      *v8 = v9 + 2;
      v9[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 768), (__m128i)(unsigned __int64)v8);
    }
    while ( a2 != v7 );
  }
  return 0;
}

