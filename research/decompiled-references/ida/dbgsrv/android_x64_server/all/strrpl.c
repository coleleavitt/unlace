/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strrpl
// Address: 0x00000000000C5700

//----- (00000000000C5700) ----------------------------------------------------
const char *__fastcall strrpl(const char *a1, int a2, int a3)
{
  const char *v3; // r14
  char v4; // bl
  char *v5; // rax

  v3 = a1;
  if ( a1 )
  {
    v4 = a3;
    if ( a2 != a3 )
    {
      while ( 1 )
      {
        v5 = strchr(a1, a2);
        if ( !v5 )
          break;
        *v5 = v4;
        a1 = v5;
      }
    }
  }
  return v3;
}
