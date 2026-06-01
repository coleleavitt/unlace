/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BD84
// Address: 0x0005BD84

//----- (0005BD84) --------------------------------------------------------
int __fastcall sub_5BD84(int a1, const char **a2, int *a3, int *a4, unsigned int *a5)
{
  unsigned int v8; // r0
  _BYTE *v9; // r2
  const char *v10; // r3
  _BYTE *v11; // r3
  int v13; // r3
  int result; // r0

  v8 = *a5;
  v9 = (_BYTE *)*a5;
  while ( 1 )
  {
    v10 = nullptr;
    if ( (unsigned int)v9 >= a5[1] )
      break;
    v11 = v9 + 1;
    if ( *v9++ == 0 )
    {
      *a5 = (unsigned int)v11;
      v10 = (const char *)v8;
      break;
    }
  }
  *a2 = v10;
  *a3 = unpack_dd(a5, a5[1]);
  v13 = unpack_dd(a5, a5[1]);
  *a4 = v13;
  result = *(unsigned __int8 *)(a1 + 96);
  if ( *(_BYTE *)(a1 + 96) )
    return sub_1BBA0((int)"file_path = %s; arch = %d; is_be = %d.\n", *a2, *a3, v13);
  return result;
}
