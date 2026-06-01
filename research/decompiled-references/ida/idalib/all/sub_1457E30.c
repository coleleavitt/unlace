void __fastcall sub_1457E30(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  *(_BYTE *)(a1 + 40) = 0;
  if ( *(_BYTE *)(a2 + 40) )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *(_QWORD *)(a1 + 8) = a1 + 24;
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 == a2 + 24 )
    {
      *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v2;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    }
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = a2 + 24;
    *(_QWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 24) = 0;
    *(_BYTE *)(a1 + 40) = 1;
  }
}
