/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454488
// Address: 0x0000000000454488

//----- (0000000000454488) ----------------------------------------------------
_QWORD *__fastcall sub_454488(_QWORD *a1, __int64 **a2)
{
  unsigned __int64 v4; // x20
  unsigned __int64 v5; // x19
  _QWORD *v6; // x0
  __int64 v7; // x1
  _QWORD *result; // x0
  _QWORD *v9; // x0
  __int64 *v10; // x5

  v4 = sub_49E0C0(*a2, *(*a2 - 3), 3339675911LL);
  v5 = v4 % a1[1];
  v6 = sub_453720(a1, v5, (const void **)a2, v4);
  if ( !v6 || (v7 = *v6, result = (_QWORD *)(*v6 + 16LL), !v7) )
  {
    v9 = sub_49E050(0x38u);
    v10 = *a2;
    *v9 = 0;
    v9[1] = v10;
    v9[2] = 0;
    v9[3] = 0;
    *a2 = &std::string::_Rep::_S_empty_rep_storage[3];
    v9[4] = 0;
    *((_BYTE *)v9 + 40) = 0;
    *((_BYTE *)v9 + 41) = 0;
    return sub_4542F8(a1, v5, v4, v9) + 2;
  }
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
