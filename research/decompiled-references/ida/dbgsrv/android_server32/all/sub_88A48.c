/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88A48
// Address: 0x00088A48

//----- (00088A48) --------------------------------------------------------
int __fastcall sub_88A48(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r3

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
            v3[11] = 0;
            v3[12] = 0;
            v3[13] = 0;
            if ( a1[8] )
            {
              if ( a1[9] )
              {
                v4 = (_DWORD *)a1[7];
                if ( v4 )
                {
                  if ( (_DWORD *)*v4 == a1 && (unsigned int)(v4[1] - 16180) <= 0x1F )
                  {
                    v4[8] = 0;
                    a1[2] = 0;
                    a1[5] = 0;
                    a1[6] = 0;
                    if ( v4[3] )
                      a1[12] = v4[3] & 1;
                    v4[1777] = 1;
                    v4[1778] = -1;
                    v4[1] = 16180;
                    v4[2] = 0;
                    v4[9] = 0;
                    v4[15] = 0;
                    v4[16] = 0;
                    v4[4] = 0;
                    v4[5] = -1;
                    v4[6] = 0x8000;
                    v4[28] = v4 + 333;
                    v4[20] = v4 + 333;
                    v4[21] = v4 + 333;
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
