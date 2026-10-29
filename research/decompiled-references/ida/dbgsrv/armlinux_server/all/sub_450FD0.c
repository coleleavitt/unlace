/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450FD0
// Address: 0x0000000000450FD0

//----- (0000000000450FD0) ----------------------------------------------------
__int64 __fastcall sub_450FD0(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64 *, _QWORD, _QWORD, __int64),
        __int64 a3)
{
  __int64 **v3; // x19
  __int64 *v6; // x1
  __int64 result; // x0

  v3 = *(__int64 ***)(*(_QWORD *)(a1 + 696) + 16LL);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v6 = &qword_4B2D48;
    if ( v3[3] )
      v6 = v3[2];
    result = a2((__int64)v3[1], v6, *((unsigned __int8 *)v3 + 40), *((unsigned __int8 *)v3 + 41), a3);
    if ( (_DWORD)result )
      break;
    v3 = (__int64 **)*v3;
    if ( !v3 )
      return 0;
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
