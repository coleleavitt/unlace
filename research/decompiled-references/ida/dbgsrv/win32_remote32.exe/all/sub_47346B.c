/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47346B
// Address: 0x0047346B

//----- (0047346B) --------------------------------------------------------
int __cdecl sub_47346B(int a1, struct _RTL_CRITICAL_SECTION_DEBUG *hHandle)
{
  int v3; // [esp+8h] [ebp-4h]

  if ( a1 >= 0
    && (unsigned int)a1 < dword_4B7D38[0]
    && (v3 = 56 * (a1 & 0x3F),
        *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&(*(&dword_4B7B38 + (a1 >> 6)))[1].DebugInfo + v3) == (PRTL_CRITICAL_SECTION_DEBUG)-1) )
  {
    if ( sub_477B5D() == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, hHandle);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, hHandle);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, hHandle);
      }
    }
    *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&(*(&dword_4B7B38 + (a1 >> 6)))[1].DebugInfo + v3) = hHandle;
    return 0;
  }
  else
  {
    *sub_46B984() = 9;
    *sub_46B971() = 0;
    return -1;
  }
}
// 4B7D38: using guessed type int dword_4B7D38[];
