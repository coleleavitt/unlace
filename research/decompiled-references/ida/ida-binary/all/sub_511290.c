void __fastcall file_outstream_t__::vfunc_1(_BYTE *a1)
{
  bool v1; // zf
  __int64 v3; // rdi

  v1 = a1[32] == 0;
  *(_QWORD *)a1 = &file_outstream_t___vtable;
  if ( !v1 )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( v3 )
      qfclose(v3);
  }
  operator delete(a1, 0x28u);
}
