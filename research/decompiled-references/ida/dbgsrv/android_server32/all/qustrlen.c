/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrlen
// Address: 0x00075220

//----- (00075220) --------------------------------------------------------
int __fastcall qustrlen(unsigned __int8 *a1)
{
  int v1; // r4
  bool v2; // zf
  unsigned __int8 *v3; // r0
  unsigned __int8 *v5; // [sp+0h] [bp-8h] BYREF

  v5 = a1;
  v1 = 0;
  if ( *a1 )
  {
    v1 = 0;
    do
    {
      v2 = get_utf8_char(&v5) == -1;
      v3 = v5;
      if ( v2 )
        v3 = ++v5;
      ++v1;
    }
    while ( *v3 );
  }
  return v1;
}
