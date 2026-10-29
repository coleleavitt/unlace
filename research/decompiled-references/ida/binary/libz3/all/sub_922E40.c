__int64 __fastcall sub_922E40(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  int v5; // ebx
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned int *v8; // r9
  unsigned int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax

  v4 = a1[27];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = v5 - a2;
  v7 = a1[26];
  v8 = (unsigned int *)(v4 + 12LL * v6);
  if ( v7 )
  {
    v9 = v8[2];
    v10 = *(_DWORD *)(v7 - 4);
    if ( v9 < v10 )
    {
      v11 = v10 - 1;
      v12 = a1[24];
      v13 = v7 + 12 * v11 - 12;
      v14 = 12LL * ((unsigned int)v11 - v9);
      v15 = (unsigned __int16 *)(v7 + 12 * v11);
      v16 = (unsigned __int16 *)(v13 - v14);
      do
      {
        v17 = *v15;
        v18 = v15[1];
        v15 -= 6;
        v19 = (_DWORD *)(*(_QWORD *)(v12 + 8 * v17) + 16 * v18);
        *v19 = *((_DWORD *)v15 + 4);
        v19[1] = *((_DWORD *)v15 + 5);
      }
      while ( v16 != v15 );
    }
    *(_DWORD *)(v7 - 4) = v9;
  }
  v20 = a1[23];
  if ( v20 )
    *(_DWORD *)(v20 - 4) = v8[1];
  sub_922D80(a1, *v8);
  v21 = a1[5];
  if ( v21 )
  {
    v22 = *(_DWORD *)(v21 + 4LL * (*(_DWORD *)(v21 - 4) - a2));
    v23 = a1[4];
    if ( v23 )
    {
LABEL_12:
      v24 = *(_DWORD *)(v23 - 4);
      goto LABEL_13;
    }
  }
  else
  {
    v22 = *(_DWORD *)(4LL * -a2);
    v23 = a1[4];
    if ( v23 )
      goto LABEL_12;
  }
  v24 = 0;
LABEL_13:
  if ( v24 != v22 )
    sub_91D050(a1, v22);
  v25 = a1[27];
  if ( v25 )
    *(_DWORD *)(v25 - 4) = v6;
  return sub_965AE0(a1, a2);
}

