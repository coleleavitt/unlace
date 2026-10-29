/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B610
// Address: 0x000000000004B610

//----- (000000000004B610) ----------------------------------------------------
void __fastcall sub_4B610(__int64 a1, const void *a2, unsigned __int64 a3)
{
  char *v4; // rax

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a3 )
  {
    v4 = (char *)qvector_reserve(a1, nullptr, a3, 1u);
    *(_QWORD *)a1 = v4;
    memset(&v4[*(_QWORD *)(a1 + 8)], 0, a3 - *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = a3;
    memcpy(*(void **)a1, a2, a3);
  }
}
