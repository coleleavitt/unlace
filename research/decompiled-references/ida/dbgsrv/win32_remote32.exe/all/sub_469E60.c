/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469E60
// Address: 0x00469E60

//----- (00469E60) --------------------------------------------------------
char *__cdecl sub_469E60(_BYTE *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // eax
  char v4; // cl
  char v5; // dl
  char *result; // eax
  char i; // cl
  char v8; // cl
  char *j; // edx
  char v10; // cl

  v2 = ***(_BYTE ***)(*(_DWORD *)a2 + 136);
  v3 = a1;
  v4 = *a1;
  if ( *a1 )
  {
    v5 = *a1;
    do
    {
      v4 = v5;
      if ( v5 == v2 )
        break;
      v4 = *++v3;
      v5 = v4;
    }
    while ( v4 );
  }
  result = v3 + 1;
  if ( v4 )
  {
    for ( i = *result; i; i = *++result )
    {
      if ( i == 101 )
        break;
      if ( i == 69 )
        break;
    }
    v8 = *(result - 1);
    for ( j = result--; v8 == 48; --result )
      v8 = *(result - 1);
    if ( v8 == v2 )
      --result;
    do
    {
      v10 = *j;
      *++result = *j++;
    }
    while ( v10 );
  }
  return result;
}
