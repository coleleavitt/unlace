_BOOL8 __fastcall sub_F64CD0(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rdi

  if ( *(_BYTE *)(a1 + 16) == 26 )
    return (*(_DWORD *)(a1 + 20) & 2) != 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    return 0;
  v2 = sub_F62E70(a1);
  result = 0;
  if ( v2 )
    return (*(_DWORD *)(v2 + 20) & 2) != 0;
  return result;
}
