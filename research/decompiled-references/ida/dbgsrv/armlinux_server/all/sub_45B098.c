/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B098
// Address: 0x000000000045B098

//----- (000000000045B098) ----------------------------------------------------
__int64 __fastcall sub_45B098(__int64 a1, _QWORD ***a2, __int64 *a3)
{
  __int64 result; // x0
  _QWORD **v6; // x1
  _QWORD **v8; // x19
  __int64 v9; // x3

  result = *a3;
  v6 = *a2;
  if ( v6 != (_QWORD **)*a3 )
  {
    do
    {
      v8 = (_QWORD **)*v6;
      *v6[1] = *v6;
      (*v6)[1] = v6[1];
      j__free(v6);
      *a2 = v8;
      v6 = v8;
      v9 = *a3;
      result = *(_QWORD *)(a1 + 16) - 1LL;
      *(_QWORD *)(a1 + 16) = result;
    }
    while ( (_QWORD **)v9 != v8 );
  }
  return result;
}
