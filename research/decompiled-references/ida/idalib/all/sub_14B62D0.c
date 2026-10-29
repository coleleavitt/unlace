unsigned __int64 __fastcall sub_14B62D0(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 (__fastcall *v3)(_QWORD); // rdx

  if ( !*(_BYTE *)(a1 + 8) || *(_DWORD *)(a1 + 12) != a2 )
    return 0;
  result = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL;
  if ( result )
    return *(_QWORD *)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(_QWORD))(a1 + 24);
  if ( v3 )
    return v3(*(_QWORD *)(a1 + 32));
  return result;
}
