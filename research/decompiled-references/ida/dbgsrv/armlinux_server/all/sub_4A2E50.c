/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2E50
// Address: 0x00000000004A2E50

//----- (00000000004A2E50) ----------------------------------------------------
__int64 *__fastcall sub_4A2E50(__int64 *a1, size_t a2, unsigned __int8 a3)
{
  int v4; // w22
  __int64 v5; // x2
  __int64 v7; // x21
  unsigned __int64 v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  int v12; // w0

  if ( a2 )
  {
    v4 = a3;
    v5 = *a1;
    v7 = *(_QWORD *)(*a1 - 24);
    if ( a2 > 0x3FFFFFFFFFFFFFF9LL - v7 )
      sub_4A04D0("basic_string::append");
    v8 = a2 + v7;
    if ( v8 > *(_QWORD *)(v5 - 16) || (v12 = atomic_load((unsigned int *)(v5 - 8)), v12 > 0) )
    {
      sub_4A29C0(a1, v8);
      v5 = *a1;
    }
    v9 = *(_QWORD *)(v5 - 24);
    if ( a2 == 1 )
      *(_BYTE *)(v5 + v9) = v4;
    else
      memset((void *)(v5 + v9), v4, a2);
    v10 = *a1;
    if ( (__int64 *)(*a1 - 24) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_QWORD *)(v10 - 24) = v8;
      *(_DWORD *)(v10 - 8) = 0;
      *(_BYTE *)(v10 + v8) = 0;
    }
  }
  return a1;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
