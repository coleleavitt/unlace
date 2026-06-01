/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncat
// Address: 0x000803AC

//----- (000803AC) --------------------------------------------------------
const char *__fastcall qstrncat(const char *a1, unsigned __int8 *a2, int a3)
{
  unsigned int v6; // r7
  size_t v7; // r0
  char *v8; // r1
  size_t v9; // r0
  int v10; // r3

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_14:
    __debugbreak();
  }
  v6 = (unsigned int)&a1[a3];
  v7 = strlen(a1);
  v8 = (char *)&a1[v7];
  if ( (unsigned int)&a1[v7] >= v6 )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_14;
  }
  if ( v8 == (char *)(v6 - 1) )
  {
LABEL_8:
    *v8 = 0;
  }
  else
  {
    v9 = a3 - 1 - v7;
    while ( 1 )
    {
      v10 = *a2;
      *v8 = v10;
      if ( !v10 )
        break;
      --v9;
      ++v8;
      ++a2;
      if ( !v9 )
      {
        v8 = (char *)(v6 - 1);
        goto LABEL_8;
      }
    }
  }
  return a1;
}
// E0550: using guessed type char under_debugger;
