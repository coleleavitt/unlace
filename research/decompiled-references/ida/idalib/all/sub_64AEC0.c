void *__fastcall sub_64AEC0(__int64 a1, char a2)
{
  unsigned int v4; // eax
  void *v5; // rbx
  char *v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  const char *v11; // r13
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rax
  __int64 v14; // rax
  void *v16; // rdi
  __int64 v17; // rdi
  void *v18; // rax
  int v19; // [rsp+4h] [rbp-44h]
  unsigned int v20; // [rsp+8h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(void **)(a1 + 40);
  v20 = v4;
  if ( v4 && !v5 )
  {
    v17 = (v4 + 63) & 0xFFFFFFC0;
    if ( (unsigned int)v17 < v4 )
    {
      v5 = nullptr;
LABEL_30:
      v16 = v5;
      v5 = nullptr;
      qfree(v16);
      *(_QWORD *)(a1 + 40) = 0;
      return v5;
    }
    v18 = (void *)qcalloc(v17, 4);
    v5 = v18;
    if ( !v18 )
      sub_3BC000((int)"type ordinals");
    *(_QWORD *)(a1 + 40) = v18;
    memset(v18, 255, 4LL * v20);
  }
  v6 = *(char **)(a1 + 32);
  if ( *(_DWORD *)(a1 + 12) )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( a2 )
        goto LABEL_6;
      while ( *(_DWORD *)v6 == 2147483646 )
      {
LABEL_21:
        if ( ++v7 >= *(_DWORD *)(a1 + 12) )
          return v5;
      }
      v11 = v6 + 4;
      v19 = (_DWORD)v6 - *(_DWORD *)(a1 + 32);
LABEL_24:
      v14 = *(unsigned int *)&v11[strlen(v11) + 1];
      if ( (_DWORD)v14 )
        break;
      if ( ++v7 >= *(_DWORD *)(a1 + 12) )
        return v5;
    }
    if ( (unsigned int)v14 >= v20 )
    {
      if ( !a2 )
      {
        if ( !under_debugger )
          interr(98);
        BUG();
      }
      goto LABEL_30;
    }
    *((_DWORD *)v5 + v14) = v19;
    if ( !a2 )
    {
      v6 = (char *)sub_647640(v6);
      goto LABEL_21;
    }
    ++v7;
    v6 = sub_649150(*(_DWORD *)(a1 + 20), *(_QWORD *)(a1 + 32), v6);
    if ( v7 < *(_DWORD *)(a1 + 12) )
    {
LABEL_6:
      v8 = *(unsigned int *)(a1 + 20);
      if ( v6 )
      {
        v9 = *(_QWORD *)(a1 + 32);
        v10 = v9 + v8;
        while ( v10 >= (unsigned __int64)(v6 + 16) && (unsigned __int64)v6 >= v9 )
        {
          if ( *(_DWORD *)v6 != 2147483646 )
          {
            v11 = v6 + 4;
            if ( (unsigned __int64)(v6 + 4) >= v9 )
            {
              v12 = v9 + v8 - 1;
              if ( (unsigned __int64)v11 < v12 )
              {
                v13 = v6 + 4;
                while ( *v13 )
                {
                  if ( ++v13 == (_BYTE *)v12 )
                    goto LABEL_30;
                }
                if ( (unsigned __int64)v13 < v12
                  && (unsigned __int64)(v13 + 1) >= v9
                  && v10 >= (unsigned __int64)(v13 + 5) )
                {
                  v19 = (_DWORD)v6 - v9;
                  goto LABEL_24;
                }
              }
            }
            goto LABEL_30;
          }
          if ( ++v7 >= *(_DWORD *)(a1 + 12) )
            return v5;
        }
      }
      goto LABEL_30;
    }
  }
  return v5;
}
