/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A3A8
// Address: 0x000000000044A3A8

//----- (000000000044A3A8) ----------------------------------------------------
__int64 __fastcall sub_44A3A8(__int64 a1, int *a2)
{
  int *v3; // x19
  void *v4; // x0
  __int64 result; // x0

  v3 = sub_49FAC0(a2, (_QWORD *)(a1 + 8));
  sub_448310((__int64 *)v3 + 7);
  v4 = *((void **)v3 + 4);
  if ( v4 )
  {
    *((_QWORD *)v3 + 5) = 0;
    j__free(v4);
  }
  j__free_0(v3);
  result = *(_QWORD *)(a1 + 40) - 1LL;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
