/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400656A0
// Address: 0x00000001400656A0

//----- (00000001400656A0) ----------------------------------------------------
__int64 __fastcall sub_1400656A0(_WORD *a1)
{
  __int16 v1; // ax
  int v3; // ebx
  __int16 v4; // ax
  unsigned __int16 v6; // r10

  v1 = a1[2];
  v3 = 0;
  if ( v1 )
  {
    if ( (v1 & 0xFF00) != 0 )
    {
      sub_1400659F0((__int64)a1);
      v3 = -8;
    }
    for ( ; a1[2]; --v3 )
      sub_140065870(a1);
  }
  else
  {
    v4 = a1[3];
    if ( v4 < 0 )
      return 0;
    if ( v4 )
    {
LABEL_12:
      if ( (v4 & 0xFF00) == 0 )
      {
        do
        {
          sub_140065C30(a1);
          v4 = a1[3];
          v3 += 8;
        }
        while ( ((unsigned __int16)v4 & v6) == 0 );
      }
      if ( v4 >= 0 )
      {
        do
        {
          sub_140065AC0(a1);
          ++v3;
        }
        while ( (__int16)a1[3] >= 0 );
      }
    }
    else
    {
      while ( 1 )
      {
        memcpy(a1 + 2, a1 + 3, 0x10u);
        v3 += 16;
        a1[10] = 0;
        if ( v3 > 112 )
          break;
        v4 = a1[3];
        if ( v4 )
          goto LABEL_12;
      }
    }
  }
  return (unsigned int)v3;
}
// 140065756: variable 'v6' is possibly undefined
