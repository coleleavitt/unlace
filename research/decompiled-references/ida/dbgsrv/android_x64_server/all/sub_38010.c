/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38010
// Address: 0x0000000000038010

//----- (0000000000038010) ----------------------------------------------------
void __fastcall sub_38010(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  sub_383E0((char **)(a1 + 72));
  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_38490((char **)(a1 + 24));
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
