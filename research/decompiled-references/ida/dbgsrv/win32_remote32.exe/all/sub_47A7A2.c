/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A7A2
// Address: 0x0047A7A2

//----- (0047A7A2) --------------------------------------------------------
char sub_47A7A2()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_4B7EA0;
  if ( dword_4B7EA0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)&dword_4B7D38[6 * dword_4B7EA0];
    do
    {
      DeleteCriticalSection(v1);
      --dword_4B7EA0;
      --v1;
      --v0;
    }
    while ( v0 );
  }
  return 1;
}
// 4B7D38: using guessed type int dword_4B7D38[];
// 4B7EA0: using guessed type int dword_4B7EA0;
