/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA17C
// Address: 0x00000000000BA17C

//----- (00000000000BA17C) ----------------------------------------------------
_QWORD *__fastcall sub_BA17C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // x0
  _QWORD *v7; // x19
  _QWORD *v8; // x20

  v6 = operator new(0x30u);
  v7 = v6;
  v6[3] = a1;
  v6[4] = a2;
  *((_DWORD *)v6 + 4) = 0;
  v6[5] = a3 + a2;
  *v6 = &off_160368;
  v6[1] = a3;
  if ( a3 < 0 )
  {
    operator delete(v6);
    return nullptr;
  }
  else
  {
    v8 = operator new(0x38u);
    *(_DWORD *)v8 = 4;
    v8[1] = v7;
    sub_B9778(v8);
  }
  return v8;
}
// 160368: using guessed type __int64 (__fastcall *off_160368)(int, int, void *ptr);
