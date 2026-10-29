/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1640
// Address: 0x00000000000C1640

//----- (00000000000C1640) ----------------------------------------------------
bool __fastcall sub_C1640(char *a1, char *a2)
{
  char v3; // bp
  char *v4; // r14
  char v5; // al
  char v7; // al

  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1;
    while ( 2 )
    {
      v5 = *a2;
      if ( *a2 )
      {
        ++v4;
        ++a2;
        while ( v3 != v5 && v5 != 63 )
        {
          if ( v5 != 42 )
            return 0;
          if ( (unsigned __int8)sub_C1640(v4, a2 - 1) )
            return 1;
          v5 = *a2++;
          if ( !v5 )
          {
            --a2;
            goto LABEL_16;
          }
        }
        v3 = *v4;
        if ( *v4 )
          continue;
        v3 = 0;
      }
      break;
    }
  }
  else
  {
    v3 = 0;
  }
  do
LABEL_16:
    v7 = *a2++;
  while ( v7 == 42 );
  return v3 == v7;
}
