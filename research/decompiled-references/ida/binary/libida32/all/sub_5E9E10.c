unsigned __int64 __fastcall sub_5E9E10(__int64 a1)
{
  char v1; // dl
  int v2; // eax
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  __int64 v5; // rdx

  v1 = *(_BYTE *)(a1 + 88);
  v2 = v1 & 0xF0;
  if ( (v1 & 0xF0) == 0xC0 )
    v2 = *(_DWORD *)(a1 + 28);
  result = (unsigned int)(v2 - 208);
  if ( (unsigned int)result <= 0x2F )
  {
    result = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)result != 2 )
    {
      if ( (_DWORD)result != 1 )
        return result;
LABEL_7:
      *(_DWORD *)(a1 + 24) |= 0x200u;
      return result;
    }
    v4 = *(unsigned __int64 **)(a1 + 48);
    result = *v4;
    v5 = *v4 + 24 * v4[1];
    if ( result == v5 )
      goto LABEL_7;
    while ( *(_DWORD *)result == 1 )
    {
      result += 24LL;
      if ( v5 == result )
        goto LABEL_7;
    }
  }
  return result;
}

