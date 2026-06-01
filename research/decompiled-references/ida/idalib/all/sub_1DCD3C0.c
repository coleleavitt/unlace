__int64 __fastcall sub_1DCD3C0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  unsigned __int16 *v15; // r12
  unsigned __int16 *v16; // r13
  unsigned __int64 v17; // rsi
  unsigned __int16 *v18; // r15
  unsigned __int64 v19; // rdx
  _QWORD *v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  _QWORD *v25; // r13
  _QWORD *v26; // r15
  unsigned __int64 v27; // rdi
  int v28; // ecx
  int v29; // r9d
  unsigned int v30; // ebx
  unsigned int v31; // eax
  unsigned int v33; // ebx
  unsigned int v34; // eax
  int v35; // [rsp+8h] [rbp-40h]
  int v36; // [rsp+8h] [rbp-40h]
  int v37; // [rsp+Ch] [rbp-3Ch]

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v14 = *(_QWORD *)(a2 + 32);
  v15 = v9;
  if ( v14 )
  {
    v16 = sub_1DC71F0(a1, v14, v10, v11, v12, v13, a7, a8);
    if ( v16 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return 1;
  }
  else
  {
    v16 = nullptr;
  }
  v17 = *(_QWORD *)(a2 + 40);
  if ( v17 )
  {
    v18 = sub_1DC71F0(a1, v17, v10, v11, v12, v13, a7, a8);
    if ( v18 != (unsigned __int16 *)((char *)&dword_0 + 1) )
      goto LABEL_6;
    return 1;
  }
  v18 = nullptr;
LABEL_6:
  v19 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v19 )
  {
    v23 = *a1;
    v26 = (_QWORD *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL);
    v24 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
    v25 = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
    v27 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v23 + 12632) )
    {
      v28 = *(_DWORD *)(a2 + 64);
      goto LABEL_17;
    }
    goto LABEL_19;
  }
  v20 = *(_QWORD **)(a2 + 48);
  if ( !v20 )
  {
    v23 = *a1;
    v26 = (_QWORD *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL);
    v24 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
    v25 = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
    v27 = *(_QWORD *)(a2 + 24);
    LODWORD(v19) = *(_DWORD *)(v23 + 12632);
    if ( (_DWORD)v19 )
    {
      v28 = *(_DWORD *)(a2 + 64);
      goto LABEL_13;
    }
LABEL_19:
    v22 = 0;
    goto LABEL_10;
  }
  v21 = (unsigned __int64)sub_1DC71F0(a1, *(_QWORD *)(a2 + 48), v19, v11, v12, v13, a7, a8);
  v22 = v21;
  if ( v21 == 1 )
    return 1;
  v23 = *a1;
  v24 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
  v25 = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
  v26 = (_QWORD *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL);
  LODWORD(v19) = *(_DWORD *)(a2 + 16);
  v27 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v23 + 12632) )
  {
    v20 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_12;
  }
LABEL_10:
  if ( v24 != v27 || *(_QWORD **)(a2 + 32) != v25 || *(_QWORD **)(a2 + 40) != v26 )
  {
    v20 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_12;
  }
  if ( (_DWORD)v19 != 1 )
  {
    v20 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_QWORD **)(a2 + 48) != v20 )
    {
LABEL_12:
      v28 = *(_DWORD *)(a2 + 64);
      if ( !(_DWORD)v19 )
      {
LABEL_13:
        v29 = *(_DWORD *)(a2 + 60);
        v30 = *(_DWORD *)(a2 + 56);
        v37 = v28;
        v35 = v29;
        v31 = sub_EEC140(v27);
        return sub_1B176A0(*(__int64 **)(v23 + 760), v24, a7, a8, v31, v25, v30, v35, v26, v20, v37);
      }
LABEL_17:
      v36 = v28;
      v33 = *(_DWORD *)(a2 + 56);
      v34 = sub_EEC140(v27);
      return sub_1AA4090(*(__int64 **)(v23 + 744), v24, v34, v25, v33, v26, a7, a8, v36);
    }
  }
  return a2;
}
