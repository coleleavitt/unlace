/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87CD0
// Address: 0x0000000000087CD0

//----- (0000000000087CD0) ----------------------------------------------------
char *__fastcall sub_87CD0(__int64 a1)
{
  char *i; // r15
  char v2; // bp
  char *v3; // rbx
  char *v4; // rbx
  _BYTE *v5; // rax

  for ( i = *(char **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
  {
    v2 = *i;
    if ( (unsigned __int8)(*i - 9) >= 5u && v2 != 32 )
      break;
    ++i;
  }
  if ( v2 >= 0 && isalpha((unsigned __int8)v2) || v2 == 36 || v2 == 95 )
  {
    v3 = i + 1;
    while ( 1 )
    {
      if ( isalnum((unsigned __int8)v2) )
        goto LABEL_10;
      do
      {
        if ( v2 != 95 && v2 != 36 )
        {
          v4 = v3 - 1;
          goto LABEL_16;
        }
LABEL_10:
        *(_QWORD *)(a1 + 8) = v3;
        v2 = *v3++;
      }
      while ( v2 < 0 );
    }
  }
  v4 = i;
LABEL_16:
  *(_BYTE *)(a1 + 452) = v2;
  if ( *v4 )
  {
    *v4 = 0;
    v5 = *(_BYTE **)(a1 + 8);
    do
    {
      do
        *(_QWORD *)(a1 + 8) = ++v5;
      while ( (unsigned __int8)(*v5 - 9) < 5u );
    }
    while ( *v5 == 32 );
  }
  return i;
}
// 87D1F: conditional instruction was optimized away because bp.1 is in (<20u|>=21)
