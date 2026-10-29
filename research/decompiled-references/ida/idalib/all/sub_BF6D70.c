__int64 __fastcall sub_BF6D70(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  if ( (*(_BYTE *)(a1 + 3) & 1) != 0 )
    return *(unsigned int *)(a1 + 24);
  if ( *(char *)(a1 + 2) >= 0
    || (result = sub_EEB7E0(*(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32)), !(_DWORD)result) )
  {
    result = sub_EEB7E0(*(_QWORD *)(a1 + 32));
    if ( !(_DWORD)result && *(_DWORD *)(a1 + 16) )
    {
      v2 = *(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32);
      if ( v2 )
        return sub_EEB7E0(v2);
    }
  }
  return result;
}
