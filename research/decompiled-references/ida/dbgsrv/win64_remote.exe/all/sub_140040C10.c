/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040C10
// Address: 0x0000000140040C10

//----- (0000000140040C10) ----------------------------------------------------
__int64 __fastcall sub_140040C10(__int64 a1, __int64 a2)
{
  void *v4; // rbp
  size_t v5; // rdi
  size_t v6; // rsi
  void *v7; // rcx

  v4 = nullptr;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v4 = sub_14005AAA0(*(_QWORD *)(a2 + 8));
    v5 = v6;
    memcpy(v4, *(const void **)a2, v6);
  }
  v7 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v7);
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v5;
  return a1;
}
