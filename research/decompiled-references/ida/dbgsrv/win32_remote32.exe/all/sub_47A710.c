/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A710
// Address: 0x0047A710

//----- (0047A710) --------------------------------------------------------
int __usercall sub_47A710@<eax>(int a1@<ebx>, char a2, int a3)
{
  int result; // eax

  if ( a2 )
  {
    result = *(_DWORD *)(a3 + 12) >> 9;
    if ( (*(_DWORD *)(a3 + 12) & 0x200) != 0 )
    {
      sub_46C0E1(a1, (_DWORD *)a3);
      _InterlockedAnd((volatile signed __int32 *)(a3 + 12), 0xFFFFFD7F);
      *(_DWORD *)(a3 + 24) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
      return 0;
    }
  }
  return result;
}
