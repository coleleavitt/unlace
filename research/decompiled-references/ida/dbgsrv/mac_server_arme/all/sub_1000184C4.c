/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000184C4
// Address: 0x00000001000184C4

//----- (00000001000184C4) ----------------------------------------------------
_QWORD *__fastcall sub_1000184C4(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  _QWORD *v10; // x0
  _QWORD *result; // x0
  void *v12; // x24
  __int64 v13; // x19

  v10 = operator new(0x28u);
  v10[3] = a5;
  v10[4] = a1;
  *v10 = off_10009D838;
  v10[1] = 0xFFFFFFFFLL;
  *((_DWORD *)v10 + 4) = 0;
  result = create_generic_linput(v10);
  if ( result )
  {
    v12 = result;
    v13 = sub_100018334(a1, a2, a3, a4, (__int64)result, a5);
    close_linput(v12);
    return (_QWORD *)v13;
  }
  return result;
}
// 10009D838: using guessed type __int64 (__fastcall *off_10009D838[2])();
