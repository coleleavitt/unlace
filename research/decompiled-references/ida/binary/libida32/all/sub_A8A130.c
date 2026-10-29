__int64 __fastcall sub_A8A130(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  char v22; // r13
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 47 )
  {
LABEL_5:
    if ( *(_BYTE *)(v8 + 16) != 47 )
      goto LABEL_9;
    v14 = sub_F3D1D0(v8, v5, v6, a4, a5);
    if ( (*(_BYTE *)(v14 + 74) & 1) != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
  v9 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL), v5, v6, a4, a5);
  if ( ((*(_BYTE *)(v9 + 74) & 1) != 0 || (*(_QWORD *)(v9 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *(char *)(sub_F3D1D0(v7, v5, v10, v11, v12) + 76) >= 0 )
  {
    v13 = sub_F3D1D0(v7, v5, v10, v11, v12);
    v7 = *(_QWORD *)(sub_6D3020(v13) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_5;
  }
  v7 = 0;
  if ( *(_BYTE *)(v8 + 16) != 47 )
    goto LABEL_10;
  v14 = sub_F3D1D0(v8, v5, v10, v11, v12);
  if ( (*(_BYTE *)(v14 + 74) & 1) != 0 )
    goto LABEL_7;
LABEL_13:
  if ( (*(_QWORD *)(v14 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_14:
    v8 = 0;
    if ( !v7 )
      return 0;
    goto LABEL_10;
  }
LABEL_7:
  if ( *(char *)(sub_F3D1D0(v8, v5, v15, v16, v17) + 76) < 0 )
    goto LABEL_14;
  v21 = sub_F3D1D0(v8, v5, v18, v19, v20);
  v8 = *(_QWORD *)(sub_6D3020(v21) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_9:
  if ( v8 == v7 )
    return 0;
LABEL_10:
  v22 = sub_F41620(v7);
  v23 = sub_F41620(v8);
  v26 = sub_A89F80(a1, v7, v24, v25);
  v29 = sub_A89F80(a1, v8, v27, v28);
  if ( v22 == v23 )
  {
    if ( v29 != v26 )
      return v29 < v26 ? 1 : -1;
    return 0;
  }
  if ( v22 )
    return v26 < v29 ? -1 : 1;
  else
    return v29 < v26 ? 1 : -1;
}

