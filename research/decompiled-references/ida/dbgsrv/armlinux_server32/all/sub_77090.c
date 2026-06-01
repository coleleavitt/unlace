/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77090
// Address: 0x00077090

//----- (00077090) --------------------------------------------------------
int __fastcall sub_77090(char *s, int a2)
{
  char *v4; // r5
  char *v5; // r0
  unsigned int v6; // r3
  const void *v7; // r8
  char *v8; // r2
  int v9; // r3
  int v10; // t1
  size_t v11; // r0
  unsigned int v12; // r3
  int result; // r0
  bool v14; // cc
  char v15; // r1
  int v16; // r2
  int v17; // r3
  unsigned int v18; // t1

  while ( 1 )
  {
    v4 = strrchr(s, 47);
    v5 = strrchr(s, 92);
    if ( v5 < v4 )
      v5 = v4;
    if ( !v5 )
      break;
    v7 = v5 + 1;
    v6 = (unsigned __int8)v5[1];
    if ( v6 > 0x1F )
      goto LABEL_9;
    if ( v6 - 1 <= 0x1E )
    {
      v8 = v5 + 1;
      do
      {
        v10 = (unsigned __int8)*++v8;
        v9 = v10;
      }
      while ( (unsigned int)(v10 - 1) <= 0x1E );
      if ( v9 )
      {
LABEL_9:
        v11 = strlen(v5);
        memmove(s, v7, v11);
        break;
      }
    }
    *v5 = 0;
  }
  v12 = (unsigned __int8)*s;
  if ( *s )
    goto LABEL_30;
  result = a2;
  if ( !a2 )
    return result;
  sub_76E58((unsigned __int8 *)s, a2);
  v12 = (unsigned __int8)*s;
  if ( *s )
  {
LABEL_30:
    do
    {
      v14 = v12 > 0x3F;
      if ( v12 != 63 )
        v14 = v12 > 0x1F;
      v15 = v12 - 91;
      v16 = !v14;
      if ( v12 == 42 )
        v17 = v16 | 1;
      else
        v17 = v16;
      if ( v17 )
        *s = 95;
      if ( (v15 & 0xFD) == 0 )
        *s = 95;
      v18 = (unsigned __int8)*++s;
      v12 = v18;
    }
    while ( v18 );
  }
  return 1;
}
