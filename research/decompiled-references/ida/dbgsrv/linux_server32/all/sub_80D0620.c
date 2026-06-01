/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0620
// Address: 0x080D0620

//----- (080D0620) --------------------------------------------------------
int __cdecl sub_80D0620(unsigned __int8 *a1, int a2, int a3)
{
  unsigned __int8 *v3; // ebp
  int c; // eax
  int v6; // esi
  int v7; // esi

  v3 = a1;
  if ( a3 <= 0 )
    return 0;
  do
  {
    c = *v3;
    ++a2;
    ++v3;
    v6 = tolower(c);
    v7 = v6 - tolower(*(unsigned __int8 *)(a2 - 1));
  }
  while ( !v7 && v3 != &a1[a3] );
  return v7;
}
