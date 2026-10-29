/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EA24
// Address: 0x0047EA24

//----- (0047EA24) --------------------------------------------------------
int __cdecl sub_47EA24(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // ecx

  result = 8 * (a1 & 0x10);
  if ( (a1 & 8) != 0 )
    result |= 0x200u;
  if ( (a1 & 4) != 0 )
    result |= 0x400u;
  if ( (a1 & 2) != 0 )
    result |= 0x800u;
  if ( (a1 & 1) != 0 )
    result |= 0x1000u;
  if ( (a1 & 0x80000) != 0 )
    result |= 0x100u;
  v2 = a1 & 0x300;
  if ( (a1 & 0x300) != 0 )
  {
    switch ( v2 )
    {
      case 256:
        result |= 0x2000u;
        break;
      case 512:
        result |= 0x4000u;
        break;
      case 768:
        result |= 0x6000u;
        break;
    }
  }
  v3 = a1 & 0x3000000;
  if ( (a1 & 0x3000000) == 0x1000000 )
    return result | 0x8040;
  if ( v3 == 0x2000000 )
    return result | 0x40;
  if ( v3 == 50331648 )
    return result | 0x8000;
  return result;
}
