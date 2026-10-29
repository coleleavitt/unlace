/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DA00
// Address: 0x0007DA00

//----- (0007DA00) --------------------------------------------------------
int __fastcall sub_7DA00(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v5; // r7
  int v6; // r0
  char *v7; // r5
  char *v8; // r0
  const char *v10; // r6
  char *v11; // r0
  int v13; // [sp+10h] [bp-4h]

  v13 = a3 & 1;
  v5 = a2;
  while ( 1 )
  {
    v6 = *v5;
    if ( v6 == 47 )
    {
      if ( !v5[1] )
        return 1;
    }
    else if ( v5 <= a2 || *v5 )
    {
      if ( v6 == 42 && v5[1] == 42 && (v5 == a2 || *(v5 - 1) == 47) )
      {
        if ( !v5[2] )
          return 1;
        if ( v5[2] == 47 )
        {
          v10 = (const char *)(a1 + 1);
          if ( *a1 != 47 )
            v10 = (const char *)a1;
          do
          {
            if ( *v10 == 46 && v13 && v5[3] != 46 )
              break;
            if ( sub_7DA00(v10, v5 + 3, a3) )
              return 1;
            v11 = strchr(v10, 47);
            v10 = v11 + 1;
          }
          while ( v11 );
          return 0;
        }
      }
    }
    else if ( *(v5 - 1) == 47 )
    {
      return 1;
    }
    if ( *a1 == 46 && v13 && v6 != 46 || !sub_7D8C4(a1, v5) )
      return 0;
    v7 = strchr((const char *)a1, 47);
    v8 = strchr((const char *)v5, 47);
    if ( !((unsigned int)v7 | (unsigned int)v8) )
      break;
    if ( !v7 || !v8 )
      return 0;
    v5 = (unsigned __int8 *)(v8 + 1);
    a1 = (unsigned __int8 *)(v7 + 1);
  }
  return 1;
}
