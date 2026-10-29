/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57DE0
// Address: 0x0000000000057DE0

//----- (0000000000057DE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_57DE0(unsigned __int64 result, _QWORD *a2)
{
  __int64 v2; // x19
  unsigned int v3; // w8
  __int64 v5; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x21

  v2 = result;
  v3 = *(_DWORD *)(result + 72);
  LODWORD(result) = *(_DWORD *)(result + 76);
  if ( v3 >= (unsigned int)result )
  {
    v5 = *(_QWORD *)(v2 + 24);
    v6 = *(_QWORD *)(v2 + 64);
    v7 = v5 - v6;
    if ( v5 == v6 )
      return 0;
    sub_5B070((pthread_mutex_t *)(v2 + 40), v5 - v6);
    *(_DWORD *)(v2 + 72) = 0;
    result = sub_57884(v2, v7);
    *(_DWORD *)(v2 + 76) = result;
    if ( !(_DWORD)result )
      return result;
    v3 = *(_DWORD *)(v2 + 72);
    *(_QWORD *)(v2 + 64) += (unsigned int)result;
  }
  if ( v3 < (unsigned int)result )
  {
    *a2 = *(_QWORD *)(v2 + 40) + 24LL * v3;
    ++*(_DWORD *)(v2 + 72);
    return 1;
  }
  return 0;
}
