__int64 __fastcall sub_12DE910(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // r12
  __int64 v9; // rax
  void *v10; // rdi
  int v11; // eax
  __int64 v12; // rsi
  int *v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax

  v8 = a4[1];
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    a4[1] = v9;
    if ( v9 )
    {
      if ( v8 == *(_QWORD *)(v9 + 24) )
      {
        *(_QWORD *)(v9 + 24) = 0;
        v28 = *(_QWORD *)(v9 + 16);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 24);
          a4[1] = v28;
          if ( v29 )
          {
            while ( *(_QWORD *)(v29 + 24) )
              v29 = *(_QWORD *)(v29 + 24);
            a4[1] = v29;
          }
          else
          {
            v29 = v28;
          }
          v30 = *(_QWORD *)(v29 + 16);
          if ( v30 )
            a4[1] = v30;
        }
      }
      else
      {
        *(_QWORD *)(v9 + 16) = 0;
      }
    }
    else
    {
      *a4 = 0;
    }
    v10 = *(void **)(v8 + 32);
    if ( v10 != (void *)(v8 + 48) )
      operator delete(v10);
    *(_QWORD *)(v8 + 32) = v8 + 48;
    sub_12DB130((_QWORD *)(v8 + 32), *((_BYTE **)a2 + 4), *((_QWORD *)a2 + 4) + *((_QWORD *)a2 + 5));
  }
  else
  {
    v25 = operator new(0x40u);
    v26 = *((_BYTE **)a2 + 4);
    v27 = *((_QWORD *)a2 + 5);
    v8 = v25;
    *(_QWORD *)(v25 + 32) = v25 + 48;
    sub_12DB130((_QWORD *)(v25 + 32), v26, (__int64)&v26[v27]);
  }
  v11 = *a2;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)(v8 + 16) = 0;
  *(_DWORD *)v8 = v11;
  *(_QWORD *)(v8 + 24) = 0;
  v12 = *((_QWORD *)a2 + 3);
  if ( v12 )
    *(_QWORD *)(v8 + 24) = sub_12DE910(a1, v12, v8, a4);
  v13 = *((int **)a2 + 2);
  v14 = v8;
  if ( v13 )
  {
    v15 = a4[1];
    if ( !v15 )
      goto LABEL_21;
LABEL_12:
    v16 = *(_QWORD *)(v15 + 8);
    a4[1] = v16;
    if ( v16 )
    {
      if ( v15 == *(_QWORD *)(v16 + 24) )
      {
        *(_QWORD *)(v16 + 24) = 0;
        v22 = *(_QWORD *)(v16 + 16);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 24);
          a4[1] = v22;
          if ( v23 )
          {
            while ( *(_QWORD *)(v23 + 24) )
              v23 = *(_QWORD *)(v23 + 24);
            a4[1] = v23;
          }
          else
          {
            v23 = v22;
          }
          v24 = *(_QWORD *)(v23 + 16);
          if ( v24 )
            a4[1] = v24;
        }
      }
      else
      {
        *(_QWORD *)(v16 + 16) = 0;
      }
    }
    else
    {
      *a4 = 0;
    }
    v17 = *(void **)(v15 + 32);
    v18 = v15 + 48;
    if ( v17 != (void *)(v15 + 48) )
    {
      operator delete(v17);
      v18 = v15 + 48;
    }
    *(_QWORD *)(v15 + 32) = v18;
    sub_12DB130((_QWORD *)(v15 + 32), *((_BYTE **)v13 + 4), *((_QWORD *)v13 + 4) + *((_QWORD *)v13 + 5));
    while ( 1 )
    {
      v19 = *v13;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_DWORD *)v15 = v19;
      *(_QWORD *)(v14 + 16) = v15;
      *(_QWORD *)(v15 + 8) = v14;
      v20 = *((_QWORD *)v13 + 3);
      if ( v20 )
      {
        *(_QWORD *)(v15 + 24) = sub_12DE910(a1, v20, v15, a4);
        v13 = *((int **)v13 + 2);
        if ( !v13 )
          return v8;
      }
      else
      {
        v13 = *((int **)v13 + 2);
        if ( !v13 )
          return v8;
      }
      v14 = v15;
      v15 = a4[1];
      if ( v15 )
        goto LABEL_12;
LABEL_21:
      v15 = operator new(0x40u);
      *(_QWORD *)(v15 + 32) = v15 + 48;
      sub_12DB130((_QWORD *)(v15 + 32), *((_BYTE **)v13 + 4), *((_QWORD *)v13 + 4) + *((_QWORD *)v13 + 5));
    }
  }
  return v8;
}
