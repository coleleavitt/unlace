__int64 __fastcall sub_827140(unsigned int *a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax
  __int64 v6; // rax
  unsigned int v7; // edx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(__int64, unsigned int); // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int i; // edx

  v4 = a1[4];
  if ( (_DWORD)v4 == -2 )
    goto LABEL_8;
  v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
  if ( v5 != sub_7C5630 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD *))v5)(a2);
LABEL_7:
    if ( v9 != 1 )
      return 0;
    goto LABEL_8;
  }
  v6 = a2[10];
  if ( !v6 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4 * v4);
    goto LABEL_7;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 880) + 4LL * ((unsigned int)v4 >> 1));
  if ( v7 < *(_DWORD *)(v6 + 888) || (((unsigned __int8)v7 ^ (unsigned __int8)v4) & 1) != 0 )
    return 0;
LABEL_8:
  v10 = a1[15];
  if ( v10 >= a1[8] )
    return 1;
  while ( 1 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
    v12 = a1[v10 + 16];
    if ( v11 == sub_7C5630 )
      break;
    v16 = v11((__int64)a2, v12);
LABEL_16:
    if ( v16 != -1 )
      return 0;
    v15 = a1[8];
    if ( ++v10 >= v15 )
      return 1;
    if ( v11 == sub_7C5630 )
      goto LABEL_19;
  }
  v13 = a2[10];
  if ( !v13 )
  {
    v16 = *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4 * v12);
    goto LABEL_16;
  }
  v14 = *(_DWORD *)(*(_QWORD *)(v13 + 880) + 4LL * ((unsigned int)v12 >> 1));
  if ( v14 < *(_DWORD *)(v13 + 888) || (((unsigned __int8)v14 ^ (unsigned __int8)v12) & 1) == 0 )
    return 0;
  v15 = a1[8];
  if ( ++v10 >= v15 )
    return 1;
LABEL_19:
  v17 = a2[10];
  v18 = a1[v10 + 16];
  if ( v17 )
  {
    v19 = *(_QWORD *)(v17 + 880);
    for ( i = *(_DWORD *)(v19 + 4LL * ((unsigned int)v18 >> 1));
          i >= *(_DWORD *)(v17 + 888);
          i = *(_DWORD *)(v19 + 4LL * ((unsigned int)v18 >> 1)) )
    {
      if ( (((unsigned __int8)v18 ^ (unsigned __int8)i) & 1) == 0 )
        break;
      if ( ++v10 >= v15 )
        return 1;
      LODWORD(v18) = a1[v10 + 16];
    }
  }
  else
  {
    while ( *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4 * v18) == -1 )
    {
      if ( ++v10 >= v15 )
        return 1;
      v18 = a1[v10 + 16];
    }
  }
  return 0;
}

