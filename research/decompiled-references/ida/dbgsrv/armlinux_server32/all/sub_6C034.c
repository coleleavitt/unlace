/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C034
// Address: 0x0006C034

//----- (0006C034) --------------------------------------------------------
void __fastcall sub_6C034(_DWORD *a1, __int64 a2, size_t a3, int a4, int a5)
{
  void *v8; // r5

  if ( sub_74D78((int)a1) < a2 + (unsigned __int64)a3 )
    sub_17188("show_hex_file: read past end");
  v8 = sub_8128C(a3);
  sub_74D98((int)a1, a2, 0);
  sub_6AF70(a1, v8, a3);
  sub_6BF00((char *)v8, a3, a4, a5);
  if ( v8 )
    sub_80FF8(v8);
}
