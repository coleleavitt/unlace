/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475769
// Address: 0x00475769

//----- (00475769) --------------------------------------------------------
int __cdecl sub_475769(int a1, __int64 lDistanceToMove, DWORD dwMoveMethod)
{
  int result; // eax
  DWORD v4; // esi
  __int64 v5; // kr00_8
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFF7);
    v4 = dwMoveMethod;
    v5 = lDistanceToMove;
    if ( sub_475690(lDistanceToMove, SHIDWORD(lDistanceToMove), (int *)a1, lDistanceToMove, dwMoveMethod) )
      return 0;
    if ( dwMoveMethod == 1 )
    {
      LODWORD(v6) = sub_475E3E(lDistanceToMove, SHIDWORD(lDistanceToMove), (unsigned int *)a1);
      v5 = v6 + lDistanceToMove;
      v4 = 0;
    }
    sub_46C0E1(v5, (_DWORD *)a1);
    v7 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = v7;
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFC);
    }
    else if ( (*(_BYTE *)(a1 + 12) & 0x41) == 0x41 && (*(_DWORD *)(a1 + 12) & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 24) = 512;
    }
    v8 = sub_474CB1(v5, SHIDWORD(v5), *(_DWORD *)(a1 + 16), v5, SHIDWORD(v5), v4);
    result = v9 & v8;
    if ( result != -1 )
      return 0;
  }
  else
  {
    *sub_46B984() = 22;
    return -1;
  }
  return result;
}
// 4757CA: variable 'v6' is possibly undefined
// 475832: variable 'v9' is possibly undefined
