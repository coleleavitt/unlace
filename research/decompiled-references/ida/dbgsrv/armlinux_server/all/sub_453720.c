/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453720
// Address: 0x0000000000453720

//----- (0000000000453720) ----------------------------------------------------
_QWORD *__fastcall sub_453720(_QWORD *a1, __int64 a2, const void **a3, __int64 a4)
{
  _QWORD *v4; // x20
  _QWORD *v9; // x19
  unsigned __int64 v10; // x4
  _QWORD *v11; // x4
  _QWORD *v12; // x1
  __int64 v13; // x3

  v4 = *(_QWORD **)(*a1 + 8 * a2);
  if ( v4 )
  {
    v9 = (_QWORD *)*v4;
    v10 = *(_QWORD *)(*v4 + 48LL);
    while ( 1 )
    {
      if ( a4 == v10 )
      {
        v12 = (_QWORD *)v9[1];
        v13 = *((_QWORD *)*a3 - 3);
        if ( v13 == *(v12 - 3) && (!v13 || !memcmp(*a3, v12, *((_QWORD *)*a3 - 3))) )
          break;
      }
      v11 = (_QWORD *)*v9;
      v4 = v9;
      v9 = v11;
      if ( v11 )
      {
        v10 = v11[6];
        if ( a2 == v10 % a1[1] )
          continue;
      }
      return nullptr;
    }
  }
  return v4;
}
