/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E9E0
// Address: 0x000000000043E9E0

//----- (000000000043E9E0) ----------------------------------------------------
__int64 __fastcall sub_43E9E0(const char *a1, char *a2)
{
  int v4; // w0
  unsigned int v5; // w2
  const char *v6; // x0
  int v7; // t1
  char v8; // w0

  v4 = strlen(a1);
  v5 = v4;
  if ( v4 > 0 && a1[v4 - 1] == 4 )
  {
    v6 = &a1[v4 - 2];
    do
    {
      if ( !--v5 )
        break;
      v7 = *(unsigned __int8 *)v6--;
    }
    while ( v7 == 4 );
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  if ( a2 )
    *a2 = v8;
  return v5;
}
