__int64 __fastcall sub_1CB9A0(__int64 *a1, unsigned __int64 a2)
{
  const char *v2; // r12
  const char *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  size_t v7; // rax
  _QWORD *v8; // rsi
  size_t v9; // rbp
  size_t v10; // r14
  unsigned __int64 v11; // rax
  char *v12; // rsi
  const char *v13; // r13
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // edx
  __int64 v17; // rcx
  size_t v18; // rax
  _QWORD *v19; // rsi
  size_t v20; // rbp
  size_t v21; // r13
  __int64 result; // rax
  unsigned __int64 v23; // rax
  char *v24; // rsi
  const char *v25; // r12
  unsigned int v26; // esi
  unsigned int v27; // esi
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  if ( a2 == 2 )
  {
    v2 = "line-fg-patched-bytes";
    v3 = "CustomIDAMemo";
  }
  else if ( a2 > 2 )
  {
    result = 0;
    v2 = "line-fg-unsaved-changes";
    v3 = "CustomIDAMemo";
    if ( a2 != 3 )
      return result;
  }
  else
  {
    v2 = "color";
    if ( a2 )
      v2 = "background-color";
    v3 = "MainMsgList";
  }
  v4 = a1[1];
  v5 = *a1;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v30 = qvector_reserve(a1, v5, v4 + 1, 48);
    v4 = a1[1];
    *a1 = v30;
    v5 = v30;
  }
  v6 = v5 + 48 * v4;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  ++a1[1];
  v7 = strlen(v3);
  v8 = *(_QWORD **)v6;
  v9 = v7;
  v10 = v7 + 1;
  if ( *(_QWORD *)(v6 + 16) < v7 + 1 )
  {
    v32 = qvector_reserve(v6, v8, v7 + 1, 1);
    *(_QWORD *)v6 = v32;
    v8 = (_QWORD *)v32;
  }
  *(_QWORD *)(v6 + 8) = v10;
  *v8 = *(_QWORD *)v3;
  *(_QWORD *)((char *)v8 + (unsigned int)v9 - 8) = *(_QWORD *)&v3[(unsigned int)v9 - 8];
  v11 = (unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v12 = (char *)v8 - v11;
  v13 = (const char *)(v3 - v12);
  v14 = (v9 + (_DWORD)v12) & 0xFFFFFFF8;
  if ( v14 >= 8 )
  {
    v15 = v14 & 0xFFFFFFF8;
    v16 = 0;
    do
    {
      v17 = v16;
      v16 += 8;
      *(_QWORD *)(v11 + v17) = *(_QWORD *)&v13[v17];
    }
    while ( v16 < v15 );
  }
  *(_BYTE *)(*(_QWORD *)v6 + v9) = 0;
  v18 = strlen(v2);
  v19 = *(_QWORD **)(v6 + 24);
  v20 = v18;
  v21 = v18 + 1;
  if ( *(_QWORD *)(v6 + 40) < v18 + 1 )
  {
    v31 = qvector_reserve(v6 + 24, v19, v18 + 1, 1);
    *(_QWORD *)(v6 + 24) = v31;
    v19 = (_QWORD *)v31;
  }
  *(_QWORD *)(v6 + 32) = v21;
  if ( (unsigned int)v20 >= 8 )
  {
    *v19 = *(_QWORD *)v2;
    *(_QWORD *)((char *)v19 + (unsigned int)v20 - 8) = *(_QWORD *)&v2[(unsigned int)v20 - 8];
    v23 = (unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v24 = (char *)v19 - v23;
    v25 = (const char *)(v2 - v24);
    v26 = (v20 + (_DWORD)v24) & 0xFFFFFFF8;
    if ( v26 >= 8 )
    {
      v27 = v26 & 0xFFFFFFF8;
      v28 = 0;
      do
      {
        v29 = v28;
        v28 += 8;
        *(_QWORD *)(v23 + v29) = *(_QWORD *)&v25[v29];
      }
      while ( v28 < v27 );
    }
  }
  else if ( (v20 & 4) != 0 )
  {
    *(_DWORD *)v19 = *(_DWORD *)v2;
    *(_DWORD *)((char *)v19 + (unsigned int)v20 - 4) = *(_DWORD *)&v2[(unsigned int)v20 - 4];
  }
  else if ( (_DWORD)v20 )
  {
    *(_BYTE *)v19 = *v2;
    if ( (v20 & 2) != 0 )
      *(_WORD *)((char *)v19 + (unsigned int)v20 - 2) = *(_WORD *)&v2[(unsigned int)v20 - 2];
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 24) + v20) = 0;
  return 1;
}
