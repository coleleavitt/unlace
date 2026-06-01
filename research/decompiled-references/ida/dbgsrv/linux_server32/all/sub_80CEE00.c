/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEE00
// Address: 0x080CEE00

//----- (080CEE00) --------------------------------------------------------
size_t __cdecl sub_80CEE00(FILE *stream, void *ptr, int n)
{
  size_t v3; // edi
  int v4; // eax
  int v6; // [esp+4h] [ebp-28h]
  int v7; // [esp+8h] [ebp-24h]
  int v8; // [esp+Ch] [ebp-20h]

  if ( n < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v6, v7, v8);
    BUG();
  }
  if ( stream )
  {
    v3 = 0;
    if ( n )
    {
      v3 = fread(ptr, 1u, n, stream);
      if ( n != v3 )
      {
        v4 = feof(stream);
        sub_80C7880(v4 == 0 ? 1 : 3);
      }
    }
  }
  else
  {
    v3 = -1;
    sub_80C7880(1);
    *__errno_location() = 9;
    sub_80C7880(1);
  }
  return v3;
}
// 80CEEA9: variable 'v6' is possibly undefined
// 80CEEA9: variable 'v7' is possibly undefined
// 80CEEA9: variable 'v8' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
