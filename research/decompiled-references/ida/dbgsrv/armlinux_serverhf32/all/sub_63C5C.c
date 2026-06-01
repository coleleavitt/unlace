/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63C5C
// Address: 0x00063C5C

//----- (00063C5C) --------------------------------------------------------
unsigned int __fastcall sub_63C5C(char a1, int a2, int a3, int a4, int a5, int a6)
{
  int v9; // r1
  int *v10; // r0

  if ( (a1 & 8) != 0 )
  {
    v9 = *(unsigned __int8 *)(a4 + 20);
    if ( v9 == 160 )
      v10 = nullptr;
    else
      v10 = sub_63BD0(a3, v9, a5, a6);
  }
  else
  {
    v10 = *(int **)(a4 + 8);
  }
  switch ( *(_BYTE *)(a4 + 21) )
  {
    case 0:
      return a2 << (char)v10;
    case 1:
      return (unsigned int)a2 >> (char)v10;
    case 2:
      a2 >>= (char)v10;
      return a2;
    case 3:
      return sub_6C364(a2, -(int)v10, 0, 0x20u);
    case 4:
      a2 = (unsigned int)a2 >> 1;
      if ( ((unsigned int)sub_63BD0(a3, 16, a5, a6) & 0x20000000) != 0 )
        return a2 | 0x80000000;
      return a2;
    default:
      return a2;
  }
}
