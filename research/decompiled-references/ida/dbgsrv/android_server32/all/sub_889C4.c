/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_889C4
// Address: 0x000889C4

//----- (000889C4) --------------------------------------------------------
int __fastcall sub_889C4(_DWORD *a1)
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
            v3[8] = 0;
            a1[2] = 0;
            a1[5] = 0;
            a1[6] = 0;
            if ( v3[3] )
              a1[12] = v3[3] & 1;
            v3[1777] = 1;
            v3[1778] = -1;
            v3[1] = 16180;
            v3[2] = 0;
            v3[9] = 0;
            v3[15] = 0;
            v3[16] = 0;
            v3[4] = 0;
            v3[5] = -1;
            v3[6] = 0x8000;
            v3[28] = v3 + 333;
            v3[20] = v3 + 333;
            v3[21] = v3 + 333;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
