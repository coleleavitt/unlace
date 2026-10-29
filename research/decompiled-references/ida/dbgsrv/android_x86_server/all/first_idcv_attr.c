/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: first_idcv_attr
// Address: 0x0005BF40

//----- (0005BF40) --------------------------------------------------------
char *__cdecl first_idcv_attr(int a1)
{
  char *result; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // edx

  result = nullptr;
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v2 = *(_DWORD **)(a1 + 4);
      v3 = (_DWORD *)*v2;
      if ( v2 + 1 != (_DWORD *)*v2 )
      {
        if ( v3[5] )
          return (char *)v3[4];
        else
          return byte_EF875;
      }
    }
  }
  return result;
}
