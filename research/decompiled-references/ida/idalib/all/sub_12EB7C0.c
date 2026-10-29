__int64 __fastcall sub_12EB7C0(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    if ( (*(_DWORD *)(result + 32))-- == 1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 24) + 8LL))(result + 24);
  }
  return result;
}
