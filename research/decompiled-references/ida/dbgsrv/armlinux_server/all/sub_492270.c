/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492270
// Address: 0x0000000000492270

//----- (0000000000492270) ----------------------------------------------------
void __fastcall __noreturn sub_492270(int a1)
{
  _QWORD *v2; // x0

  if ( (unsigned __int8)sub_487038() )
  {
    v2 = sub_49DA58(16);
    *v2 = off_51E448;
    *((_DWORD *)v2 + 2) = a1;
    sub_49DCD8((__int64)v2, (__int64)&`typeinfo for'interr_exc_t, (__int64)sub_4916B0);
  }
  sub_40A608("Oops! internal error %d occurred.", a1);
}
// 51DC48: using guessed type __int64 `typeinfo for'interr_exc_t;
// 51E448: using guessed type __int64 (__fastcall *off_51E448[4])();
