/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BAC0
// Address: 0x0041BAC0

//----- (0041BAC0) --------------------------------------------------------
int sub_41BAC0()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi
  int *v1; // edi
  int v2; // ebx

  v0 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v1 = (int *)dword_4B6B20;
  v2 = dword_4B6B20 + 4 * dword_4B6B24;
  if ( dword_4B6B20 != v2 )
  {
    do
    {
      if ( *v1 )
        sub_45CF00(v2, (int)v1, *v1);
      ++v1;
    }
    while ( v1 != (int *)v2 );
  }
  dword_4B6B24 = 0;
  sub_4562F0(v0);
  return 0;
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
