bool __fastcall sub_21001D0(__int64 a1, __int64 a2)
{
  const void *v4; // rsi
  char *v5; // rdi
  size_t v6; // rdx
  bool result; // al

  v4 = *(const void **)(a2 + 8);
  v5 = *(char **)(a1 + 8);
  if ( v4 == (const void *)-1LL )
  {
    result = v5 + 1 == nullptr;
LABEL_8:
    if ( !result )
      return result;
    goto LABEL_9;
  }
  if ( v4 == (const void *)-2LL )
  {
    result = v5 + 2 == nullptr;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( *(_QWORD *)(a2 + 16) == v6 && (!v6 || (result = memcmp(v5, v4, v6) == 0)) )
  {
LABEL_9:
    result = 0;
    if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) )
      return *(_DWORD *)a1 == *(_DWORD *)a2;
  }
  return result;
}
