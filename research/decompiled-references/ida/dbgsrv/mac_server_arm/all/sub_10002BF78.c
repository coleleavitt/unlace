/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002BF78
// Address: 0x000000010002BF78

//----- (000000010002BF78) ----------------------------------------------------
__int64 __fastcall sub_10002BF78(__int64 a1, int a2)
{
  _OWORD *v4; // x0

  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = a2;
  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_10009D9B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_10009D9B0) )
  {
    v4 = operator new(0x80u);
    *(_OWORD *)((char *)v4 + 109) = 0u;
    v4[5] = 0u;
    v4[6] = 0u;
    v4[3] = 0u;
    v4[4] = 0u;
    v4[1] = 0u;
    v4[2] = 0u;
    *v4 = 0u;
    qword_10009D9A8 = (__int64)v4;
    __cxa_guard_release(&qword_10009D9B0);
  }
  if ( *(_QWORD *)(qword_10009D9A8 + 72) <= (unsigned __int64)*(int *)(a1 + 28) )
    *(_DWORD *)(a1 + 28) = 0;
  return a1;
}
// 10009D9A8: using guessed type __int64 qword_10009D9A8;
// 10009D9B0: using guessed type __int64 qword_10009D9B0;
