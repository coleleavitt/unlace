/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4133A8
// Address: 0x00000000004133A8

//----- (00000000004133A8) ----------------------------------------------------
bool __fastcall sub_4133A8(__int64 a1, int a2)
{
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 i; // x20

  v4 = *(_QWORD *)(a1 + 440);
  if ( v4 )
  {
    *(_BYTE *)(a1 + 2116) = 1;
    if ( a2 )
      return (unsigned int)sub_412410(a1, a2, 0) != 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 168) )
      LOBYTE(v4) = sub_408B50(a1) ^ 1;
    v5 = *(_QWORD *)(a1 + 2096);
    *(_BYTE *)(a1 + 2116) = v4;
    if ( v5 && !*(_DWORD *)(a1 + 2112) )
    {
      for ( i = *(_QWORD *)(a1 + 2080); i != a1 + 2064; i = sub_49F748(i) )
        sub_40EFE0((_QWORD *)(a1 + 512), (unsigned __int64 *)(i + 32));
      sub_40E5E8(a1 + 2056, *(_QWORD **)(a1 + 2072));
      *(_QWORD *)(a1 + 2072) = 0;
      *(_QWORD *)(a1 + 2080) = a1 + 2064;
      *(_QWORD *)(a1 + 2088) = a1 + 2064;
      *(_QWORD *)(a1 + 2096) = 0;
    }
    if ( a2 )
      return (unsigned int)sub_412410(a1, a2, 0) != 0;
  }
  return (unsigned int)sub_412410(a1, 0, 1u) != 0;
}
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
