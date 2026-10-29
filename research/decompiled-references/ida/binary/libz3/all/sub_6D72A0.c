void __fastcall sub_6D72A0(char *src, char *a2)
{
  char *i; // rbp
  int *v5; // rbx
  _DWORD *v6; // rax
  __int16 v7; // dx
  _DWORD *v8; // rsi
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rdi
  char *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  _DWORD *v16; // r8
  __int64 v17; // r8
  _DWORD *v18; // r8
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rdx
  unsigned int *v23; // rcx
  _DWORD *v24; // rsi
  __int64 v25; // rsi
  _DWORD *v26; // rsi
  __int64 v27; // rdi
  _DWORD *v28; // rdi
  __int64 v29; // rcx
  _DWORD *v30; // rcx

  if ( src != a2 )
  {
    for ( i = src + 8; a2 != i; *(_QWORD *)v12 = v5 )
    {
      while ( 1 )
      {
        v5 = *(int **)i;
        v6 = *(_DWORD **)src;
        v7 = *(_WORD *)(*(_QWORD *)i + 4LL);
        v8 = *(_DWORD **)i;
        if ( !v7 )
        {
          v9 = *(_DWORD **)(*((_QWORD *)v5 + 2) + 24LL);
          if ( v9 )
          {
            if ( *v9 == 5 && v9[1] == 9 && v5[6] == 2 )
            {
              v29 = *((_QWORD *)v5 + 4);
              if ( !*(_WORD *)(v29 + 4) )
              {
                v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
                if ( v30 )
                {
                  if ( *v30 == 5 && !v30[1] )
                    v8 = *((_DWORD **)v5 + 5);
                }
              }
            }
          }
        }
        v10 = *(_DWORD **)src;
        if ( !*((_WORD *)v6 + 2) )
        {
          v11 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL);
          if ( v11 )
          {
            if ( *v11 == 5 && v11[1] == 9 && v6[6] == 2 )
            {
              v27 = *((_QWORD *)v6 + 4);
              if ( !*(_WORD *)(v27 + 4) )
              {
                v28 = *(_DWORD **)(*(_QWORD *)(v27 + 16) + 24LL);
                if ( v28 )
                {
                  if ( *v28 == 5 && !v28[1] )
                    v10 = *((_DWORD **)v6 + 5);
                }
              }
            }
          }
        }
        if ( *v8 >= *v10 )
          break;
        if ( i - src <= 8 )
        {
          if ( i - src == 8 )
            *(_QWORD *)i = v6;
        }
        else
        {
          memmove(src + 8, src, i - src);
        }
        i += 8;
        *(_QWORD *)src = v5;
        if ( a2 == i )
          return;
      }
      v12 = i;
      if ( !v7 )
      {
        v13 = *(_DWORD **)(*((_QWORD *)v5 + 2) + 24LL);
        while ( 1 )
        {
          v14 = *((_QWORD *)v12 - 1);
          v15 = v5;
          if ( v13 )
          {
            if ( *v13 == 5 && v13[1] == 9 && v5[6] == 2 )
            {
              v19 = *((_QWORD *)v5 + 4);
              if ( !*(_WORD *)(v19 + 4) )
              {
                v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
                if ( v20 )
                {
                  if ( *v20 == 5 && !v20[1] )
                    v15 = *((_DWORD **)v5 + 5);
                }
              }
            }
          }
          if ( !*(_WORD *)(v14 + 4)
            && (v16 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL)) != nullptr
            && *v16 == 5
            && v16[1] == 9
            && *(_DWORD *)(v14 + 24) == 2
            && (v17 = *(_QWORD *)(v14 + 32), !*(_WORD *)(v17 + 4))
            && (v18 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL)) != nullptr
            && *v18 == 5
            && !v18[1] )
          {
            if ( *v15 >= **(_DWORD **)(v14 + 40) )
              goto LABEL_30;
          }
          else if ( *v15 >= *(_DWORD *)v14 )
          {
            goto LABEL_30;
          }
          *(_QWORD *)v12 = v14;
          v12 -= 8;
        }
      }
      v21 = *v5;
      while ( 1 )
      {
        v22 = *((_QWORD *)v12 - 1);
        v23 = (unsigned int *)v22;
        if ( !*(_WORD *)(v22 + 4) )
        {
          v24 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
          if ( v24 )
          {
            if ( *v24 == 5 && v24[1] == 9 && *(_DWORD *)(v22 + 24) == 2 )
            {
              v25 = *(_QWORD *)(v22 + 32);
              if ( !*(_WORD *)(v25 + 4) )
              {
                v26 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL);
                if ( v26 )
                {
                  if ( *v26 == 5 && !v26[1] )
                    v23 = *(unsigned int **)(v22 + 40);
                }
              }
            }
          }
        }
        if ( v21 >= *v23 )
          break;
        *(_QWORD *)v12 = v22;
        v12 -= 8;
      }
LABEL_30:
      i += 8;
    }
  }
}

