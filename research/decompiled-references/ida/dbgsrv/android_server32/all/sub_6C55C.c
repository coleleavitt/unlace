/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C55C
// Address: 0x0006C55C

//----- (0006C55C) --------------------------------------------------------
int __fastcall sub_6C55C(int a1)
{
  *(_DWORD *)a1 = &off_DA95C;
  qmutex_free(*(pthread_mutex_t **)(a1 + 16));
  *(_DWORD *)a1 = &off_DA978;
  sub_6C634(a1 + 4, *(_DWORD **)(a1 + 8));
  return a1;
}
// DA95C: using guessed type _UNKNOWN *off_DA95C;
// DA978: using guessed type _UNKNOWN *off_DA978;
