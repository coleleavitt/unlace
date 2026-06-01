/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_bytearray_linput
// Address: 0x00000000000BEC60

//----- (00000000000BEC60) ----------------------------------------------------
_QWORD *__fastcall create_bytearray_linput(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14

  v2 = operator new(0x20u);
  *v2 = &off_1505E8;
  v2[3] = a1;
  v2[1] = a2;
  *((_DWORD *)v2 + 4) = 0;
  if ( a2 < 0 )
  {
    operator delete(v2);
    return nullptr;
  }
  else
  {
    v3 = operator new(0x38u);
    *(_DWORD *)v3 = 4;
    v3[1] = v2;
    sub_BE330((__int64)v3);
  }
  return v3;
}
// 1505E8: using guessed type _UNKNOWN *off_1505E8;
