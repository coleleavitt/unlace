__int64 __fastcall sub_1D96850(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int16 *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int16 *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdx
  _QWORD *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  _QWORD *v23; // r13
  _QWORD *v24; // r15
  unsigned __int64 v25; // rdi
  int v26; // ecx
  int v27; // r9d
  unsigned int v28; // ebx
  unsigned int v29; // eax
  unsigned int v31; // ebx
  unsigned int v32; // eax
  int v33; // [rsp+8h] [rbp-40h]
  int v34; // [rsp+8h] [rbp-40h]
  int v35; // [rsp+Ch] [rbp-3Ch]

  v8 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v8 == 1 )
    return 1;
  v12 = *(unsigned __int16 **)(a2 + 32);
  v13 = v8;
  if ( v12 )
  {
    v14 = sub_1D8B300(a1, v12, a6, a7, v9, v10, v11);
    if ( v14 == 1 )
      return 1;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(unsigned __int16 **)(a2 + 40);
  if ( v15 )
  {
    v16 = sub_1D8B300(a1, v15, a6, a7, v9, v10, v11);
    if ( v16 != 1 )
      goto LABEL_6;
    return 1;
  }
  v16 = 0;
LABEL_6:
  v17 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v17 )
  {
    v21 = *a1;
    v24 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    v22 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v23 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    v25 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v21 + 12632) )
    {
      v26 = *(_DWORD *)(a2 + 64);
      goto LABEL_17;
    }
    goto LABEL_19;
  }
  v18 = *(_QWORD **)(a2 + 48);
  if ( !v18 )
  {
    v21 = *a1;
    v24 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    v22 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v23 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    v25 = *(_QWORD *)(a2 + 24);
    LODWORD(v17) = *(_DWORD *)(v21 + 12632);
    if ( (_DWORD)v17 )
    {
      v26 = *(_DWORD *)(a2 + 64);
      goto LABEL_13;
    }
LABEL_19:
    v20 = 0;
    goto LABEL_10;
  }
  v19 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 48), a6, a7, v17, v10, v11);
  v20 = v19;
  if ( v19 == 1 )
    return 1;
  v21 = *a1;
  v22 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v23 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  v24 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
  LODWORD(v17) = *(_DWORD *)(a2 + 16);
  v25 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v21 + 12632) )
  {
    v18 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_12;
  }
LABEL_10:
  if ( v22 != v25 || *(_QWORD **)(a2 + 32) != v23 || *(_QWORD **)(a2 + 40) != v24 )
  {
    v18 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_12;
  }
  if ( (_DWORD)v17 != 1 )
  {
    v18 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_QWORD **)(a2 + 48) != v18 )
    {
LABEL_12:
      v26 = *(_DWORD *)(a2 + 64);
      if ( !(_DWORD)v17 )
      {
LABEL_13:
        v27 = *(_DWORD *)(a2 + 60);
        v28 = *(_DWORD *)(a2 + 56);
        v35 = v26;
        v33 = v27;
        v29 = sub_EEC140(v25);
        return sub_1B176A0(*(__int64 **)(v21 + 760), v22, a6, a7, v29, v23, v28, v33, v24, v18, v35);
      }
LABEL_17:
      v34 = v26;
      v31 = *(_DWORD *)(a2 + 56);
      v32 = sub_EEC140(v25);
      return sub_1AA4090(*(__int64 **)(v21 + 744), v22, v32, v23, v31, v24, a6, a7, v34);
    }
  }
  return a2;
}
