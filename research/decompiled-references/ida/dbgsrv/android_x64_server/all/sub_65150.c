/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65150
// Address: 0x0000000000065150

//----- (0000000000065150) ----------------------------------------------------
__int64 __fastcall sub_65150(__int64 a1)
{
  __int64 v1; // rax
  int *v2; // rbx
  unsigned int v3; // ebp

  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * v1 - 8);
  if ( v1 )
    *(_QWORD *)(a1 + 352) = v1 - 1;
  v3 = sub_66D00(a1, (__int64)v2, 0, 0);
  if ( v2 )
  {
    sub_652B0(v2);
    operator delete(v2);
  }
  return set_qerrno(v3);
}
