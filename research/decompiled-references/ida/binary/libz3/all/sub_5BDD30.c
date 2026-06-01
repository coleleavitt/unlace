__int64 __fastcall sub_5BDD30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdi
  int v19; // r8d
  __int64 v20; // rax
  __int64 *v21; // r9
  __int64 *j; // rax
  __int64 v23; // rdx
  __int64 *i; // rax
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rdx

  v4 = a2;
  v5 = *(__int64 **)(a1 + 88);
  v6 = *(unsigned int *)(a1 + 96);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
  v8 = v6 - 1;
  v9 = 16 * v6;
  v10 = *(_DWORD *)(v7 + 12);
  v11 = &v5[(unsigned __int64)v9 / 8];
  v12 = 16LL * (v8 & v10);
  v13 = &v5[(unsigned __int64)v12 / 8];
  if ( v12 == v9 )
  {
LABEL_18:
    if ( v5 != v13 )
    {
      for ( i = v5; v13 != i; i += 2 )
      {
        v26 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          LOBYTE(a4) = v7 == v26 && *(_DWORD *)(v26 + 12) == v10;
          if ( (_BYTE)a4 )
            return a4;
        }
        else if ( !v26 )
        {
          break;
        }
      }
    }
LABEL_7:
    v16 = *(unsigned int *)(v4 + 68);
    if ( !(_DWORD)v16 )
      return 0;
    v17 = v4 + 8 * v16;
    while ( 1 )
    {
LABEL_9:
      v18 = *(_QWORD *)((*(_QWORD *)(v4 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v19 = *(_DWORD *)(v18 + 12);
      v20 = 16LL * (v19 & v8);
      v21 = &v5[(unsigned __int64)v20 / 8];
      if ( v9 != v20 )
      {
        for ( j = &v5[(unsigned __int64)v20 / 8]; v11 != j; j += 2 )
        {
          v23 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            LOBYTE(a4) = v18 == v23 && *(_DWORD *)(v23 + 12) == v19;
            if ( (_BYTE)a4 )
              return a4;
          }
          else if ( !v23 )
          {
            goto LABEL_15;
          }
        }
      }
      if ( v5 != v21 )
        break;
LABEL_15:
      v4 += 8;
      if ( v4 == v17 )
        return 0;
    }
    v27 = v5;
    while ( 1 )
    {
      v28 = *v27;
      if ( (unsigned __int64)*v27 > 1 )
      {
        LOBYTE(a4) = v18 == v28 && *(_DWORD *)(v28 + 12) == v19;
        if ( (_BYTE)a4 )
          return a4;
      }
      else if ( !v28 )
      {
        v4 += 8;
        if ( v4 == v17 )
          return 0;
        goto LABEL_9;
      }
      v27 += 2;
      if ( v21 == v27 )
        goto LABEL_15;
    }
  }
  v14 = &v5[(unsigned __int64)v12 / 8];
  while ( 1 )
  {
    v15 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
      break;
    if ( !v15 )
      goto LABEL_7;
LABEL_4:
    v14 += 2;
    if ( v11 == v14 )
      goto LABEL_18;
  }
  LOBYTE(a4) = v7 == v15 && *(_DWORD *)(v15 + 12) == v10;
  if ( !(_BYTE)a4 )
    goto LABEL_4;
  return a4;
}

