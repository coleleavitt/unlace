/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A366C
// Address: 0x00000000000A366C

//----- (00000000000A366C) ----------------------------------------------------
__int64 __fastcall sub_A366C(__int64 a1)
{
  __int64 v2; // x0

  qsem_wait(*(_QWORD *)(a1 + 16), -1);
  sub_A36B0(*(_QWORD *)a1, *(__int64 **)(a1 + 8));
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    qsem_free(v2);
    operator delete((void *)a1);
  }
  return 0;
}
