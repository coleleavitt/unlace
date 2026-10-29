/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA0E0
// Address: 0x00000000000BA0E0

//----- (00000000000BA0E0) ----------------------------------------------------
_QWORD *__fastcall sub_BA0E0(int a1, int a2)
{
  _DWORD *v4; // x19
  __off_t v5; // x0
  _QWORD *v6; // x20

  v4 = operator new(0x18u);
  *(_QWORD *)v4 = off_160340;
  v4[4] = a2;
  v4[5] = a1;
  v5 = qfilelength(a1);
  *((_QWORD *)v4 + 1) = v5;
  if ( v5 < 0 || (v4[4] & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    return nullptr;
  }
  else
  {
    v6 = operator new(0x38u);
    *(_DWORD *)v6 = 4;
    v6[1] = v4;
    sub_B9778(v6);
  }
  return v6;
}
// 160340: using guessed type __int64 (__fastcall *off_160340[2])();
