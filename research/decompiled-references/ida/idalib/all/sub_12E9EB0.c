__int64 __fastcall sub_12E9EB0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *a2;
  *a2 = 0;
  result = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v2;
  if ( result )
  {
    if ( (*(_DWORD *)(result + 32))-- == 1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 24) + 8LL))(result + 24);
  }
  return result;
}
