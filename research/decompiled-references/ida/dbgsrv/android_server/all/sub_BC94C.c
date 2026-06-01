/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BC94C
// Address: 0x00000000000BC94C

//----- (00000000000BC94C) ----------------------------------------------------
bool __fastcall sub_BC94C(unsigned __int8 *a1, char *a2)
{
  unsigned __int8 v2; // w21
  unsigned __int8 *v4; // x20
  unsigned __int8 v5; // w8
  int v6; // t1
  int v8; // w8
  int v9; // t1

  v2 = *a1;
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
        while ( v2 != v5 && v5 != 63 )
        {
          if ( v5 != 42 )
            return 0;
          if ( (sub_BC94C(v4, a2 - 1) & 1) != 0 )
            return 1;
          v6 = (unsigned __int8)*a2++;
          v5 = v6;
          if ( !v6 )
          {
            --a2;
            goto LABEL_15;
          }
        }
        v2 = *v4;
        if ( *v4 )
          continue;
      }
      break;
    }
  }
  do
  {
LABEL_15:
    v9 = (unsigned __int8)*a2++;
    v8 = v9;
  }
  while ( v9 == 42 );
  return v2 == v8;
}
