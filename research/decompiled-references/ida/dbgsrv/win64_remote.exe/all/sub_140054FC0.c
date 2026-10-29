/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054FC0
// Address: 0x0000000140054FC0

//----- (0000000140054FC0) ----------------------------------------------------
__int64 __fastcall sub_140054FC0(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = (**(__int64 (__fastcall ***)(volatile signed __int32 *))a1)(a1);
    if ( _InterlockedExchangeAdd(a1 + 3, 0xFFFFFFFF) == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  }
  return result;
}
