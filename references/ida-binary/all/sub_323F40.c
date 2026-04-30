__int64 __fastcall sub_323F40(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rcx
  int v4; // r8d
  int v5; // eax
  bool v6; // zf
  int v7; // r8d
  __int64 i; // rax
  int v9; // eax
  int v10; // ecx
  unsigned int *v11; // rdx
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v1 = *(_QWORD *)(a1 + 208);
  LODWORD(v2) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 72LL) + 13 - *(_DWORD *)(*(_QWORD *)(a1 + 184) + 68LL);
  *(_DWORD *)(a1 + 48) = v2;
  v2 = (int)v2;
  if ( v1 < (int)v2 )
  {
    v15 = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 216) < (unsigned __int64)(int)v2 )
    {
      v17 = qvector_reserve(a1 + 200, v15, (int)v2, 4);
      v1 = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 200) = v17;
      v15 = v17;
    }
    memset((void *)(v15 + 4 * v1), 0, 4 * ((int)v2 - v1));
    *(_QWORD *)(a1 + 208) = (int)v2;
    v2 = *(int *)(a1 + 48);
  }
  else if ( (int)v2 != v1 )
  {
    *(_QWORD *)(a1 + 208) = (int)v2;
  }
  v3 = *(_QWORD *)(a1 + 232);
  if ( v3 < v2 )
  {
    v14 = *(_QWORD *)(a1 + 224);
    if ( *(_QWORD *)(a1 + 240) < v2 )
    {
      v16 = qvector_reserve(a1 + 224, v14, v2, 8);
      v3 = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a1 + 224) = v16;
      v14 = v16;
    }
    memset((void *)(v14 + 8 * v3), 0, 8 * (v2 - v3));
    *(_QWORD *)(a1 + 232) = v2;
  }
  else if ( v3 != v2 )
  {
    *(_QWORD *)(a1 + 232) = v2;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 76LL);
  if ( *(_BYTE *)(a1 + 192) )
  {
    v5 = 3 * v4;
    v6 = v4 == 0;
    v7 = 12;
    if ( !v6 )
      v7 = v5;
  }
  else
  {
    v7 = 2 * v4;
    if ( !v7 )
      v7 = 8;
  }
  for ( i = 0; i != 52; i += 4 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 200) + i) = *(_DWORD *)((char *)&unk_5E7BE0 + i);
    *(_QWORD *)(*(_QWORD *)(a1 + 224) + 2 * i) = *(_UNKNOWN **)((char *)&off_865EE0 + 2 * i);
  }
  v9 = 16;
  if ( *(_BYTE *)(a1 + 192) )
    v9 = 12;
  v10 = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 200) + 4LL) = v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 200) + 8LL) = v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 200) + 36LL) = v7;
  v11 = *(unsigned int **)(a1 + 184);
  for ( result = v11[17]; (int)v11[18] >= (int)result; result = (unsigned int)(result + 1) )
  {
    if ( v11[20] != (_DWORD)result )
    {
      v13 = v10++;
      *(_DWORD *)(*(_QWORD *)(a1 + 200) + 4 * v13) = v7;
      *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v13) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 56LL)
                                                               + 8LL * (int)result);
      v11 = *(unsigned int **)(a1 + 184);
    }
  }
  return result;
}
