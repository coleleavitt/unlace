/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3040
// Address: 0x00000000004A3040

//----- (00000000004A3040) ----------------------------------------------------
__int64 *__fastcall sub_4A3040(__int64 *a1, char a2)
{
  __int64 v3; // x0
  __int64 v5; // x21
  int v6; // w1
  __int64 v7; // x2
  __int64 *v8; // x0

  v3 = *a1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(v3 - 16) || (v6 = atomic_load((unsigned int *)(v3 - 8)), v6 > 0) )
  {
    sub_4A29C0(a1, v5 + 1);
    v3 = *a1;
  }
  *(_BYTE *)(v3 + *(_QWORD *)(v3 - 24)) = a2;
  v7 = *a1;
  v8 = (__int64 *)(*a1 - 24);
  if ( v8 != std::string::_Rep::_S_empty_rep_storage )
  {
    *(_QWORD *)(v7 - 24) = v5 + 1;
    *(_DWORD *)(v7 - 8) = 0;
    *((_BYTE *)v8 + v5 + 25) = 0;
  }
  return a1;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
