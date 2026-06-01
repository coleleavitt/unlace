/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DF00
// Address: 0x000000000046DF00

//----- (000000000046DF00) ----------------------------------------------------
void __fastcall sub_46DF00(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[3];
  *a1 = &off_4C3C70;
  while ( v2 )
  {
    sub_46DCF0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  operator delete(a1, 0x38u);
}
// 4C3C70: using guessed type __int64 (__fastcall *off_4C3C70)();
