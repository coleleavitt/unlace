/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BECD0
// Address: 0x00000000000BECD0

//----- (00000000000BECD0) ----------------------------------------------------
_QWORD *__fastcall sub_BECD0(int a1, int a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r14

  v2 = operator new(0x18u);
  *(_QWORD *)v2 = off_150610;
  v2[5] = a1;
  v2[4] = a2;
  v3 = qfilelength(a1);
  *((_QWORD *)v2 + 1) = v3;
  if ( v3 < 0 || (int)v2[4] < 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
    return nullptr;
  }
  else
  {
    v4 = operator new(0x38u);
    *(_DWORD *)v4 = 4;
    v4[1] = v2;
    sub_BE330((__int64)v4);
  }
  return v4;
}
// 150610: using guessed type __int64 (__fastcall *off_150610[2])();
