__int64 __fastcall sub_C010D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rdi

  v5 = *(_QWORD *)(a1 + 32);
  result = sub_C00A40(v5, a2, a3, a4, a5);
  if ( !(_DWORD)result )
  {
    if ( (*(_BYTE *)(a1 + 3) & 1) != 0 )
    {
      return *(unsigned int *)(a1 + 24);
    }
    else if ( *(char *)(a1 + 2) >= 0
           || (result = sub_EEB7E0(*(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32)), !(_DWORD)result) )
    {
      result = sub_EEB7E0(v5);
      if ( !(_DWORD)result && *(_DWORD *)(a1 + 16) )
      {
        v7 = *(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32);
        if ( v7 )
          return sub_EEB7E0(v7);
      }
    }
  }
  return result;
}
