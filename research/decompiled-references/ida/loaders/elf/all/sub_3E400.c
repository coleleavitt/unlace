char __fastcall sub_3E400(__m128i *a1, _DWORD *a2, __int64 a3, int a4, __int64 a5, unsigned int a6, char a7)
{
  unsigned __int64 v9; // rdx
  const __m128i *v10; // rdx
  __int32 v11; // edx

  *a2 = 0;
  if ( a7 )
  {
    if ( (unsigned __int8)sub_3E2C0(a5, (__int64)a1, a6) )
      goto LABEL_3;
    return *a2 != 0;
  }
  v9 = *(unsigned int *)(a3 + 4LL * a4 + 136);
  if ( !(_DWORD)v9 )
    return 0;
  if ( *(_BYTE *)(a3 + 248) )
  {
    if ( v9 < *(_QWORD *)(a3 + 120) )
    {
      v10 = (const __m128i *)(*(_QWORD *)(a3 + 112) + (v9 << 6));
      *a1 = _mm_loadu_si128(v10);
      a1[1] = _mm_loadu_si128(v10 + 1);
      a1[2] = _mm_loadu_si128(v10 + 2);
      a1[3] = _mm_loadu_si128(v10 + 3);
      v11 = v10[2].m128i_i32[2];
      if ( v11 == *(_DWORD *)(a3 + 192) && *(_DWORD *)(a3 + 312) )
      {
        *a2 = 1;
        return 1;
      }
      if ( v11 == *(_DWORD *)(a3 + 160) && *(_DWORD *)(a3 + 296) != *(_DWORD *)(a3 + 312) )
      {
LABEL_3:
        *a2 = 2;
        return 1;
      }
      return *a2 != 0;
    }
    return 0;
  }
  sub_30AC0();
  return sub_3E4E0();
}

