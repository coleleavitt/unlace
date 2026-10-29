__int64 __fastcall sub_12DDAA0(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rdi
  void *v10; // rdi
  int v11; // eax
  __int64 v12; // rsi
  int *v13; // r15
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax

  v7 = a4[1];
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    a4[1] = v8;
    if ( v8 )
    {
      if ( v7 == *(_QWORD *)(v8 + 24) )
      {
        *(_QWORD *)(v8 + 24) = 0;
        v31 = *(_QWORD *)(v8 + 16);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 24);
          a4[1] = v31;
          if ( v32 )
          {
            while ( *(_QWORD *)(v32 + 24) )
              v32 = *(_QWORD *)(v32 + 24);
            a4[1] = v32;
          }
          else
          {
            v32 = v31;
          }
          v33 = *(_QWORD *)(v32 + 16);
          if ( v33 )
            a4[1] = v33;
        }
      }
      else
      {
        *(_QWORD *)(v8 + 16) = 0;
      }
    }
    else
    {
      *a4 = 0;
    }
    v9 = *(void **)(v7 + 64);
    if ( v9 != (void *)(v7 + 80) )
      operator delete(v9);
    v10 = *(void **)(v7 + 32);
    if ( v10 != (void *)(v7 + 48) )
      operator delete(v10);
    *(_QWORD *)(v7 + 32) = v7 + 48;
    sub_12DB130((_QWORD *)(v7 + 32), *((_BYTE **)a2 + 4), *((_QWORD *)a2 + 4) + *((_QWORD *)a2 + 5));
    *(_QWORD *)(v7 + 64) = v7 + 80;
    sub_12DB130((_QWORD *)(v7 + 64), *((_BYTE **)a2 + 8), *((_QWORD *)a2 + 8) + *((_QWORD *)a2 + 9));
  }
  else
  {
    v26 = operator new(0x60u);
    v27 = *((_BYTE **)a2 + 4);
    v28 = *((_QWORD *)a2 + 5);
    v7 = v26;
    *(_QWORD *)(v26 + 32) = v26 + 48;
    sub_12DB130((_QWORD *)(v26 + 32), v27, (__int64)&v27[v28]);
    v29 = *((_BYTE **)a2 + 8);
    v30 = *((_QWORD *)a2 + 9);
    *(_QWORD *)(v7 + 64) = v7 + 80;
    sub_12DB130((_QWORD *)(v7 + 64), v29, (__int64)&v29[v30]);
  }
  v11 = *a2;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)v7 = v11;
  *(_QWORD *)(v7 + 8) = a3;
  v12 = *((_QWORD *)a2 + 3);
  if ( v12 )
    *(_QWORD *)(v7 + 24) = sub_12DDAA0(a1, v12, v7, a4);
  v13 = *((int **)a2 + 2);
  v14 = v7;
  if ( v13 )
  {
    v15 = a4[1];
    if ( !v15 )
      goto LABEL_25;
LABEL_14:
    v16 = *(_QWORD *)(v15 + 8);
    a4[1] = v16;
    if ( v16 )
    {
      if ( v15 == *(_QWORD *)(v16 + 24) )
      {
        *(_QWORD *)(v16 + 24) = 0;
        v23 = *(_QWORD *)(v16 + 16);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 24);
          a4[1] = v23;
          if ( v24 )
          {
            while ( *(_QWORD *)(v24 + 24) )
              v24 = *(_QWORD *)(v24 + 24);
            a4[1] = v24;
          }
          else
          {
            v24 = v23;
          }
          v25 = *(_QWORD *)(v24 + 16);
          if ( v25 )
            a4[1] = v25;
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
    v17 = *(void **)(v15 + 64);
    if ( v17 != (void *)(v15 + 80) )
      operator delete(v17);
    v18 = *(void **)(v15 + 32);
    v19 = v15 + 48;
    if ( v18 != (void *)(v15 + 48) )
    {
      operator delete(v18);
      v19 = v15 + 48;
    }
    *(_QWORD *)(v15 + 32) = v19;
    sub_12DB130((_QWORD *)(v15 + 32), *((_BYTE **)v13 + 4), *((_QWORD *)v13 + 4) + *((_QWORD *)v13 + 5));
    *(_QWORD *)(v15 + 64) = v15 + 80;
    sub_12DB130((_QWORD *)(v15 + 64), *((_BYTE **)v13 + 8), *((_QWORD *)v13 + 8) + *((_QWORD *)v13 + 9));
    while ( 1 )
    {
      v20 = *v13;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_DWORD *)v15 = v20;
      *(_QWORD *)(v14 + 16) = v15;
      *(_QWORD *)(v15 + 8) = v14;
      v21 = *((_QWORD *)v13 + 3);
      if ( v21 )
      {
        *(_QWORD *)(v15 + 24) = sub_12DDAA0(a1, v21, v15, a4);
        v13 = *((int **)v13 + 2);
        if ( !v13 )
          return v7;
      }
      else
      {
        v13 = *((int **)v13 + 2);
        if ( !v13 )
          return v7;
      }
      v14 = v15;
      v15 = a4[1];
      if ( v15 )
        goto LABEL_14;
LABEL_25:
      v15 = operator new(0x60u);
      *(_QWORD *)(v15 + 32) = v15 + 48;
      sub_12DB130((_QWORD *)(v15 + 32), *((_BYTE **)v13 + 4), *((_QWORD *)v13 + 4) + *((_QWORD *)v13 + 5));
      *(_QWORD *)(v15 + 64) = v15 + 80;
      sub_12DB130((_QWORD *)(v15 + 64), *((_BYTE **)v13 + 8), *((_QWORD *)v13 + 8) + *((_QWORD *)v13 + 9));
    }
  }
  return v7;
}
