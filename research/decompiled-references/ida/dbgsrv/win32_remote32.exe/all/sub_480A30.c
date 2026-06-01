/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480A30
// Address: 0x00480A30

//----- (00480A30) --------------------------------------------------------
__int16 __cdecl sub_480A30(unsigned int a1)
{
  unsigned int v1; // edx
  __int16 v2; // si
  __int16 v3; // ax
  __int16 v4; // bx
  unsigned int v5; // eax

  v1 = (a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14;
  v2 = 0;
  if ( (a1 & 0x3000) != 0 )
  {
    if ( (a1 & 0x3000) == 0x1000 )
      v3 = 512;
    else
      v3 = 0;
  }
  else
  {
    v3 = 768;
  }
  v4 = v3;
  v5 = ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 0x300;
  if ( (v1 & 0x300) != 0 )
  {
    switch ( v5 )
    {
      case 0x100u:
        v2 = 1024;
        break;
      case 0x200u:
        v2 = 2048;
        break;
      case 0x300u:
        v2 = 3072;
        break;
    }
  }
  return v2
       | v4
       | (32 * (v1 & 1))
       | ((a1 & 0x4000) != 0 ? 0x1000 : 0)
       | (4 * ((v1 >> 3) & 1))
       | (2 * ((v1 >> 5) & 1))
       | (8 * ((v1 >> 2) & 1))
       | (16 * ((v1 >> 1) & 1))
       | (((a1 >> 2) & 0x40000) != 0);
}
