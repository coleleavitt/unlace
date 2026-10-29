__int64 __fastcall sub_80B750(__int64 a1)
{
  __int64 result; // rax
  int v2; // ecx
  __int64 v3; // rdi

  if ( (*(_WORD *)a1 & 0x1FF) == 0x5C )
    return *(unsigned int *)(a1 + 28);
  result = *(unsigned int *)(a1 + 20);
  if ( !(_DWORD)result )
  {
    v2 = *(_DWORD *)(a1 + 16);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1
                     + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + (unsigned __int64)(unsigned int)(v2 - 1) + 1)
                     + *(unsigned __int8 *)(a1 + 3));
      if ( v3 )
        return sub_AC7460(v3);
    }
  }
  return result;
}

