bool __fastcall sub_7B4D10(_QWORD *a1, unsigned int **a2, unsigned int **a3)
{
  unsigned int *v3; // r15
  unsigned int *v4; // r14
  unsigned int v6; // r12d
  __int64 (__fastcall *v7)(_QWORD); // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int *v10; // rdi
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  __int64 v13; // r8
  unsigned int *v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int *v17; // rax
  __int64 v18; // rax
  unsigned int *v19; // r9
  unsigned __int64 v20; // r8
  unsigned int *v21; // rsi
  __int64 v22; // rax
  int v24; // eax
  unsigned int *v25; // rcx
  unsigned int *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  v3 = *a2;
  if ( !*a2 || (v4 = &v3[*(v3 - 1)], v4 == v3) )
  {
    v10 = *a3;
    if ( *a3 )
      goto LABEL_22;
    goto LABEL_33;
  }
  do
  {
    v6 = *v3;
    v7 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
    if ( v7 != sub_7C55E0 )
    {
      v24 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v7)(a1, v6);
      goto LABEL_29;
    }
    v8 = a1[20];
    if ( !v8 )
    {
      v24 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v6);
LABEL_29:
      if ( v24 != -1 )
        return 0;
      goto LABEL_7;
    }
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 880) + 4LL * (v6 >> 1));
    if ( v9 < *(_DWORD *)(v8 + 888) || (((unsigned __int8)v6 ^ (unsigned __int8)v9) & 1) == 0 )
      return 0;
LABEL_7:
    v10 = *a3;
    if ( !*a3 )
      return 0;
    v11 = &v10[2 * *(v10 - 1)];
    if ( v10 == v11 )
      return 0;
    v12 = *a3;
    while ( v6 != v12[1] )
    {
      v12 += 2;
      if ( v11 == v12 )
        return 0;
    }
    if ( v4 == ++v3 )
      goto LABEL_22;
  }
  while ( v7 != sub_7C55E0 );
  v13 = a1[20];
  v14 = v3;
  do
  {
    v15 = *v14;
    if ( v13 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(v13 + 880) + 4LL * (v15 >> 1));
      if ( v16 < *(_DWORD *)(v13 + 888) || (((unsigned __int8)v15 ^ (unsigned __int8)v16) & 1) == 0 )
        return 0;
    }
    else if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v15) != -1 )
    {
      return 0;
    }
    v17 = *a3;
    while ( v15 != v17[1] )
    {
      v17 += 2;
      if ( v11 == v17 )
        return 0;
    }
    ++v14;
  }
  while ( v4 != v14 );
LABEL_22:
  v18 = *(v10 - 1);
  if ( (_DWORD)v18 )
  {
    v19 = &v10[2 * v18];
    v20 = 0;
    v21 = *a2;
    if ( *a2 )
    {
      v25 = &v21[*(v21 - 1)];
LABEL_36:
      while ( 2 )
      {
        while ( v21 == v25 )
        {
          v28 = *v10;
          v10 += 2;
          v20 += v28;
          if ( v10 == v19 )
            return v20 < (unsigned __int64)a3[1];
        }
        v26 = *a2;
        do
        {
          if ( v10[1] == *v26 )
          {
            v10 += 2;
            if ( v10 != v19 )
              goto LABEL_36;
            return v20 < (unsigned __int64)a3[1];
          }
          ++v26;
        }
        while ( v25 != v26 );
        v27 = *v10;
        v10 += 2;
        v20 += v27;
        if ( v19 != v10 )
          continue;
        break;
      }
    }
    else
    {
      do
      {
        v22 = *v10;
        v10 += 2;
        v20 += v22;
      }
      while ( v10 != v19 );
    }
    return v20 < (unsigned __int64)a3[1];
  }
LABEL_33:
  v20 = 0;
  return v20 < (unsigned __int64)a3[1];
}

