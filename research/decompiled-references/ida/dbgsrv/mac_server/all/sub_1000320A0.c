/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000320A0
// Address: 0x00000001000320A0

//----- (00000001000320A0) ----------------------------------------------------
__int64 __fastcall sub_1000320A0(__int64 a1, int a2)
{
  __int64 result; // rax
  _OWORD *v3; // rax

  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = a2;
  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
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
    qword_1000AE2E0 = (__int64)v3;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  result = qword_1000AE2E0;
  if ( *(_QWORD *)(qword_1000AE2E0 + 72) <= (unsigned __int64)*(int *)(a1 + 28) )
    *(_DWORD *)(a1 + 28) = 0;
  return result;
}
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
