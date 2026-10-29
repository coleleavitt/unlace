char __fastcall sub_AC8400(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  char result; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int *v14; // rsi
  _DWORD *v15; // rdi
  size_t v16; // rdx

  v2 = *(_QWORD *)(a2 + 40);
  if ( (v2 & 7) != 0 || (v3 = v2 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v11 = *(_QWORD *)(a2 + 120);
    if ( (v11 & 4) != 0 || (v12 = v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (v13 = *(_QWORD *)(v12 + 40), (v13 & 7) != 0) )
    {
      result = 1;
      v5 = 0;
    }
    else
    {
      v5 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      result = v5 == 0;
    }
    v4 = *(_QWORD *)(a1 + 40);
    if ( (v4 & 7) != 0 )
      goto LABEL_4;
LABEL_13:
    v10 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10 )
      goto LABEL_14;
    goto LABEL_4;
  }
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v3;
  result = 0;
  if ( (v4 & 7) == 0 )
    goto LABEL_13;
LABEL_4:
  v7 = *(_QWORD *)(a1 + 120);
  if ( (v7 & 4) != 0 )
    return result;
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v8 )
    return result;
  v9 = *(_QWORD *)(v8 + 40);
  if ( (v9 & 7) != 0 )
    return result;
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_14:
  result |= v10 == 0;
  if ( result )
    return v10 == v5;
  v14 = *(unsigned int **)(v5 + 16);
  v15 = *(_DWORD **)(v10 + 16);
  v16 = *v14;
  if ( v16 == *v15 )
  {
    result = 1;
    if ( *v14 )
      return memcmp(v15 + 4, v14 + 4, v16) == 0;
  }
  return result;
}

