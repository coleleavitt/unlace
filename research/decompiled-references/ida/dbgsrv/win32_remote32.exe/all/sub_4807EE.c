/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4807EE
// Address: 0x004807EE

//----- (004807EE) --------------------------------------------------------
int __cdecl sub_4807EE(unsigned int a1)
{
  int v1; // esi
  __int16 v2; // ax
  int v3; // ebx
  int v4; // eax

  v1 = 0;
  v2 = a1 & 0x8040;
  if ( (a1 & 0x8040) == 0x8000 )
  {
    v3 = 3072;
  }
  else if ( v2 == 64 )
  {
    v3 = 2048;
  }
  else
  {
    v3 = 1024;
    if ( v2 != -32704 )
      v3 = 0;
  }
  v4 = a1 & 0x6000;
  if ( (a1 & 0x6000) != 0 )
  {
    switch ( v4 )
    {
      case 8192:
        v1 = 256;
        break;
      case 16384:
        v1 = 512;
        break;
      case 24576:
        v1 = 768;
        break;
    }
  }
  return v3
       | v1
       | (a1 >> 12) & 1
       | (2 * ((a1 >> 11) & 1))
       | (8 * ((a1 >> 9) & 1))
       | (16 * ((a1 >> 7) & 1))
       | (32 * ((a1 >> 8) & 1))
       | (4 * ((a1 >> 10) & 1));
}
