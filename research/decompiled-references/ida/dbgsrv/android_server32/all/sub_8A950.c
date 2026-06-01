/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A950
// Address: 0x0008A950

//----- (0008A950) --------------------------------------------------------
int __fastcall sub_8A950(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r3

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v3 = (_DWORD *)a1[7];
        if ( v3 )
        {
          if ( (_DWORD *)*v3 == a1 && (unsigned int)(v3[1] - 16180) <= 0x1F )
          {
            v3[1777] = 1;
            return -3;
          }
        }
      }
    }
  }
  return result;
}
