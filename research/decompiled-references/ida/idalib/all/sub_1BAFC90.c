__int64 __fastcall sub_1BAFC90(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  _QWORD *v23; // r14
  _QWORD *v24; // r13
  unsigned __int64 v25; // rdi
  int v26; // r15d
  unsigned int v28; // eax

  v8 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 24), a3, a6, a7, a4, a5);
  if ( v8 == 1 )
    return 1;
  v12 = *(_QWORD *)(a2 + 32);
  v13 = v8;
  if ( v12 )
  {
    v14 = sub_1B73BE0(a1, v12, v9, a6, a7, v10, v11);
    if ( v14 == 1 )
      return 1;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)(a2 + 40);
  if ( v15 )
  {
    v16 = sub_1B73BE0(a1, v15, v9, a6, a7, v10, v11);
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
      return sub_1B18720(
               *(__int64 **)(v21 + 760),
               v22,
               v23,
               *(_DWORD *)(a2 + 56),
               *(_DWORD *)(a2 + 60),
               v24,
               a6,
               a7,
               v18,
               v26);
    }
LABEL_19:
    v20 = 0;
    goto LABEL_10;
  }
  v19 = sub_1B73BE0(a1, (unsigned __int64)v18, v17, a6, a7, v10, v11);
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
    if ( *(_QWORD *)(a2 + 48) != (v20 & 0xFFFFFFFFFFFFFFFELL) )
    {
LABEL_12:
      v26 = *(_DWORD *)(a2 + 64);
      if ( !(_DWORD)v17 )
        return sub_1B18720(
                 *(__int64 **)(v21 + 760),
                 v22,
                 v23,
                 *(_DWORD *)(a2 + 56),
                 *(_DWORD *)(a2 + 60),
                 v24,
                 a6,
                 a7,
                 v18,
                 v26);
LABEL_17:
      v28 = sub_EEC140(v25);
      return sub_1AA4090(*(__int64 **)(v21 + 744), v22, v28, v23, *(_DWORD *)(a2 + 56), v24, a6, a7, v26);
    }
  }
  return a2;
}
