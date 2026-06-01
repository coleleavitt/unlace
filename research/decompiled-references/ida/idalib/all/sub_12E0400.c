__int64 __fastcall sub_12E0400(volatile signed __int32 *a1)
{
  __int64 result; // rax

  if ( !_InterlockedSub(a1, 1u) )
  {
    result = (__int64)(a1 - 2);
    if ( a1 != (volatile signed __int32 *)byte_8 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*((_QWORD *)a1 - 1) + 8LL))(a1 - 2);
  }
  return result;
}
