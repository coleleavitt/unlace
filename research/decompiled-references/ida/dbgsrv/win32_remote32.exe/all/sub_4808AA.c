/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4808AA
// Address: 0x004808AA

//----- (004808AA) --------------------------------------------------------
int __cdecl sub_4808AA(unsigned int a1)
{
  int v1; // esi
  int v2; // eax
  int v4; // [esp+Ch] [ebp-4h]

  v4 = 4096;
  v1 = 0;
  if ( (a1 & 0x300) != 0 )
  {
    if ( (a1 & 0x300) != 0x200 )
      v4 = 0;
  }
  else
  {
    v4 = 0x2000;
  }
  v2 = a1 & 0xC00;
  if ( (a1 & 0xC00) != 0 )
  {
    switch ( v2 )
    {
      case 1024:
        v1 = 256;
        break;
      case 2048:
        v1 = 512;
        break;
      case 3072:
        v1 = 768;
        break;
    }
  }
  return v4
       | v1
       | (4 * (a1 & 0x1000))
       | (a1 >> 5) & 1
       | (16 * (a1 & 1))
       | (4 * ((a1 >> 3) & 1))
       | (8 * ((a1 >> 2) & 1))
       | (32 * ((a1 >> 1) & 1))
       | (2 * ((a1 >> 4) & 1));
}
