__int64 __fastcall sub_9FD200(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v3; // r11
  int v4; // eax
  __int64 v5; // r10
  _DWORD *v6; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // r8d
  unsigned int v12; // ecx
  unsigned int i; // edi
  int v14; // r12d
  __int64 v15; // rax
  unsigned int *v16; // r9
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  int v20; // r8d
  unsigned int v21; // ecx
  int v22; // r12d
  __int64 v23; // rax

  if ( *(_BYTE *)(a1 + 960) )
  {
    v2 = *(_QWORD *)(a1 + 928);
    v3 = *(_QWORD *)(a1 + 936);
    v8 = *(_DWORD *)(v2 - 4);
    v5 = *(unsigned int *)(v2 + 4);
    v6 = (_DWORD *)(v3 + 4 * v5);
    if ( v8 == 2 )
      goto LABEL_5;
    v9 = *(unsigned int *)(v2 + 4LL * (unsigned int)(v8 - 1));
    *(_DWORD *)(v2 + 4) = v9;
    *(_DWORD *)(v3 + 4 * v9) = 1;
    *v6 = 0;
    v10 = *(unsigned int *)(v2 + 4);
    v11 = *(_DWORD *)(v2 - 4) - 1;
    *(_DWORD *)(v2 - 4) = v11;
    if ( v11 > 2 )
    {
      v12 = 2;
      for ( i = 1; ; i = v18 )
      {
        v18 = v12 + 1;
        v16 = (unsigned int *)(v2 + 4LL * v12);
        v15 = *v16;
        if ( v11 <= (int)(v12 + 1) || (v14 = *(_DWORD *)(v2 + 4LL * v18), v14 >= (int)v15) )
        {
          v18 = v12;
        }
        else
        {
          v15 = (unsigned int)v14;
          v16 = (unsigned int *)(v2 + 4LL * v18);
        }
        v17 = (_DWORD *)(v2 + 4LL * i);
        if ( (int)v10 <= (int)v15 )
          break;
        *v17 = v15;
        v12 = 2 * v18;
        *(_DWORD *)(v3 + 4 * v15) = i;
        if ( v11 <= (int)(2 * v18) )
        {
LABEL_27:
          v17 = v16;
          i = v18;
          goto LABEL_28;
        }
      }
      goto LABEL_28;
    }
  }
  else
  {
    v1 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 104LL);
    if ( v1 == 1 )
      return sub_9FBBC0(a1, 0);
    if ( v1 == 2 )
      return sub_9FBBC0(a1, 1);
    v2 = *(_QWORD *)(a1 + 928);
    v3 = *(_QWORD *)(a1 + 936);
    v4 = *(_DWORD *)(v2 - 4);
    v5 = *(unsigned int *)(v2 + 4);
    v6 = (_DWORD *)(v3 + 4 * v5);
    if ( v4 == 2 )
    {
LABEL_5:
      *v6 = 0;
      --*(_DWORD *)(v2 - 4);
      return (unsigned int)v5;
    }
    v19 = *(unsigned int *)(v2 + 4LL * (unsigned int)(v4 - 1));
    *(_DWORD *)(v2 + 4) = v19;
    *(_DWORD *)(v3 + 4 * v19) = 1;
    *v6 = 0;
    v10 = *(unsigned int *)(v2 + 4);
    v20 = *(_DWORD *)(v2 - 4) - 1;
    *(_DWORD *)(v2 - 4) = v20;
    if ( v20 > 2 )
    {
      v21 = 2;
      for ( i = 1; ; i = v18 )
      {
        v18 = v21 + 1;
        v16 = (unsigned int *)(v2 + 4LL * v21);
        v23 = *v16;
        if ( v20 <= (int)(v21 + 1) || (v22 = *(_DWORD *)(v2 + 4LL * v18), v22 >= (int)v23) )
        {
          v18 = v21;
        }
        else
        {
          v23 = (unsigned int)v22;
          v16 = (unsigned int *)(v2 + 4LL * v18);
        }
        v17 = (_DWORD *)(v2 + 4LL * i);
        if ( (int)v10 <= (int)v23 )
          break;
        *v17 = v23;
        v21 = 2 * v18;
        *(_DWORD *)(v3 + 4 * v23) = i;
        if ( v20 <= (int)(2 * v18) )
          goto LABEL_27;
      }
      goto LABEL_28;
    }
  }
  v17 = (_DWORD *)(v2 + 4);
  i = 1;
LABEL_28:
  *v17 = v10;
  *(_DWORD *)(v3 + 4 * v10) = i;
  return (unsigned int)v5;
}

