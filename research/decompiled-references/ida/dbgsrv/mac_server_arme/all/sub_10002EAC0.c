/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002EAC0
// Address: 0x000000010002EAC0

//----- (000000010002EAC0) ----------------------------------------------------
char *__fastcall sub_10002EAC0(_QWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // x8
  unsigned int *v4; // x9
  int v5; // w11
  unsigned int *v6; // x12
  unsigned int *v7; // x10
  unsigned __int64 v8; // x8
  unsigned int *v9; // x9
  char *result; // x0
  int v11; // w10
  unsigned int *v12; // x12

  if ( a3 )
  {
    v3 = a1[15];
    if ( v3 )
    {
      v4 = (unsigned int *)a1[14];
      if ( *v4 <= a2 )
      {
        v5 = 1;
        v6 = (unsigned int *)a1[14];
        do
        {
          v7 = v6;
          if ( v3 <= v5 )
            break;
          v6 = &v4[2 * v5++];
        }
        while ( *v6 <= a2 );
        LODWORD(v3) = v7[1];
      }
      else
      {
        LODWORD(v3) = 0;
      }
    }
    *a3 = v3;
  }
  v8 = a1[12];
  if ( !v8 )
    return nullptr;
  v9 = (unsigned int *)a1[11];
  if ( *v9 > a2 )
    return nullptr;
  v11 = 1;
  v12 = (unsigned int *)a1[11];
  do
  {
    if ( *((_QWORD *)v12 + 2) )
      result = *((char **)v12 + 1);
    else
      result = &byte_10007AE40;
    if ( v8 <= v11 )
      break;
    v12 = &v9[8 * v11++];
  }
  while ( *v12 <= a2 );
  return result;
}
// 10007AE40: using guessed type char byte_10007AE40;
