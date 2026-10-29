/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473633
// Address: 0x00473633

//----- (00473633) --------------------------------------------------------
int __cdecl sub_473633(int a1)
{
  int v1; // ebx
  int v2; // eax

  if ( a1 < 0
    || (unsigned int)a1 >= dword_4B7D38[0]
    || (v1 = 56 * (a1 & 0x3F), v2 = (int)*(&dword_4B7B38 + (a1 >> 6)), (*(_BYTE *)(v1 + v2 + 40) & 1) == 0)
    || *(_DWORD *)(v1 + v2 + 24) == -1 )
  {
    *sub_46B984() = 9;
    *sub_46B971() = 0;
    return -1;
  }
  else
  {
    if ( sub_477B5D() == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, nullptr);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, nullptr);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, nullptr);
      }
    }
    *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&(*(&dword_4B7B38 + (a1 >> 6)))[1].DebugInfo + v1) = (PRTL_CRITICAL_SECTION_DEBUG)-1;
    return 0;
  }
}
// 4B7D38: using guessed type int dword_4B7D38[];
