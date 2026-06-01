/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF350
// Address: 0x000BF350

//----- (000BF350) --------------------------------------------------------
__int64 __cdecl sub_BF350(int a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // esi

  result = a2;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    if ( v4 == HIDWORD(a2) )
    {
      if ( *(_DWORD *)(a2 + 24) == 2 )
        *(_DWORD *)(a2 + 24) = a3;
    }
    else
    {
      ++*(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 24) = 2;
      *(_BYTE *)(a2 + 54) = 1;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = HIDWORD(a2);
    *(_DWORD *)(a2 + 24) = a3;
    *(_DWORD *)(a2 + 36) = 1;
  }
  return result;
}
