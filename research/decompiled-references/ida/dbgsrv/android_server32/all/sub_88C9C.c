/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88C9C
// Address: 0x00088C9C

//----- (00088C9C) --------------------------------------------------------
int __fastcall sub_88C9C(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r4
  int result; // r0
  int v5; // r0

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v3 = (_DWORD *)a1[7];
  if ( !v3 )
    return -2;
  if ( (_DWORD *)*v3 != a1 )
    return -2;
  if ( (unsigned int)(v3[1] - 16180) > 0x1F )
    return -2;
  result = 0;
  if ( a2 )
  {
    if ( a2 < 0 )
    {
      v3[15] = 0;
      v3[16] = 0;
      return 0;
    }
    else if ( a2 <= 16 )
    {
      v5 = v3[16];
      if ( (unsigned int)(v5 + a2) <= 0x20 )
      {
        v3[16] = v5 + a2;
        v3[15] += (a3 & ~(-1 << a2)) << v5;
        return 0;
      }
      else
      {
        return -2;
      }
    }
    else
    {
      return -2;
    }
  }
  return result;
}
