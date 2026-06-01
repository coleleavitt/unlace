__int64 __fastcall sub_750CE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 32) )
    return (*(__int64 (__fastcall **)(__int64))(a1 + 24))(v2);
  result = (*(__int64 (__fastcall **)(__int64))(a1 + 72))(v2);
  if ( result == 0xFFFFFFFFLL )
    return -1;
  return result;
}
