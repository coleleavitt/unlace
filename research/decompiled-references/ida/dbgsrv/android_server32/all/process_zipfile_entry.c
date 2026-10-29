/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: process_zipfile_entry
// Address: 0x0007A824

//----- (0007A824) --------------------------------------------------------
int __fastcall process_zipfile_entry(
        int a1,
        const char *a2,
        int (__fastcall *a3)(int, _DWORD, int, int, int, int, int, int, int, int, int, _BYTE *),
        int a4,
        int a5)
{
  _DWORD *v7; // r0
  int v8; // r7
  int v9; // r4
  unsigned int v10; // r2
  int v11; // r0

  v7 = sub_8D1A4(a1);
  v8 = 1;
  if ( v7 )
  {
    v9 = (int)v7;
    v10 = 1;
    if ( !a5 )
      v10 = 2;
    v11 = sub_8DCA4((int)v7, a2, v10);
    if ( v11 )
    {
      v8 = 0;
      if ( v11 < 0 )
        v8 = -v11;
    }
    else
    {
      v8 = sub_7A88C(v9, a3, a4);
    }
    sub_8D1BC(v9);
  }
  return v8;
}
