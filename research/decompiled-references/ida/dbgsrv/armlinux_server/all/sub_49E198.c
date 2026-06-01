/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E198
// Address: 0x000000000049E198

//----- (000000000049E198) ----------------------------------------------------
__int64 __fastcall sub_49E198(__int64 a1, __int64 a2, _QWORD **a3)
{
  unsigned __int8 (__fastcall *v6)(__int64); // x1
  __int64 result; // x0
  _QWORD *v9; // [xsp+38h] [xbp+38h] BYREF

  v6 = *(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  v9 = *a3;
  if ( v6(a2) )
    v9 = (_QWORD *)*v9;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2, &v9, 1);
  if ( (_BYTE)result )
    *a3 = v9;
  return result;
}
