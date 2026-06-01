__int64 __fastcall sub_995500(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r10
  int v3; // eax
  __int64 v4; // rbx
  _DWORD *v5; // rdx
  __int64 v7; // rax
  __int64 v8; // r11
  int v9; // r8d
  unsigned int v10; // ecx
  unsigned int i; // edi
  int v12; // r12d
  __int64 v13; // rax
  _DWORD *v14; // r9
  _DWORD *v15; // rcx
  unsigned int v16; // edx

  v1 = *(_QWORD *)(a1 + 864);
  v2 = *(_QWORD *)(a1 + 872);
  v3 = *(_DWORD *)(v1 - 4);
  v4 = *(unsigned int *)(v1 + 4);
  v5 = (_DWORD *)(v2 + 4 * v4);
  if ( v3 == 2 )
  {
    *v5 = 0;
    --*(_DWORD *)(v1 - 4);
    return (unsigned int)v4;
  }
  else
  {
    v7 = *(unsigned int *)(v1 + 4LL * (unsigned int)(v3 - 1));
    *(_DWORD *)(v1 + 4) = v7;
    *(_DWORD *)(v2 + 4 * v7) = 1;
    *v5 = 0;
    v8 = *(unsigned int *)(v1 + 4);
    v9 = *(_DWORD *)(v1 - 4) - 1;
    *(_DWORD *)(v1 - 4) = v9;
    if ( v9 <= 2 )
    {
      v15 = (_DWORD *)(v1 + 4);
      i = 1;
LABEL_11:
      *v15 = v8;
      *(_DWORD *)(v2 + 4 * v8) = i;
    }
    else
    {
      v10 = 2;
      for ( i = 1; ; i = v16 )
      {
        v16 = v10 + 1;
        v14 = (_DWORD *)(v1 + 4LL * v10);
        v13 = (unsigned int)*v14;
        if ( v9 <= (int)(v10 + 1) || (v12 = *(_DWORD *)(v1 + 4LL * v16), v12 >= (int)v13) )
        {
          v16 = v10;
          v15 = (_DWORD *)(v1 + 4LL * i);
          if ( (int)v8 <= (int)v13 )
            goto LABEL_11;
        }
        else
        {
          v13 = (unsigned int)v12;
          v14 = (_DWORD *)(v1 + 4LL * v16);
          v15 = (_DWORD *)(v1 + 4LL * i);
          if ( (int)v8 <= v12 )
            goto LABEL_11;
        }
        *v15 = v13;
        v10 = 2 * v16;
        *(_DWORD *)(v2 + 4 * v13) = i;
        if ( v9 <= (int)(2 * v16) )
          break;
      }
      *v14 = v8;
      *(_DWORD *)(v2 + 4 * v8) = v16;
    }
    return (unsigned int)v4;
  }
}

