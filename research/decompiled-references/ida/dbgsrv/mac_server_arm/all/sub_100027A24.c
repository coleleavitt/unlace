/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027A24
// Address: 0x0000000100027A24

//----- (0000000100027A24) ----------------------------------------------------
__int64 __fastcall sub_100027A24(__int64 a1)
{
  __int64 v1; // x8
  int *v2; // x19
  int *v3; // x0

  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * v1 - 8);
  if ( v1 )
    *(_QWORD *)(a1 + 352) = v1 - 1;
  if ( (*v2 | 4) == 5 )
    sub_100027554(a1, (__int64)v2, 0, -1);
  v3 = sub_100025DE0(v2);
  operator delete(v3);
  return set_qerrno();
}
