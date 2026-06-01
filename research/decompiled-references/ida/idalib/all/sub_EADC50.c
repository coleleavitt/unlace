char __fastcall sub_EADC50(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // dl
  char v4; // cl
  char v5; // r8
  _DWORD *v6; // rsi
  unsigned int *v7; // rdi
  char result; // al
  size_t v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  size_t v12; // rdx

  v2 = *(_BYTE *)(a1 + 32);
  v3 = *(_BYTE *)(a2 + 32);
  if ( v2 == -1 )
  {
    if ( v3 == -1 )
      goto LABEL_20;
    v4 = 0;
    goto LABEL_3;
  }
  v4 = v2 == 0;
  if ( v3 != -1 )
  {
LABEL_3:
    v5 = v3 == 0;
    goto LABEL_4;
  }
  v5 = 0;
LABEL_4:
  if ( v4 != v5 )
    return 0;
  if ( v2 )
  {
    if ( v3 == 1 )
    {
      v6 = *(_DWORD **)(*(_QWORD *)(a2 + 24) + 16LL);
      if ( v2 == 1 )
      {
        v7 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
        result = 0;
        v9 = *v7;
        if ( v9 == *v6 )
        {
          result = 1;
          if ( *v7 )
            return memcmp(v7 + 4, v6 + 4, v9) == 0;
        }
        return result;
      }
    }
LABEL_20:
    abort();
  }
  if ( v3 )
    goto LABEL_20;
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_QWORD *)(a1 + 24);
  result = 0;
  v12 = *(_DWORD *)(v11 + 16) * ((*(_WORD *)(v11 + 2) >> 6) & 7u);
  if ( v12 == *(_DWORD *)(v10 + 16) * ((*(_WORD *)(v10 + 2) >> 6) & 7) )
  {
    result = 1;
    if ( *(_DWORD *)(v11 + 16) * ((*(_WORD *)(v11 + 2) >> 6) & 7) )
      return memcmp(
               (const void *)(v11 + 4LL * *(unsigned int *)(v11 + 4) + 20),
               (const void *)(v10 + 4LL * *(unsigned int *)(v10 + 4) + 20),
               v12) == 0;
  }
  return result;
}
