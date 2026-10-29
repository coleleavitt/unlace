/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A990
// Address: 0x0008A990

//----- (0008A990) --------------------------------------------------------
int __fastcall sub_8A990(_DWORD *a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r3
  int v5; // r0
  unsigned int v6; // r1

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v4 = (_DWORD *)a1[7];
        if ( v4 )
        {
          if ( (_DWORD *)*v4 == a1 && (unsigned int)(v4[1] - 16180) <= 0x1F )
          {
            v5 = v4[3];
            if ( a2 )
            {
              v6 = 0;
              if ( v5 )
              {
                v4[3] = v5 | 4;
                return 0;
              }
            }
            else
            {
              v6 = v5 & 0xFFFFFFFB;
            }
            v4[3] = v6;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
