/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E750
// Address: 0x000000000040E750

//----- (000000000040E750) ----------------------------------------------------
void __fastcall sub_40E750(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)a1 = qword_4C4288;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x18u);
  }
  memset(*(void **)(a1 + 40), 0, 8LL * *(_QWORD *)(a1 + 48));
  v4 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v4 != (void *)(a1 + 88) )
    operator delete(v4, 8LL * *(_QWORD *)(a1 + 48));
  v5 = *(void **)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    j__free(v5);
  }
}
// 4C4288: using guessed type __int64 qword_4C4288[2];
