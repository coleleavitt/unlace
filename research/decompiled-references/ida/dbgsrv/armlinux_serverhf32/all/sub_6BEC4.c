/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BEC4
// Address: 0x0006BEC4

//----- (0006BEC4) --------------------------------------------------------
void __fastcall sub_6BEC4(_DWORD *a1, __int64 a2, size_t a3, int a4, int a5)
{
  void *v8; // r5

  if ( sub_74C10((int)a1) < a2 + (unsigned __int64)a3 )
    sub_16FE4("show_hex_file: read past end");
  v8 = sub_80B00(a3);
  sub_74C30((int)a1, a2, 0);
  sub_6ADF8(a1, v8, a3);
  sub_6BD90((char *)v8, a3, a4, a5);
  if ( v8 )
    sub_81218(v8);
}
