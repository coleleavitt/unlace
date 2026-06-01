__int64 __fastcall sub_20BF340(__int64 a1, const void *a2, size_t a3, const void *a4, size_t a5)
{
  unsigned int v5; // r15d
  int v6; // ebx
  int v7; // eax
  bool v8; // zf
  const char *v9; // r14
  size_t v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _BYTE *v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  _BYTE *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rsi

  v5 = (unsigned __int8)byte_2CFD938;
  v6 = *(_DWORD *)(a1 + 12) + 1;
  v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v6;
  if ( v7 == -1 || v6 <= v7 )
  {
    v8 = (_BYTE)v5 == 0;
    v9 = &byte_22F0C30;
    v5 = 1;
    if ( v8 )
      return v5;
  }
  else
  {
    if ( !(_BYTE)v5 )
      return v5;
    v5 = 0;
    v9 = "NOT ";
  }
  v13 = strlen(v9);
  v14 = sub_227D6D0(v9, a2);
  v15 = *(_QWORD **)(v14 + 32);
  if ( *(_QWORD *)(v14 + 24) - (_QWORD)v15 > 7u )
  {
    *v15 = 0x203A544345534942LL;
    v16 = (_BYTE *)(*(_QWORD *)(v14 + 32) + 8LL);
    *(_QWORD *)(v14 + 32) = v16;
  }
  else
  {
    v14 = sub_227BF10(v14, "BISECT: ", 8);
    v16 = *(_BYTE **)(v14 + 32);
  }
  v17 = *(_QWORD *)(v14 + 24);
  v18 = v17 - (_QWORD)v16;
  if ( v17 - (__int64)v16 < v13 )
  {
    v14 = sub_227BF10(v14, v9, v13);
    v16 = *(_BYTE **)(v14 + 32);
    if ( *(_QWORD *)(v14 + 24) - (_QWORD)v16 <= 0xDu )
    {
LABEL_12:
      v14 = sub_227BF10(v14, "running pass (", 14);
      goto LABEL_13;
    }
  }
  else
  {
    if ( v13 )
    {
      if ( (_DWORD)v13 )
      {
        v30 = 0;
        do
        {
          v31 = v30++;
          v16[v31] = v9[v31];
        }
        while ( v30 < (unsigned int)v13 );
        v17 = *(_QWORD *)(v14 + 24);
      }
      v16 = (_BYTE *)(v13 + *(_QWORD *)(v14 + 32));
      *(_QWORD *)(v14 + 32) = v16;
      v18 = v17 - (_QWORD)v16;
    }
    if ( v18 <= 0xD )
      goto LABEL_12;
  }
  qmemcpy(v16, "running pass (", 14);
  *(_QWORD *)(v14 + 32) += 14LL;
LABEL_13:
  v19 = sub_227B930(v14, v6);
  v20 = *(_WORD **)(v19 + 32);
  v21 = v19;
  if ( *(_QWORD *)(v19 + 24) - (_QWORD)v20 > 1u )
  {
    *v20 = 8233;
    v23 = (_DWORD *)(*(_QWORD *)(v19 + 32) + 2LL);
    *(_QWORD *)(v19 + 32) = v23;
  }
  else
  {
    v22 = sub_227BF10(v19, ") ", 2);
    v23 = *(_DWORD **)(v22 + 32);
    v21 = v22;
  }
  v24 = *(_QWORD *)(v21 + 24) - (_QWORD)v23;
  if ( v24 >= a3 )
  {
    if ( a3 )
    {
      memcpy(v23, a2, a3);
      v29 = *(_QWORD *)(v21 + 24);
      v23 = (_DWORD *)(a3 + *(_QWORD *)(v21 + 32));
      *(_QWORD *)(v21 + 32) = v23;
      v24 = v29 - (_QWORD)v23;
    }
    if ( v24 <= 3 )
      goto LABEL_19;
LABEL_29:
    *v23 = 544108320;
    v26 = (_BYTE *)(*(_QWORD *)(v21 + 32) + 4LL);
    *(_QWORD *)(v21 + 32) = v26;
    goto LABEL_20;
  }
  v28 = sub_227BF10(v21, a2, a3);
  v23 = *(_DWORD **)(v28 + 32);
  v21 = v28;
  if ( *(_QWORD *)(v28 + 24) - (_QWORD)v23 > 3u )
    goto LABEL_29;
LABEL_19:
  v25 = sub_227BF10(v21, " on ", 4);
  v26 = *(_BYTE **)(v25 + 32);
  v21 = v25;
LABEL_20:
  v27 = *(_QWORD *)(v21 + 24);
  if ( v27 - (unsigned __int64)v26 < a5 )
  {
    v21 = sub_227BF10(v21, a4, a5);
    v26 = *(_BYTE **)(v21 + 32);
    v27 = *(_QWORD *)(v21 + 24);
  }
  else if ( a5 )
  {
    memcpy(v26, a4, a5);
    v27 = *(_QWORD *)(v21 + 24);
    v26 = (_BYTE *)(a5 + *(_QWORD *)(v21 + 32));
    *(_QWORD *)(v21 + 32) = v26;
  }
  if ( (unsigned __int64)v26 >= v27 )
  {
    sub_227BA10(v21, 10);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v26 + 1;
    *v26 = 10;
  }
  return v5;
}
