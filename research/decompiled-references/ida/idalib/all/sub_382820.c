void __fastcall sub_382820(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // r13
  const char *v6; // rbp
  char *v7; // rax
  unsigned __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rax

  if ( a2 == -1 )
    return;
  if ( !*(_DWORD *)(a1 + 212) )
    return;
  if ( *(_QWORD *)(a1 + 200) >= a2 )
    return;
  if ( (*(_BYTE *)(a1 + 146) & 0x20) != 0 )
    return;
  v2 = *(_QWORD **)(a1 + 96);
  if ( !v2 )
    return;
  v3 = v2[1];
  if ( !v3 )
    return;
  v4 = *v2 + 24 * v3 - 24;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    return;
  v6 = *(const char **)v4;
  v7 = strstr(*(const char **)v4, &needle);
  if ( !v7 )
    return;
  v8 = v7 - v6;
  if ( v7 - v6 == -1 )
    return;
  if ( v8 )
  {
    v9 = v7 - 1;
    if ( *v9 == 32 )
    {
      *v9 = -30;
      v13 = *(_QWORD *)(v4 + 8);
      v14 = *(_QWORD *)(v4 + 16);
      v15 = *(const char **)v4;
      if ( v13 )
      {
        v16 = v13 + 2;
        v17 = v13 - 1;
        v18 = v13 + 1;
        if ( v14 >= v13 + 2 )
          goto LABEL_21;
      }
      else
      {
        if ( v14 > 2 )
        {
          *(_QWORD *)(v4 + 8) = 3;
          v17 = 0;
          *((_BYTE *)v15 + 2) = 0;
LABEL_23:
          *(_WORD *)(*(_QWORD *)v4 + v17) = -22912;
          return;
        }
        v17 = 0;
        v16 = 3;
        v18 = 2;
      }
      v20 = qvector_reserve(v4, v15, v16, 1);
      *(_QWORD *)v4 = v20;
      v15 = (const char *)v20;
LABEL_21:
      *(_QWORD *)(v4 + 8) = v16;
      v15[v18] = 0;
      if ( v8 < v17 )
      {
        v19 = v17;
        v17 = v8;
        memmove((void *)(v8 + *(_QWORD *)v4 + 2), (const void *)(v8 + *(_QWORD *)v4), v19 - v8);
      }
      goto LABEL_23;
    }
  }
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v5 + 3) )
  {
    v12 = qvector_reserve(v4, v6, v5 + 3, 1);
    *(_QWORD *)v4 = v12;
    v6 = (const char *)v12;
  }
  v10 = v5 - 1;
  *(_QWORD *)(v4 + 8) = v5 + 3;
  v6[v5 + 2] = 0;
  if ( v8 < v5 - 1 )
  {
    memmove((void *)(v8 + *(_QWORD *)v4 + 3), (const void *)(v8 + *(_QWORD *)v4), v10 - v8);
    v10 = v8;
  }
  v11 = *(_QWORD *)v4 + v10;
  *(_WORD *)v11 = -32542;
  *(_BYTE *)(v11 + 2) = -90;
}
