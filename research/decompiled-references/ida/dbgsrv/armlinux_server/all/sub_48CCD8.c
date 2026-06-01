/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48CCD8
// Address: 0x000000000048CCD8

//----- (000000000048CCD8) ----------------------------------------------------
void __fastcall sub_48CCD8(__int64 a1)
{
  int v1; // w2

  v1 = *(_DWORD *)(a1 + 20);
  *(_QWORD *)a1 = &off_51E420;
  if ( v1 == 1 )
  {
    sub_48C0F0(*(void **)(a1 + 24));
  }
  else
  {
    if ( v1 )
    {
      if ( v1 == 2 )
        return;
      a1 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(193);
      __break(0x3E8u);
    }
    sub_48C0F8(*(void ***)(a1 + 24));
  }
}
// 51E420: using guessed type void (__fastcall __noreturn *off_51E420)();
// 52451C: using guessed type char under_debugger;
