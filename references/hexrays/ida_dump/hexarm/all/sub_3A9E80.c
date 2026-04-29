__int64 __fastcall sub_3A9E80(__int64 a1, int *a2)
{
  __int64 *v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rdx
  int v8; // esi
  _DWORD *i; // rax

  v2 = *(__int64 **)(a1 + 184);
  result = -1;
  v4 = v2[1];
  if ( v4 )
  {
    v5 = *v2;
    v6 = *a2;
    v7 = 0;
    v8 = a2[1];
    for ( i = (_DWORD *)(v5 + 16); v6 > *i || v6 >= *i && v8 >= i[1]; i += 10 )
    {
      if ( v4 == ++v7 )
        return v4 - 1;
    }
    result = v7 - 1;
    if ( !v7 )
      return 0;
  }
  return result;
}
