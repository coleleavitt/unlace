_DWORD *__fastcall sub_5AB240(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  signed int *v12; // rdx
  signed int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  _DWORD *result; // rax
  signed int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a3 > 3 )
  {
    if ( !under_debugger )
      interr(2131);
    goto LABEL_39;
  }
  switch_dbctx(*(int *)(a1 + 8));
  v9 = *(int *)(a1 + 12);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  v11 = *(int *)(a2 + 12);
  if ( a3 != 3 )
  {
    v12 = *(signed int **)(a2 + 40);
    v13 = v12[a3];
    if ( !v13 || v13 == 255 )
    {
LABEL_16:
      set_default_encoding_idx(dword_2C81AA8[a3], (unsigned int)v13);
      result = *(_DWORD **)(a1 + 40);
      if ( result[a3] == v13 )
        return result;
      if ( !under_debugger )
        interr(2133);
LABEL_39:
      BUG();
    }
    if ( (_DWORD)v11 != 2 && (_DWORD)v9 != (_DWORD)v11 )
    {
      v14 = 48 * v11;
      v15 = v10 + v14 + 632;
      v16 = *(_QWORD *)(v10 + v14 + 640);
      if ( v16 )
      {
        v7 = v15;
        do
        {
          while ( 1 )
          {
            v12 = *(signed int **)(v16 + 16);
            v6 = *(_QWORD *)(v16 + 24);
            if ( *(_DWORD *)(v16 + 32) >= v13 )
              break;
            v16 = *(_QWORD *)(v16 + 24);
            if ( !v6 )
              goto LABEL_12;
          }
          v7 = v16;
          v16 = *(_QWORD *)(v16 + 16);
        }
        while ( v12 );
LABEL_12:
        if ( v7 != v15 && v13 >= *(_DWORD *)(v7 + 32) )
        {
          v6 = *(_QWORD *)(v10 + 600);
          v13 = *(_DWORD *)(v6 + 12LL * *(_QWORD *)(v7 + 40) + 4 * v9);
          if ( v13 )
            goto LABEL_16;
        }
      }
LABEL_14:
      sub_5A7A80(v10, v9, v12, v6, v7, v15);
    }
LABEL_38:
    sub_5A7A60(v10, v9, v12, v6, v7, v8);
  }
  v12 = *(signed int **)(a2 + 48);
  v18 = *v12;
  if ( *v12 && v18 != 255 )
  {
    if ( (_DWORD)v11 == 2 || (_DWORD)v9 == (_DWORD)v11 )
      goto LABEL_38;
    v19 = 48 * v11;
    v15 = v10 + v19 + 632;
    v20 = *(_QWORD *)(v10 + v19 + 640);
    if ( !v20 )
      goto LABEL_14;
    v7 = v15;
    do
    {
      v12 = *(signed int **)(v20 + 16);
      v6 = *(_QWORD *)(v20 + 24);
      if ( v18 > *(_DWORD *)(v20 + 32) )
      {
        v20 = *(_QWORD *)(v20 + 24);
      }
      else
      {
        v7 = v20;
        v20 = *(_QWORD *)(v20 + 16);
      }
    }
    while ( v20 );
    if ( v15 == v7 )
      goto LABEL_14;
    if ( v18 < *(_DWORD *)(v7 + 32) )
      goto LABEL_14;
    v12 = *(signed int **)(v10 + 600);
    v18 = v12[3 * *(_QWORD *)(v7 + 40) + v9];
    if ( !v18 )
      goto LABEL_14;
  }
  set_outfile_encoding_idx(v18);
  result = *(_DWORD **)(a1 + 48);
  if ( *result != v18 )
  {
    if ( !under_debugger )
      interr(2132);
    goto LABEL_39;
  }
  return result;
}
