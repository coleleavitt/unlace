__int64 __fastcall sub_D16D00(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _DWORD *v7; // r9
  __int64 v9; // r9
  _DWORD *v10; // r10
  __int64 v11; // rdi
  unsigned int *v12; // r10
  __int64 v13; // r9
  _DWORD *v14; // r11
  unsigned int *v15; // r11
  __int64 v16; // r9
  __int64 v17; // rax
  _DWORD *v18; // r9
  unsigned int *v19; // r9
  __int64 v20; // rax
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  _DWORD *v25; // rdi
  _DWORD *v26; // rdx
  _DWORD *v27; // rbx
  _DWORD *v28; // r10
  _DWORD *v29; // r9
  int v30; // r11d
  _DWORD *v31; // rt2
  bool v32; // bp
  bool v33; // r10

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v7 )
    return 0;
  if ( *v7 )
    return 0;
  if ( v7[1] != 6 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) != 3 )
    return 0;
  v9 = *(_QWORD *)(a2 + 32);
  if ( *(_WORD *)(v9 + 4) )
    return 0;
  v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
  if ( !v10 )
    return 0;
  if ( *v10 )
    return 0;
  if ( v10[1] != 8 )
    return 0;
  if ( *(_DWORD *)(v9 + 24) != 1 )
    return 0;
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(unsigned int **)(v9 + 32);
  if ( v11 )
  {
    if ( *v12 < *(_DWORD *)(v11 - 4) && *(_QWORD *)(v11 + 8LL * *v12) )
      return 0;
  }
  v13 = *(_QWORD *)(a2 + 40);
  if ( *(_WORD *)(v13 + 4) )
    return 0;
  v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
  if ( !v14 )
    return 0;
  if ( *v14 )
    return 0;
  if ( v14[1] != 8 )
    return 0;
  if ( *(_DWORD *)(v13 + 24) != 1 )
    return 0;
  v15 = *(unsigned int **)(v13 + 32);
  if ( v11 )
  {
    v16 = *v15;
    if ( (unsigned int)v16 < *(_DWORD *)(v11 - 4) )
    {
      if ( *(_QWORD *)(v11 + 8 * v16) )
        return 0;
    }
  }
  v17 = *(_QWORD *)(a2 + 48);
  if ( *(_WORD *)(v17 + 4) )
    return 0;
  v18 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
  if ( !v18 )
    return 0;
  if ( *v18 )
    return 0;
  if ( v18[1] != 8 )
    return 0;
  if ( *(_DWORD *)(v17 + 24) != 1 )
    return 0;
  v19 = *(unsigned int **)(v17 + 32);
  if ( v11 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 < *(_DWORD *)(v11 - 4) )
    {
      if ( *(_QWORD *)(v11 + 8 * v20) )
        return 0;
    }
  }
  if ( *((_WORD *)v12 + 2) )
    return 0;
  v21 = *(_DWORD **)(*((_QWORD *)v12 + 2) + 24LL);
  if ( !v21 )
    return 0;
  if ( *v21 )
    return 0;
  if ( v21[1] != 6 )
    return 0;
  if ( v12[6] != 2 )
    return 0;
  if ( *((_WORD *)v15 + 2) )
    return 0;
  v22 = *(_DWORD **)(*((_QWORD *)v15 + 2) + 24LL);
  if ( !v22 )
    return 0;
  if ( *v22 )
    return 0;
  if ( v22[1] != 6 )
    return 0;
  if ( v15[6] != 2 )
    return 0;
  if ( *((_WORD *)v19 + 2) )
    return 0;
  v23 = *(_DWORD **)(*((_QWORD *)v19 + 2) + 24LL);
  if ( !v23 || *v23 || v23[1] != 6 || v19[6] != 2 )
    return 0;
  v24 = *((_DWORD **)v12 + 4);
  v25 = *((_DWORD **)v12 + 5);
  v26 = *((_DWORD **)v19 + 4);
  v27 = *((_DWORD **)v19 + 5);
  if ( *v25 >= *v24 )
  {
    v24 = *((_DWORD **)v12 + 5);
    v25 = *((_DWORD **)v12 + 4);
  }
  v28 = *((_DWORD **)v15 + 4);
  v29 = *((_DWORD **)v15 + 5);
  if ( *v29 >= *v28 )
  {
    v28 = *((_DWORD **)v15 + 5);
    v29 = *((_DWORD **)v15 + 4);
  }
  v30 = *v26;
  if ( *v27 >= *v26 )
  {
    v31 = v26;
    v26 = v27;
    v27 = v31;
  }
  if ( v25 == v29 && (v24 == v27 && v28 == v26 || v24 == v26 && v28 == v27)
    || (v32 = v25 == v27, v24 == v29) && v32 && v28 == v26 )
  {
    *a3 = v25;
    *a4 = v24;
    *a5 = v28;
  }
  else
  {
    if ( v29 != v27 || v24 != v26 || v25 != v28 )
    {
      v33 = v24 == v28;
      if ( !v32 || v29 != v26 || !v33 )
      {
        LOBYTE(v26) = v25 == v26;
        LOBYTE(v30) = v29 == v27;
        LODWORD(v26) = v30 & (unsigned int)v26;
        LOBYTE(v26) = v33 & (unsigned __int8)v26;
        if ( !(_BYTE)v26 )
          return (unsigned int)v26;
      }
    }
    *a3 = v25;
    *a4 = v24;
    *a5 = v29;
  }
  LODWORD(v26) = 1;
  return (unsigned int)v26;
}

