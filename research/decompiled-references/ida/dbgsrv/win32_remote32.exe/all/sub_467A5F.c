/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467A5F
// Address: 0x00467A5F

//----- (00467A5F) --------------------------------------------------------
char sub_467A5F()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_4B78A0;
  if ( dword_4B78A0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)&dword_4B7870[6 * dword_4B78A0];
    do
    {
      DeleteCriticalSection(v1);
      --dword_4B78A0;
      --v1;
      --v0;
    }
    while ( v0 );
  }
  return 1;
}
// 4B7870: using guessed type int dword_4B7870[5];
// 4B78A0: using guessed type int dword_4B78A0;
