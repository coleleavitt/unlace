/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2BA0
// Address: 0x00000000004A2BA0

//----- (00000000004A2BA0) ----------------------------------------------------
__int64 *__fastcall sub_4A2BA0(__int64 *a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x4
  unsigned __int64 v5; // x19
  size_t v6; // x19
  __int64 v9; // x2
  size_t v11; // x22
  __int64 v12; // x3
  __int64 v13; // x1
  int v15; // w0

  v4 = *a2;
  v5 = *(_QWORD *)(*a2 - 24);
  if ( a3 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::append", a3, v5);
  v6 = v5 - a3;
  if ( v6 > a4 )
    v6 = a4;
  if ( v6 )
  {
    v9 = *a1;
    v11 = v6 + *(_QWORD *)(*a1 - 24);
    if ( *(_QWORD *)(*a1 - 16) < v11 || (v15 = atomic_load((unsigned int *)(v9 - 8)), v15 > 0) )
    {
      sub_4A29C0(a1, v6 + *(_QWORD *)(v9 - 24));
      v9 = *a1;
      v4 = *a2;
    }
    v12 = *(_QWORD *)(v9 - 24);
    if ( v6 == 1 )
      *(_BYTE *)(v9 + v12) = *(_BYTE *)(v4 + a3);
    else
      memcpy((void *)(v9 + v12), (const void *)(v4 + a3), v6);
    v13 = *a1;
    if ( (__int64 *)(*a1 - 24) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_QWORD *)(v13 - 24) = v11;
      *(_DWORD *)(v13 - 8) = 0;
      *(_BYTE *)(v13 + v11) = 0;
    }
  }
  return a1;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
