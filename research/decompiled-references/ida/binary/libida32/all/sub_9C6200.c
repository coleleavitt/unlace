__int64 __fastcall sub_9C6200(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v1 + 3) & 1) != 0 )
    return *(unsigned int *)(v1 + 24);
  if ( *(char *)(v1 + 2) >= 0
    || (result = sub_EC7AA0(*(_QWORD *)(v1 + 8 * (((*(_BYTE *)(v1 + 2) & 8) != 0) + 1LL) + 32)), !(_DWORD)result) )
  {
    result = sub_EC7AA0(*(_QWORD *)(v1 + 32));
    if ( !(_DWORD)result && *(_DWORD *)(v1 + 16) )
    {
      v3 = *(_QWORD *)(v1 + 8 * (((*(_BYTE *)(v1 + 2) & 8) != 0) + 1LL) + 32);
      if ( v3 )
        return sub_EC7AA0(v3);
    }
  }
  return result;
}

