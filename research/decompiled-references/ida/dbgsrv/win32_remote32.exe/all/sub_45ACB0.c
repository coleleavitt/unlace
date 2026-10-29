/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45ACB0
// Address: 0x0045ACB0

//----- (0045ACB0) --------------------------------------------------------
unsigned int __stdcall sub_45ACB0(unsigned int a1, char *a2, int a3)
{
  _BYTE *v3; // ecx
  int v5; // esi
  char v6; // al

  if ( a3 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  v3 = (_BYTE *)a1;
  if ( a1 >= a1 + a3 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(520);
  }
  v5 = a1 + a3 - 1;
  if ( a1 == v5 )
  {
LABEL_6:
    *v3 = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = *a2++;
      *v3 = v6;
      if ( !v6 )
        break;
      if ( ++v3 == (_BYTE *)v5 )
        goto LABEL_6;
    }
  }
  return a1;
}
// 4B70F0: using guessed type char byte_4B70F0;
