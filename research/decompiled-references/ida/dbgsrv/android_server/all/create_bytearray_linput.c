/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_bytearray_linput
// Address: 0x00000000000BA070

//----- (00000000000BA070) ----------------------------------------------------
_QWORD *__fastcall create_bytearray_linput(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x19
  _QWORD *v6; // x20

  v4 = operator new(0x20u);
  v5 = v4;
  v4[3] = a1;
  *v4 = &off_160318;
  v4[1] = a2;
  *((_DWORD *)v4 + 4) = 0;
  if ( a2 < 0 )
  {
    operator delete(v4);
    return nullptr;
  }
  else
  {
    v6 = operator new(0x38u);
    *(_DWORD *)v6 = 4;
    v6[1] = v5;
    sub_B9778(v6);
  }
  return v6;
}
// 160318: using guessed type _UNKNOWN *off_160318;
