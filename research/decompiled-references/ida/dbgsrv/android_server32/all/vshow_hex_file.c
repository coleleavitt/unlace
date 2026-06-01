/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex_file
// Address: 0x00071B10

//----- (00071B10) --------------------------------------------------------
void __fastcall vshow_hex_file(int *a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  unsigned __int64 v7; // kr00_8
  unsigned __int64 v8; // r0
  bool v9; // cf
  int v10; // r1
  void *v11; // r6

  v7 = a2 + a3;
  LODWORD(v8) = qlsize(a1);
  v9 = v8 >= v7;
  v10 = (v8 - v7) >> 32;
  if ( !v9 )
    sub_1C9E4("show_hex_file: read past end", v10);
  v11 = (void *)operator new[](a3);
  qlseek((int)a1, a2, 0);
  lread(a1, v11, a3);
  vshow_hex((unsigned __int8 *)v11, a3, a4, a5);
  operator delete[](v11);
}
// 71B28: variable 'v8' is possibly undefined
