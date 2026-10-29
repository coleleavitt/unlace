/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex_file
// Address: 0x00000000000B1490

//----- (00000000000B1490) ----------------------------------------------------
void __fastcall vshow_hex_file(_DWORD *a1, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  void *v8; // rbp
  int v9; // r8d
  int v10; // r9d

  if ( a3 + a2 > qlsize((__int64)a1) )
    sub_3A5C0("show_hex_file: read past end");
  v8 = (void *)operator new[](a3);
  qlseek((__int64)a1, a2, 0);
  lread(a1, v8, a3);
  vshow_hex((unsigned __int8 *)v8, a3, a4, a5, v9, v10);
  operator delete[](v8);
}
// B14EA: variable 'v9' is possibly undefined
// B14EA: variable 'v10' is possibly undefined
