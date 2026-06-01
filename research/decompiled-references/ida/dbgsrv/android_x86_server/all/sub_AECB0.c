/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AECB0
// Address: 0x000AECB0

//----- (000AECB0) --------------------------------------------------------
bool __fastcall sub_AECB0(char *a1, char *a2)
{
  char *v3; // edi
  char v4; // al
  char v6; // al
  char v7; // [esp+8h] [ebp-14h]

  v7 = *a1;
  if ( *a1 )
  {
    v3 = a1;
    while ( 2 )
    {
      v4 = *a2;
      if ( *a2 )
      {
        ++v3;
        ++a2;
        while ( v7 != v4 && v4 != 63 )
        {
          if ( v4 != 42 )
            return 0;
          if ( (unsigned __int8)sub_AECB0(v3, a2 - 1) )
            return 1;
          v4 = *a2++;
          if ( !v4 )
          {
            --a2;
            goto LABEL_16;
          }
        }
        v7 = *v3;
        if ( *v3 )
          continue;
        v7 = 0;
      }
      break;
    }
  }
  else
  {
    v7 = 0;
  }
  do
LABEL_16:
    v6 = *a2++;
  while ( v6 == 42 );
  return v7 == v6;
}
