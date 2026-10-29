/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30898
// Address: 0x00030898

//----- (00030898) --------------------------------------------------------
int __fastcall sub_30898(int a1, _BYTE *a2)
{
  int result; // r0
  int v3; // r0

  if ( !a2 || *a2 != 36 )
    return 0;
  if ( !a2[1] )
    return (unsigned __int8)a2[1];
  v3 = (unsigned __int8)a2[2];
  if ( v3 )
    result = v3 == 46;
  else
    result = 1;
  if ( result )
  {
    switch ( a2[1] )
    {
      case 'a':
      case 'b':
      case 'd':
      case 'f':
      case 'p':
      case 't':
      case 'x':
        return result;
      default:
        return 0;
    }
  }
  return result;
}
