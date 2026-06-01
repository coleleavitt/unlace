bool __fastcall sub_5A72D0(const void **a1, const void **a2)
{
  _DWORD *v2; // rdi
  unsigned int *v3; // rsi
  int v4; // ecx
  __int64 v5; // rdx
  bool result; // al
  size_t v7; // rdx

  v2 = *a1;
  v3 = (unsigned int *)*a2;
  if ( v2 )
  {
    v4 = *(v2 - 1);
    if ( !v3 )
    {
      v5 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    if ( !v3 )
    {
      v7 = 0;
      return memcmp(v2, v3, v7) == 0;
    }
    v4 = 0;
  }
  v5 = *(v3 - 1);
LABEL_4:
  result = 0;
  if ( (_DWORD)v5 != v4 )
    return result;
  v7 = 8 * v5;
  return memcmp(v2, v3, v7) == 0;
}

