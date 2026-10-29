unsigned __int64 __fastcall sub_2162AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax

  result = sub_21629B0(a2, *(_QWORD *)(a1 + 16), a3, a4, a5, a6, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  if ( result )
  {
    if ( *(_DWORD *)(a2 + 12) )
      sub_2221C70("Sections with relocations should have an address of 0", 1);
  }
  return result;
}
