/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069610
// Address: 0x0000000100069610

//----- (0000000100069610) ----------------------------------------------------
__int64 __fastcall sub_100069610(void *__p)
{
  qsem_wait(*((_QWORD *)__p + 2), (__int64 *)0xFFFFFFFFLL);
  sub_100069660(*(_QWORD *)__p, *((__int64 **)__p + 1));
  *(_OWORD *)__p = 0;
  qsem_free(*((_DWORD **)__p + 2));
  operator delete(__p);
  return 0;
}
