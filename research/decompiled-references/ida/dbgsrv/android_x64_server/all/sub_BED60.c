/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BED60
// Address: 0x00000000000BED60

//----- (00000000000BED60) ----------------------------------------------------
_QWORD *__fastcall sub_BED60(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14

  v4 = operator new(0x30u);
  *v4 = &off_150638;
  v4[3] = a1;
  v4[4] = a2;
  v4[5] = a3 + a2;
  *((_DWORD *)v4 + 4) = 0;
  v4[1] = a3;
  if ( a3 < 0 )
  {
    operator delete(v4);
    return nullptr;
  }
  else
  {
    v5 = operator new(0x38u);
    *(_DWORD *)v5 = 4;
    v5[1] = v4;
    sub_BE330((__int64)v5);
  }
  return v5;
}
// 150638: using guessed type _UNKNOWN *off_150638;
