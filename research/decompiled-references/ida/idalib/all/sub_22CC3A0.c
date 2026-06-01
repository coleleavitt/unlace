__int64 __fastcall sub_22CC3A0(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
    _InterlockedAdd((volatile signed __int32 *)(result - 128), 1u);
  return result;
}
