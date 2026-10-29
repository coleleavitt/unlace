/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453858
// Address: 0x0000000000453858

//----- (0000000000453858) ----------------------------------------------------
__int64 __fastcall sub_453858(__int64 a1, char *a2)
{
  _QWORD *v2; // x21
  __int64 v3; // x20
  __int64 *v4; // x0
  __int64 result; // x0
  unsigned int *v6; // x2
  int v7; // w1
  __int64 *v8; // [xsp+30h] [xbp-10h] BYREF

  v2 = *(_QWORD **)(a1 + 696);
  sub_452A08(&v8, a2);
  v3 = sub_4537E8(v2, &v8);
  v4 = v8 - 3;
  if ( v8 - 3 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v6 = (unsigned int *)(v8 - 1);
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = *((_DWORD *)v8 - 2);
      *((_DWORD *)v8 - 2) = v7 - 1;
    }
    if ( v7 <= 0 )
      j__free_0(v4);
  }
  result = v3 + 16;
  if ( !v3 )
    return 0;
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
