__int64 __fastcall sub_898830(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rbx
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v8; // r10d
  unsigned int v9; // esi
  unsigned int i; // r8d
  unsigned int v11; // r13d
  __int64 v12; // rdx
  unsigned int *v13; // r11
  unsigned int v14; // edi
  unsigned int *v15; // rsi
  unsigned int v16; // ecx
  __int64 v18; // rdx
  int v19; // r10d
  unsigned int v20; // esi
  unsigned int v21; // r13d
  __int64 v22; // rdx
  unsigned int v23; // edi

  LODWORD(v1) = -1;
  v2 = *(_QWORD *)(a1 + 1576);
  v3 = *(_DWORD *)(v2 - 4);
  if ( *(_BYTE *)(a1 + 1608) )
  {
    if ( v3 != 1 )
    {
      v4 = *(_QWORD *)(a1 + 1584);
      v1 = *(unsigned int *)(v2 + 4);
      v5 = (_DWORD *)(v4 + 4 * v1);
      if ( v3 != 2 )
      {
        v18 = *(unsigned int *)(v2 + 4LL * (unsigned int)(v3 - 1));
        *(_DWORD *)(v2 + 4) = v18;
        *(_DWORD *)(v4 + 4 * v18) = 1;
        *v5 = 0;
        v7 = *(unsigned int *)(v2 + 4);
        v19 = *(_DWORD *)(v2 - 4) - 1;
        *(_DWORD *)(v2 - 4) = v19;
        if ( v19 > 2 )
        {
          v20 = 2;
          for ( i = 1; ; i = v16 )
          {
            v16 = v20 + 1;
            v13 = (unsigned int *)(v2 + 4LL * v20);
            v23 = *v13;
            v22 = *v13;
            if ( v19 <= (int)(v20 + 1) || (v21 = *(_DWORD *)(v2 + 4LL * v16), v21 >= v23) )
            {
              v16 = v20;
            }
            else
            {
              v22 = v21;
              v13 = (unsigned int *)(v2 + 4LL * v16);
              v23 = *v13;
            }
            v15 = (unsigned int *)(v2 + 4LL * i);
            if ( (unsigned int)v22 >= (unsigned int)v7 )
              break;
            *v15 = v23;
            v20 = 2 * v16;
            *(_DWORD *)(v4 + 4 * v22) = i;
            if ( v19 <= (int)(2 * v16) )
            {
LABEL_26:
              v15 = v13;
              i = v16;
              goto LABEL_27;
            }
          }
          goto LABEL_27;
        }
        goto LABEL_28;
      }
      goto LABEL_15;
    }
    return (unsigned int)v1;
  }
  if ( v3 == 1 )
    return (unsigned int)v1;
  v4 = *(_QWORD *)(a1 + 1584);
  v1 = *(unsigned int *)(v2 + 4);
  v5 = (_DWORD *)(v4 + 4 * v1);
  if ( v3 == 2 )
  {
LABEL_15:
    *v5 = 0;
    --*(_DWORD *)(v2 - 4);
    return (unsigned int)v1;
  }
  v6 = *(unsigned int *)(v2 + 4LL * (unsigned int)(v3 - 1));
  *(_DWORD *)(v2 + 4) = v6;
  *(_DWORD *)(v4 + 4 * v6) = 1;
  *v5 = 0;
  v7 = *(unsigned int *)(v2 + 4);
  v8 = *(_DWORD *)(v2 - 4) - 1;
  *(_DWORD *)(v2 - 4) = v8;
  if ( v8 > 2 )
  {
    v9 = 2;
    for ( i = 1; ; i = v16 )
    {
      v16 = v9 + 1;
      v13 = (unsigned int *)(v2 + 4LL * v9);
      v14 = *v13;
      v12 = *v13;
      if ( v8 <= (int)(v9 + 1) || (v11 = *(_DWORD *)(v2 + 4LL * v16), v11 >= v14) )
      {
        v16 = v9;
      }
      else
      {
        v12 = v11;
        v13 = (unsigned int *)(v2 + 4LL * v16);
        v14 = *v13;
      }
      v15 = (unsigned int *)(v2 + 4LL * i);
      if ( (unsigned int)v12 >= (unsigned int)v7 )
        break;
      *v15 = v14;
      v9 = 2 * v16;
      *(_DWORD *)(v4 + 4 * v12) = i;
      if ( v8 <= (int)(2 * v16) )
        goto LABEL_26;
    }
    goto LABEL_27;
  }
LABEL_28:
  v15 = (unsigned int *)(v2 + 4);
  i = 1;
LABEL_27:
  *v15 = v7;
  *(_DWORD *)(v4 + 4 * v7) = i;
  return (unsigned int)v1;
}

