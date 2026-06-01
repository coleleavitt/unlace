__int64 __fastcall sub_2F6270(_QWORD *a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ebp
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rax

  v1 = a1[18];
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  v3 = a1[7];
  if ( !v3 || (v4 = *(unsigned int *)(v3 - 4), (_DWORD)v4 == *(_DWORD *)(v3 - 8)) )
  {
    sub_2FD3F0(a1 + 7);
    v3 = a1[7];
    v4 = *(unsigned int *)(v3 - 4);
  }
  *(_DWORD *)(v3 + 4 * v4) = v2;
  ++*(_DWORD *)(v3 - 4);
  v5 = a1[16];
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  v7 = a1[6];
  if ( !v7 || (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8 == *(_DWORD *)(v7 - 8)) )
  {
    sub_2FD3F0(a1 + 6);
    v7 = a1[6];
    v8 = *(unsigned int *)(v7 - 4);
  }
  *(_DWORD *)(v7 + 4 * v8) = v6;
  ++*(_DWORD *)(v7 - 4);
  v9 = a1[20];
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  v11 = a1[11];
  if ( !v11 || (v12 = *(unsigned int *)(v11 - 4), (_DWORD)v12 == *(_DWORD *)(v11 - 8)) )
  {
    sub_2FD3F0(a1 + 11);
    v11 = a1[11];
    v12 = *(unsigned int *)(v11 - 4);
  }
  *(_DWORD *)(v11 + 4 * v12) = v10;
  ++*(_DWORD *)(v11 - 4);
  v13 = a1[19];
  if ( v13 )
    v14 = *(_DWORD *)(v13 - 4);
  else
    v14 = 0;
  v15 = a1[8];
  if ( !v15 || (v16 = *(unsigned int *)(v15 - 4), (_DWORD)v16 == *(_DWORD *)(v15 - 8)) )
  {
    sub_2FD3F0(a1 + 8);
    v21 = a1[8];
    *(_DWORD *)(v21 + 4LL * (unsigned int)(*(_DWORD *)(v21 - 4))++) = v14;
    v17 = a1[9];
    if ( v17 )
      goto LABEL_18;
LABEL_25:
    v18 = 0;
    goto LABEL_19;
  }
  *(_DWORD *)(v15 + 4 * v16) = v14;
  ++*(_DWORD *)(v15 - 4);
  v17 = a1[9];
  if ( !v17 )
    goto LABEL_25;
LABEL_18:
  v18 = *(_DWORD *)(v17 - 4);
LABEL_19:
  result = a1[10];
  if ( !result || (v20 = *(unsigned int *)(result - 4), (_DWORD)v20 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0(a1 + 10);
    result = a1[10];
    *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v18;
  }
  else
  {
    *(_DWORD *)(result + 4 * v20) = v18;
    ++*(_DWORD *)(result - 4);
  }
  return result;
}

