/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B948
// Address: 0x0006B948

//----- (0006B948) --------------------------------------------------------
int __fastcall sub_6B948(int a1)
{
  qsem_wait(*(_DWORD *)(a1 + 8), -1);
  sub_6B97C(*(_DWORD *)a1, *(int **)(a1 + 4));
  if ( a1 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    qsem_free(*(_DWORD *)(a1 + 8));
    operator delete((void *)a1);
  }
  return 0;
}
