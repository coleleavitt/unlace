__int64 __fastcall sub_7B1830(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // rax
  _DWORD *v11; // rdx
  _DWORD *v12; // rdi
  int v13; // esi

  result = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v5 = sub_81AF20(a2);
      v6 = v5 + 76;
      result = 8LL * *(unsigned int *)(v5 + 32);
      v7 = v6 + result;
      if ( result )
      {
        v8 = 0;
        do
        {
          v9 = *(_DWORD *)(v6 + 4);
          result = v9 & 1;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3448LL) + (v9 >> 1)) != (v9 & 1) )
            ++v8;
          v6 += 8;
        }
        while ( v7 != v6 );
        goto LABEL_8;
      }
    }
LABEL_15:
    v8 = 0;
LABEL_8:
    *(_DWORD *)(a2 + 28) = v8;
    return result;
  }
  v10 = sub_828140(a2);
  v11 = (_DWORD *)(v10 + 64);
  result = 4LL * *(unsigned int *)(v10 + 32);
  v12 = (_DWORD *)((char *)v11 + result);
  if ( !result )
    goto LABEL_15;
  v13 = 0;
  do
  {
    result = *v11 >> 1;
    if ( (*(_BYTE *)v11 & 1) != *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3448LL) + result) )
      ++v13;
    ++v11;
  }
  while ( v12 != v11 );
  *(_DWORD *)(a2 + 28) = v13;
  return result;
}

