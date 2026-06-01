char __fastcall sub_874440(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r12
  _DWORD *v6; // rdx
  char result; // al
  __int64 v8; // rax
  __int64 v9; // rbp
  int *v10; // rcx
  int v11; // edx
  __int64 v12; // rdi
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rbp
  int i; // edx
  __int64 v17; // rdx
  __int64 v18; // r10
  int *v19; // rsi
  int v20; // ecx
  __int64 v21; // r9
  int v22; // edi
  int v23; // ecx
  int v24; // r8d
  int j; // ecx
  __int64 v26; // rcx

  v5 = **(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * a2);
  v6 = *(_DWORD **)(sub_15D1F10(v5) + 24);
  result = 1;
  if ( v6 && *(_DWORD *)(a1 + 112) == *v6 && !v6[1] )
  {
    v8 = *(_QWORD *)(a1 + 488);
    v9 = 8LL * a2;
    v10 = (int *)(v8 + 4LL * a2);
    v11 = *v10;
    if ( *v10 >= 0 )
    {
      v12 = v11;
      v13 = *(_DWORD *)(v8 + 4LL * v11);
      if ( v13 < -1 )
      {
        v9 = 8LL * v11;
      }
      else
      {
        if ( v13 == -1 )
        {
          v15 = v11;
          goto LABEL_11;
        }
        do
        {
          v14 = v13;
          v13 = *(_DWORD *)(v8 + 4LL * v13);
          v15 = v14;
        }
        while ( v13 >= 0 );
        *v10 = v14;
        v10 = (int *)(v8 + 4 * v12);
        for ( i = *v10; *v10 >= 0; i = *v10 )
        {
          v12 = i;
LABEL_11:
          *v10 = v15;
          v10 = (int *)(v8 + 4 * v12);
        }
        v9 = 8 * v15;
      }
    }
    v17 = a3;
    v18 = *(_QWORD *)(a1 + 472);
    v19 = (int *)(v8 + 4LL * a3);
    v20 = *v19;
    v21 = *(_QWORD *)(v18 + v9);
    if ( *v19 >= 0 )
    {
      v17 = v20;
      v22 = *(_DWORD *)(v8 + 4LL * v20);
      if ( v22 >= -1 )
      {
        if ( v22 == -1 )
        {
          v24 = *v19;
          goto LABEL_19;
        }
        do
        {
          v23 = v22;
          v22 = *(_DWORD *)(v8 + 4LL * v22);
          v24 = v23;
        }
        while ( v22 >= 0 );
        *v19 = v23;
        v19 = (int *)(v8 + 4 * v17);
        for ( j = *v19; *v19 >= 0; j = *v19 )
        {
          v17 = j;
LABEL_19:
          *v19 = v24;
          v19 = (int *)(v8 + 4 * v17);
        }
        v17 = v24;
      }
    }
    v26 = *(_QWORD *)(v18 + 8 * v17);
    result = v26 != 0 && v21 != 0;
    if ( result )
    {
      if ( *(_QWORD *)(v26 + 64) == *(_QWORD *)(v21 + 64) )
        return 0;
      else
        return sub_860450(a1, v5);
    }
  }
  return result;
}

