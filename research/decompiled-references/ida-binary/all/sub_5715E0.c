bool __fastcall sub_5715E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  const void **v3; // rcx
  size_t v4; // rdx
  const void *v5; // rsi
  const void *v7; // rdi

  v2 = 0;
  v3 = (const void **)&unk_6D5800;
  if ( a1 && (a1 & 1) == 0 && (*(_BYTE *)(a1 + 44) & 0x40) != 0 && !*(_DWORD *)(a1 + 36) )
  {
    v2 = *(_DWORD *)(a1 + 72);
    v3 = (const void **)(a1 + 48);
  }
  if ( !a2 || (a2 & 1) != 0 || (*(_BYTE *)(a2 + 44) & 0x40) == 0 || *(_DWORD *)(a2 + 36) )
  {
    v5 = &unk_6D5800;
    v4 = 0;
LABEL_14:
    if ( (_DWORD)v4 != v2 )
      return 0;
    v7 = v3;
    return memcmp(v7, v5, v4) == 0;
  }
  v4 = *(unsigned int *)(a2 + 72);
  if ( (unsigned int)v4 <= 0x18 )
  {
    v5 = (const void *)(a2 + 48);
    goto LABEL_14;
  }
  v5 = *(const void **)(a2 + 48);
  if ( (_DWORD)v4 != v2 )
    return 0;
  v7 = *v3;
  v4 = v2;
  return memcmp(v7, v5, v4) == 0;
}
