/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF0C0
// Address: 0x00000000000BF0C0

//----- (00000000000BF0C0) ----------------------------------------------------
_QWORD *__fastcall sub_BF0C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14

  v2 = operator new(0x48u);
  *v2 = &off_150688;
  v2[3] = a1;
  *((_DWORD *)v2 + 4) = 0;
  *((_OWORD *)v2 + 3) = 0;
  *((_OWORD *)v2 + 2) = 0;
  v2[8] = 0;
  v2[1] = a2;
  v2[4] = qtmpfile();
  if ( (__int64)v2[1] < 0 || *((int *)v2 + 4) < 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
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
// 150688: using guessed type _UNKNOWN *off_150688;
