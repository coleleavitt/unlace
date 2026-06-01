/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3D40
// Address: 0x080D3D40

//----- (080D3D40) --------------------------------------------------------
char *__cdecl sub_80D3D40(char *a1)
{
  char *v1; // esi
  unsigned int v2; // edi
  const unsigned __int16 *v3; // eax

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( v2 <= 0x7F )
    {
      v3 = *__ctype_b_loc();
      do
      {
        if ( (v3[v2] & 0x2000) == 0 )
          break;
        v2 = *++v1;
      }
      while ( v2 <= 0x7F );
    }
  }
  return v1;
}
