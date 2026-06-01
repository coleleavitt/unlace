/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464B10
// Address: 0x0000000000464B10

//----- (0000000000464B10) ----------------------------------------------------
void *__fastcall sub_464B10(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6, __int64 a7, __int64 a8)
{
  size_t v15; // x20
  void *v17; // x0

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 )
  {
    v17 = sub_491248(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 16) = v15;
    memcpy(v17, *(const void **)a2, v15);
    *(_QWORD *)(a1 + 8) = v15;
  }
  *(_DWORD *)(a1 + 24) = a3;
  return sub_464A98(a1 + 28, a4, a5, a6, a7, a8);
}
