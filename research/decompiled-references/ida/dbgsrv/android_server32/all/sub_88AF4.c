/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88AF4
// Address: 0x00088AF4

//----- (00088AF4) --------------------------------------------------------
int __fastcall sub_88AF4(_DWORD *a1, int a2)
{
  int result; // r0
  void (__fastcall *v4)(_DWORD); // r2
  _DWORD *v5; // r5
  int v6; // r6
  int v7; // r7

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      v4 = (void (__fastcall *)(_DWORD))a1[9];
      if ( v4 )
      {
        v5 = (_DWORD *)a1[7];
        if ( v5 )
        {
          if ( (_DWORD *)*v5 == a1 && (unsigned int)(v5[1] - 16180) <= 0x1F )
          {
            if ( a2 < 0 )
            {
              if ( a2 < -15 )
                return result;
              v6 = -a2;
              v7 = 0;
            }
            else
            {
              v6 = a2 & 0xF;
              if ( a2 >= 48 )
                v6 = a2;
              v7 = ((unsigned int)a2 >> 4) + 5;
            }
            if ( !v6 || (v6 & 0xFFFFFFF8) == 8 )
            {
              if ( v5[14] )
              {
                if ( v5[10] != v6 )
                {
                  v4(a1[10]);
                  v5[14] = 0;
                }
              }
              v5[10] = v6;
              v5[3] = v7;
              return sub_88A48(a1);
            }
          }
        }
      }
    }
  }
  return result;
}
