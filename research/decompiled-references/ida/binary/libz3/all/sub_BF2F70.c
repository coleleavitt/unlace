__int64 __fastcall sub_BF2F70(
        __int64 a1,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  v14 = *(_QWORD *)(a1 + 16);
  v15 = qword_1C7EDA0;
  v16 = *(_QWORD *)(v14 + 8984);
  if ( v16 != qword_1C7EDA0 )
    return 1;
  while ( !*(_BYTE *)(v14 + 2416) && a2 < *(_DWORD *)(a1 + 304) )
  {
    if ( (unsigned __int8)sub_BF2EB0((_QWORD *)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v15, v16, a13, a14) )
    {
      sub_BF41E0(a1 + 304, a2);
      v14 = *(_QWORD *)(a1 + 16);
      v15 = *(_QWORD *)(v14 + 8984);
      if ( qword_1C7EDA0 != v15 )
        return 1;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 16);
      v15 = *(_QWORD *)(v14 + 8984);
      if ( v15 != qword_1C7EDA0 )
        return 1;
      ++a2;
    }
    v16 = v15;
  }
  if ( *(_BYTE *)(a1 + 4170) || v15 != v16 )
    return 1;
  return *(unsigned __int8 *)(v14 + 2416);
}

