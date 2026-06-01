/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020AF0
// Address: 0x0000000140020AF0

//----- (0000000140020AF0) ----------------------------------------------------
void __fastcall sub_140020AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v6; // rdi
  __int64 v7; // rcx

  v3 = a3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    sub_140020AF0(a1, a2, *(_QWORD *)(v3 + 16));
    v6 = (void *)v3;
    v7 = v3;
    v3 = *(_QWORD *)v3;
    sub_140029390(v7 + 40);
    j_j_free(v6);
  }
}
