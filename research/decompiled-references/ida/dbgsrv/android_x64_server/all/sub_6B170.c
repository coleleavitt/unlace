/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B170
// Address: 0x000000000006B170

//----- (000000000006B170) ----------------------------------------------------
__int64 __fastcall sub_6B170(__int64 a1, int a2)
{
  __int64 result; // rax
  _OWORD *v3; // rax

  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = a2;
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v3 = operator new(0x80u);
    *(_OWORD *)((char *)v3 + 109) = 0;
    v3[6] = 0;
    v3[5] = 0;
    v3[4] = 0;
    v3[3] = 0;
    v3[2] = 0;
    v3[1] = 0;
    *v3 = 0;
    qword_155820 = (__int64)v3;
    _cxa_guard_release(&byte_155828);
  }
  result = qword_155820;
  if ( *(_QWORD *)(qword_155820 + 72) <= (unsigned __int64)*(int *)(a1 + 28) )
    *(_DWORD *)(a1 + 28) = 0;
  return result;
}
// 155820: using guessed type __int64 qword_155820;
