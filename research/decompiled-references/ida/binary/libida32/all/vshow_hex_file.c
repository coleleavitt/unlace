void __fastcall vshow_hex_file(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  void *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9

  if ( qlsize(a1) < a2 + a3 )
    sub_375320((__int64)"show_hex_file: read past end");
  v8 = (void *)operator new[](a3);
  qlseek(a1, a2, 0);
  lread(a1, v8, a3);
  vshow_hex(v8, a3, a4, a5, v9, v10);
  if ( v8 )
    operator delete[](v8);
}

