/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DEC0
// Address: 0x000000000046DEC0

//----- (000000000046DEC0) ----------------------------------------------------
void __fastcall sub_46DEC0(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[3];
  *a1 = &off_4C3C70;
  while ( v1 )
  {
    sub_46DCF0(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x30u);
  }
}
// 4C3C70: using guessed type __int64 (__fastcall *off_4C3C70)();
