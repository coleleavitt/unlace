/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429DF0
// Address: 0x0000000000429DF0

//----- (0000000000429DF0) ----------------------------------------------------
__int64 __fastcall sub_429DF0(__int64 a1, __int64 a2, unsigned int a3)
{
  char *v4; // rax
  char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r13
  void *v9; // rax

  v4 = sub_426B10(a2, a3);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v4 )
  {
    v5 = v4;
    v6 = strlen(v4);
    v7 = v6 + 1;
    v8 = v6;
    v9 = sub_481540(a1, nullptr, v6 + 1, 1u);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v7;
    memmove(v9, v5, v8);
    *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
    if ( *(_QWORD *)(a1 + 8) > 1u )
      return a1;
  }
  sub_4172B0(a1, "%08X", a3);
  return a1;
}
