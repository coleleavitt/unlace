/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex_file
// Address: 0x0009D2C0

//----- (0009D2C0) --------------------------------------------------------
void __cdecl vshow_hex_file(int a1, __int64 off, size_t size)
{
  unsigned __int64 v3; // rax
  unsigned __int8 *v4; // esi

  LODWORD(v3) = qlsize(a1);
  if ( v3 < (unsigned __int64)size + off )
    sub_1DE10("show_hex_file: read past end");
  v4 = (unsigned __int8 *)operator new[](size);
  qlseek(a1, off, 0);
  lread(__SPAIR64__((unsigned int)v4, a1), size);
  vshow_hex(v4, size);
  operator delete[](v4);
}
// 9D2F8: variable 'v3' is possibly undefined
