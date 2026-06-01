/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140038020
// Address: 0x0000000140038020

//----- (0000000140038020) ----------------------------------------------------
char __fastcall sub_140038020(__int64 *a1, __int64 a2)
{
  size_t v5; // rsi
  size_t v6; // rdi
  void *v7; // rbp
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( sub_14003B2D0(a1, a2) )
    return 0;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v7 = sub_14005AAA0(*(_QWORD *)(a2 + 8));
    v5 = v6;
    memcpy(v7, *(const void **)a2, v6);
  }
  else
  {
    v6 = 0;
    v7 = nullptr;
  }
  v8 = a1[1] + 1;
  if ( v8 > a1[2] )
    *a1 = (__int64)sub_14005ABE0((__int64)a1, (void *)*a1, v8, 0x18u);
  v9 = 3 * a1[1];
  v10 = *a1;
  *(_QWORD *)(v10 + 8 * v9) = v7;
  *(_QWORD *)(v10 + 8 * v9 + 8) = v6;
  *(_QWORD *)(v10 + 8 * v9 + 16) = v5;
  ++a1[1];
  return 1;
}
