/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: last_idcv_attr
// Address: 0x0005BF90

//----- (0005BF90) --------------------------------------------------------
char *__cdecl last_idcv_attr(int a1)
{
  char *result; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  result = nullptr;
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v2 = *(_DWORD **)(a1 + 4);
      v3 = v2 + 1;
      if ( v2 + 1 != (_DWORD *)*v2 )
      {
        v4 = (_DWORD *)*v3;
        if ( *v3 )
        {
          do
          {
            v3 = v4;
            v4 = (_DWORD *)v4[1];
          }
          while ( v4 );
        }
        else
        {
          do
          {
            v5 = v3;
            v3 = (_DWORD *)v3[2];
          }
          while ( (_DWORD *)*v3 == v5 );
        }
        if ( v3[5] )
          return (char *)v3[4];
        else
          return byte_EF875;
      }
    }
  }
  return result;
}
