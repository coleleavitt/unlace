/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100016F6C
// Address: 0x0000000100016F6C

//----- (0000000100016F6C) ----------------------------------------------------
_QWORD *__fastcall sub_100016F6C(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  _QWORD *v10; // x0
  _QWORD *result; // x0
  void *v12; // x24
  __int64 v13; // x19

  v10 = operator new(0x28u);
  v10[3] = a5;
  v10[4] = a1;
  *v10 = off_1000997F8;
  v10[1] = 0xFFFFFFFFLL;
  *((_DWORD *)v10 + 4) = 0;
  result = create_generic_linput(v10);
  if ( result )
  {
    v12 = result;
    v13 = sub_100016E10(a1, a2, a3, a4, (__int64)result, a5);
    close_linput(v12);
    return (_QWORD *)v13;
  }
  return result;
}
// 1000997F8: using guessed type __int64 (__fastcall *off_1000997F8[2])();
