/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CB00
// Address: 0x000000010002CB00

//----- (000000010002CB00) ----------------------------------------------------
__int64 __fastcall sub_10002CB00(__int64 a1)
{
  __int64 v1; // rax
  int *v2; // rbx

  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * v1 - 8);
  if ( v1 )
    *(_QWORD *)(a1 + 352) = v1 - 1;
  if ( (*v2 | 4) == 5 )
    ((void (__fastcall *)(__int64, int *, _QWORD, __int64))loc_10002C5D0)(a1, v2, 0, 0xFFFFFFFFLL);
  sub_10002AE90(v2);
  operator delete(v2);
  return set_qerrno();
}
