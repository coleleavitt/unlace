/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D080
// Address: 0x000000014001D080

//----- (000000014001D080) ----------------------------------------------------
__int64 __fastcall sub_14001D080(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5 = a2;
  v6 = a3;
  if ( !qword_1400CAEA0 )
    return sub_140017F10(a1, (__int64)&v5, 1u);
  result = ((__int64 (__fastcall *)(__int64, int *, __int64, _QWORD, _DWORD, _QWORD))qword_1400CAEA0)(
             17,
             &v5,
             16,
             0,
             0,
             0);
  if ( (int)result < 0 )
    return sub_140017F10(a1, (__int64)&v5, 1u);
  return result;
}
// 1400CAEA0: using guessed type __int64 (__fastcall *qword_1400CAEA0)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD);
