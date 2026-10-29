/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480963
// Address: 0x00480963

//----- (00480963) --------------------------------------------------------
unsigned int __cdecl sub_480963(unsigned int a1)
{
  int v1; // ecx
  int v2; // edi
  int v3; // ebx
  unsigned int v4; // eax

  v1 = a1 & 0xC00;
  v2 = 0;
  switch ( v1 )
  {
    case 1024:
      v3 = 32832;
      break;
    case 2048:
      v3 = 64;
      break;
    case 3072:
      v3 = 0x8000;
      break;
    default:
      v3 = 0;
      break;
  }
  v4 = (((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 0x300;
  if ( ((((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 0x300) != 0 )
  {
    switch ( v4 )
    {
      case 0x100u:
        v2 = 0x2000;
        break;
      case 0x200u:
        v2 = 0x4000;
        break;
      case 0x300u:
        v2 = 24576;
        break;
    }
  }
  return v2
       | v3
       | ((((a1 >> 2) & 0x400000) != 0) << 12)
       | (((((a1 >> 2) | a1 & 0xC03FFFFF) >> 26) & 1) << 7)
       | (((((a1 >> 2) | a1 & 0xC03FFFFF) >> 25) & 1) << 9)
       | (((((a1 >> 2) | a1 & 0xC03FFFFF) >> 24) & 1) << 10)
       | (((((a1 >> 2) | a1 & 0xC03FFFFF) >> 23) & 1) << 11)
       | (((((a1 >> 2) | a1 & 0xC03FFFFF) >> 27) & 1) << 8);
}
