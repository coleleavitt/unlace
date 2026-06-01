/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A9E4
// Address: 0x0008A9E4

//----- (0008A9E4) --------------------------------------------------------
int __fastcall sub_8A9E4(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r2
  int v4; // r1
  int v5; // r3

  result = -65536;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v3 = (_DWORD *)a1[7];
        if ( v3 )
        {
          if ( (_DWORD *)*v3 == a1 )
          {
            v4 = v3[1];
            if ( (unsigned int)(v4 - 16180) <= 0x1F )
            {
              v5 = 0;
              if ( v4 == 16204 )
              {
                v5 = v3[1779] - v3[17];
              }
              else if ( v4 == 16195 )
              {
                v5 = v3[17];
              }
              return v5 + (v3[1778] << 16);
            }
          }
        }
      }
    }
  }
  return result;
}
