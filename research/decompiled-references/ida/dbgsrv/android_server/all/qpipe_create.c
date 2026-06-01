/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_create
// Address: 0x00000000000C6F14

//----- (00000000000C6F14) ----------------------------------------------------
__int64 __fastcall qpipe_create(_QWORD *a1)
{
  __int64 result; // x0
  _QWORD v3[2]; // [xsp+0h] [xbp-30h] BYREF

  v3[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = pipe((int *)v3);
  if ( (_DWORD)result )
    return *(unsigned int *)__errno(result);
  *a1 = v3[0];
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
