/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_829A8
// Address: 0x00000000000829A8

//----- (00000000000829A8) ----------------------------------------------------
unsigned __int8 *__fastcall sub_829A8(__int64 a1)
{
  unsigned __int8 *i; // x19
  int v3; // w21
  unsigned __int8 v4; // w22
  unsigned __int8 *v5; // x21
  unsigned __int8 v6; // t1
  unsigned __int8 *v7; // x8
  unsigned __int8 *v8; // x8
  int v9; // w9

  for ( i = *(unsigned __int8 **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
  {
    v3 = *i;
    if ( (unsigned int)(v3 - 9) >= 5 && v3 != 32 )
      break;
    ++i;
  }
  v4 = *i;
  if ( ((char)v3 & 0x80000000) == 0 && isalpha(v3) || v3 == 36 || v3 == 95 )
  {
    v5 = i + 1;
    if ( ((char)v4 & 0x80000000) == 0 )
      goto LABEL_12;
LABEL_13:
    while ( v4 == 95 || v4 == 36 )
    {
      while ( 1 )
      {
        *(_QWORD *)(a1 + 8) = v5;
        v6 = *v5++;
        v4 = v6;
        if ( (char)v6 < 0 )
          break;
LABEL_12:
        if ( !isalnum(v4) )
          goto LABEL_13;
      }
    }
    v7 = v5 - 1;
  }
  else
  {
    v7 = i;
  }
  *(_BYTE *)(a1 + 620) = v4;
  if ( *v7 )
  {
    *v7 = 0;
    v8 = *(unsigned __int8 **)(a1 + 8);
    do
    {
      do
      {
        *(_QWORD *)(a1 + 8) = ++v8;
        v9 = *v8;
      }
      while ( (unsigned int)(v9 - 9) < 5 );
    }
    while ( v9 == 32 );
  }
  return i;
}
