__int64 __fastcall sub_697960(
        __int64 a1,
        __int64 a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  v11 = *(_QWORD *)(a1 + 8);
  if ( !v11 )
    return 0;
  if ( *(_BYTE *)(a1 + 51) )
  {
    v12 = (unsigned int)((unsigned __int64)(*(_QWORD *)(a2 + 8) + 7LL) >> 3);
    if ( v12 < *(_QWORD *)(a1 + 24) )
      v12 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v12 = (unsigned int)((unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + (v11 << 7) - 128)
                                          + *(_QWORD *)(*(_QWORD *)a1 + (v11 << 7) - 128 + 8)
                                          + 7LL) >> 3);
    if ( (*(_BYTE *)(a1 + 45) & 4) != 0 && a3 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 24) < v12 )
        *(_QWORD *)(a1 + 24) = v12;
      return 0;
    }
  }
  *(_QWORD *)(a1 + 24) = v12;
  if ( a3 < 0 || (*(_BYTE *)(a1 + 45) & 4) != 0 )
    return 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 49) = 0;
  if ( (unsigned __int8)sub_557100(nullptr, 0, 0, (__int64 *)a1, nullptr, nullptr, a4, a5, a6, a7, a8, a9, a10, a11, 6) )
    return 0;
  else
    return 4294967268LL;
}

