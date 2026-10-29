/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_698C8
// Address: 0x00000000000698C8

//----- (00000000000698C8) ----------------------------------------------------
char *__fastcall sub_698C8(_QWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // x8
  unsigned int *v4; // x9
  __int64 v5; // x10
  int v6; // w12
  __int64 v7; // x11
  unsigned __int64 v9; // x8
  unsigned int *v10; // x9
  char *result; // x0
  __int64 v12; // x12
  int v13; // w10
  unsigned int *v14; // x12
  unsigned int v15; // w13

  if ( a3 )
  {
    v3 = a1[15];
    if ( v3 )
    {
      v4 = (unsigned int *)a1[14];
      if ( *v4 <= a2 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          v7 = v5;
          v5 = v6;
          if ( v3 <= v6 )
            break;
        }
        while ( v4[2 * v6++] <= a2 );
        LODWORD(v3) = v4[2 * v7 + 1];
      }
      else
      {
        LODWORD(v3) = 0;
      }
    }
    *a3 = v3;
  }
  v9 = a1[12];
  if ( !v9 )
    return nullptr;
  v10 = (unsigned int *)a1[11];
  if ( *v10 > a2 )
    return nullptr;
  v12 = 0;
  v13 = 1;
  do
  {
    v14 = &v10[8 * v12];
    if ( *((_QWORD *)v14 + 2) )
      result = *((char **)v14 + 1);
    else
      result = &byte_F154B;
    v12 = v13;
    if ( v9 <= v13 )
      break;
    v15 = v10[8 * v13++];
  }
  while ( v15 <= a2 );
  return result;
}
// F154B: using guessed type char byte_F154B;
