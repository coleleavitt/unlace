char __fastcall sub_DA2A60(__int64 a1)
{
  char result; // al
  __int64 v2; // rcx
  __int64 v3; // rdx

  result = 1;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = *(unsigned int *)(a1 + 40);
      result = (_DWORD)v3 == 0 || *(_DWORD *)(*(_QWORD *)(v2 + 32) + 24LL) == (_DWORD)v3;
      if ( !result )
        return (*(_BYTE *)(v2 + v3 + 28) & 0x10) != 0;
    }
  }
  return result;
}

