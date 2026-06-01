/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DE10
// Address: 0x0045DE10

//----- (0045DE10) --------------------------------------------------------
int __cdecl sub_45DE10(_WORD *a1)
{
  int v1; // esi
  _WORD *v2; // edi
  __int16 v4; // cx
  __int16 v5; // ax
  unsigned int v6; // ecx
  __int16 v7; // cx

  v1 = 0;
  v2 = a1 + 2;
  if ( !a1[2] )
  {
    v4 = a1[3];
    if ( v4 < 0 )
      return 0;
    v5 = a1[3];
    if ( v4 )
    {
LABEL_13:
      v7 = v5;
      if ( (v5 & 0xFF00) == 0 )
      {
        do
        {
          sub_45E470(a1);
          v1 += 8;
        }
        while ( (a1[3] & 0xFF00) == 0 );
        v7 = a1[3];
      }
      if ( v7 >= 0 )
      {
        do
        {
          sub_45E2E0(a1);
          ++v1;
        }
        while ( (__int16)a1[3] >= 0 );
      }
    }
    else
    {
      v6 = (unsigned int)(a1 + 3);
      while ( 1 )
      {
        sub_464310((unsigned int)(a1 + 2), v6, 0x10u);
        v1 += 16;
        a1[10] = 0;
        if ( v1 > 112 )
          break;
        v5 = a1[3];
        v6 = (unsigned int)(a1 + 3);
        if ( v5 )
          goto LABEL_13;
      }
    }
    return v1;
  }
  if ( (a1[2] & 0xFF00) != 0 )
  {
    sub_45E220((int)a1);
    v1 = -8;
  }
  if ( !*v2 )
    return v1;
  do
  {
    sub_45E090(a1);
    --v1;
  }
  while ( *v2 );
  return v1;
}
