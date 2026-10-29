/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423E90
// Address: 0x0000000000423E90

//----- (0000000000423E90) ----------------------------------------------------
void __fastcall sub_423E90(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbp
  void *v5; // r12
  __int64 v6; // rbx
  void *v7; // rdi

  v2 = a1[9];
  *a1 = &off_4C2350;
  while ( v2 )
  {
    sub_423A70(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[3];
  while ( v4 )
  {
    v5 = (void *)v4;
    sub_423E10(*(void ***)(v4 + 24));
    v6 = *(_QWORD *)(v4 + 56);
    v4 = *(_QWORD *)(v4 + 16);
    while ( v6 )
    {
      sub_423C40(*(_QWORD **)(v6 + 24));
      v7 = (void *)v6;
      v6 = *(_QWORD *)(v6 + 16);
      operator delete(v7, 0x30u);
    }
    operator delete(v5, 0x58u);
  }
}
// 4C2350: using guessed type __int64 (__fastcall *off_4C2350)();
