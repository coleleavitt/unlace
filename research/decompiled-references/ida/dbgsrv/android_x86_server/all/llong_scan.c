/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: llong_scan
// Address: 0x000ACCB0

//----- (000ACCB0) --------------------------------------------------------
int __cdecl llong_scan(char *a1, int a2, char **a3)
{
  char *v3; // edx
  char v4; // cl
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int result; // eax
  char v10; // [esp+13h] [ebp-19h]
  char *v11; // [esp+14h] [ebp-18h]

  v3 = a1;
  v4 = *a1;
  if ( *a1 < 0 )
  {
    result = 0;
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      v10 = v4;
      v11 = v3;
      if ( !isalnum((unsigned __int8)v4) )
        break;
      v6 = v10;
      if ( v10 >= 58 )
      {
        v7 = v10 - 32;
        if ( v10 <= 96 )
          v7 = v10;
        v6 = v7 - 7;
      }
      v8 = v6 - 48;
      if ( v8 >= a2 )
        break;
      result = v8 + a2 * v5;
      v4 = v11[1];
      v3 = v11 + 1;
      v5 = result;
      if ( v4 < 0 )
        goto LABEL_13;
    }
    result = v5;
    v3 = v11;
  }
LABEL_13:
  if ( a3 )
    *a3 = v3;
  return result;
}
