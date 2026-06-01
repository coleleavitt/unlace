/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482A30
// Address: 0x00482A30

//----- (00482A30) --------------------------------------------------------
int __usercall sub_482A30@<eax>(double _ST7@<st0>)
{
  int result; // eax
  unsigned __int16 v2; // cx
  double v6; // [esp+0h] [ebp-14h]
  __int16 v7; // [esp+8h] [ebp-Ch]

  if ( dword_4B7844 >= 2 )
    return (int)_ST7;
  v6 = _ST7;
  result = HIDWORD(v6);
  v2 = v7 & 0x7FFF;
  if ( (v7 & 0x7FFFu) < 0x3FFF )
  {
    __asm { frndint }
    return 0;
  }
  else
  {
    if ( v6 >= 0.0 )
      return 0x80000000;
    if ( v2 < 0x401Eu )
    {
      __asm { frndint }
      return (-(v7 < 0) ^ (HIDWORD(v6) >> (62 - v7))) + (v7 < 0);
    }
    if ( v2 <= 0x401Eu && v7 < 0 && HIDWORD(v6) == 0x80000000 )
      __asm { frndint }
    else
      return 0x80000000;
  }
  return result;
}
// 482A30: could not find valid save-restore pair for ebp
// 482A58: variable 'v7' is possibly undefined
// 4B7844: using guessed type int dword_4B7844;
