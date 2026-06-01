/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2CA8
// Address: 0x00000000004A2CA8

//----- (00000000004A2CA8) ----------------------------------------------------
__int64 *__fastcall sub_4A2CA8(__int64 *a1, _BYTE *a2, size_t a3)
{
  unsigned __int64 v4; // x0
  __int64 v6; // x21
  unsigned __int64 v8; // x21
  __int64 v9; // x3
  __int64 v10; // x1
  __int64 v11; // x1
  int v13; // w1
  _BYTE *v14; // x22

  if ( a3 )
  {
    v4 = *a1;
    v6 = *(_QWORD *)(v4 - 24);
    if ( a3 > 0x3FFFFFFFFFFFFFF9LL - v6 )
      sub_4A04D0("basic_string::append");
    v8 = a3 + v6;
    if ( v8 > *(_QWORD *)(v4 - 16) || (v13 = atomic_load((unsigned int *)(v4 - 8)), v9 = v4, v13 > 0) )
    {
      if ( (unsigned __int64)a2 >= v4 && (unsigned __int64)a2 <= v4 + *(_QWORD *)(v4 - 24) )
      {
        v14 = &a2[-v4];
        sub_4A29C0(a1, v8);
        v9 = *a1;
        a2 = &v14[*a1];
      }
      else
      {
        sub_4A29C0(a1, v8);
        v9 = *a1;
      }
    }
    v10 = *(_QWORD *)(v9 - 24);
    if ( a3 == 1 )
      *(_BYTE *)(v9 + v10) = *a2;
    else
      memcpy((void *)(v9 + v10), a2, a3);
    v11 = *a1;
    if ( (__int64 *)(*a1 - 24) != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_QWORD *)(v11 - 24) = v8;
      *(_DWORD *)(v11 - 8) = 0;
      *(_BYTE *)(v11 + v8) = 0;
    }
  }
  return a1;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
