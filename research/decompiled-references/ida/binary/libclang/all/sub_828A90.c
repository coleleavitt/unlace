__int64 __fastcall sub_828A90(int *a1, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // rbp
  _BYTE *v5; // r14
  void *v6; // rdi
  __int64 v7; // r13
  size_t v8; // rbp
  void *v9; // rdi
  _BYTE *v10; // r14
  int v11; // eax
  __int64 v12; // rdi
  int *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rbx
  _BYTE *v16; // rdi
  size_t v17; // r12
  _BYTE *v18; // rcx
  void *v19; // rdi
  size_t v20; // r12
  _BYTE *v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE *v29; // [rsp+8h] [rbp-50h]
  _BYTE *v30; // [rsp+8h] [rbp-50h]

  v3 = operator new(0x60u);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *((_BYTE **)a1 + 4);
  v6 = (void *)(v3 + 48);
  v7 = v3;
  *(_QWORD *)(v3 + 32) = v3 + 48;
  if ( v4 > 0xF )
  {
    v28 = std::string::_M_create();
    *(_QWORD *)(v7 + 32) = v28;
    v6 = (void *)v28;
    *(_QWORD *)(v7 + 48) = v4;
LABEL_36:
    memcpy(v6, v5, v4);
    v6 = *(void **)(v7 + 32);
    goto LABEL_4;
  }
  if ( v4 == 1 )
  {
    *(_BYTE *)(v3 + 48) = *v5;
    goto LABEL_4;
  }
  if ( v4 )
    goto LABEL_36;
LABEL_4:
  *(_QWORD *)(v7 + 40) = v4;
  *((_BYTE *)v6 + v4) = 0;
  v8 = *((_QWORD *)a1 + 9);
  v9 = (void *)(v7 + 80);
  *(_QWORD *)(v7 + 64) = v7 + 80;
  v10 = *((_BYTE **)a1 + 8);
  if ( v8 > 0xF )
  {
    v27 = std::string::_M_create();
    *(_QWORD *)(v7 + 64) = v27;
    v9 = (void *)v27;
    *(_QWORD *)(v7 + 80) = v8;
LABEL_34:
    memcpy(v9, v10, v8);
    v9 = *(void **)(v7 + 64);
    goto LABEL_7;
  }
  if ( v8 == 1 )
  {
    *(_BYTE *)(v7 + 80) = *v10;
    goto LABEL_7;
  }
  if ( v8 )
    goto LABEL_34;
LABEL_7:
  *(_QWORD *)(v7 + 72) = v8;
  *((_BYTE *)v9 + v8) = 0;
  v11 = *a1;
  v12 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)v7 = v11;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 8) = a2;
  if ( v12 )
    *(_QWORD *)(v7 + 24) = sub_828A90(v12, v7);
  v13 = *((int **)a1 + 2);
  v14 = v7;
  if ( v13 )
  {
    while ( 1 )
    {
      v15 = operator new(0x60u);
      v16 = (_BYTE *)(v15 + 48);
      *(_QWORD *)(v15 + 32) = v15 + 48;
      v17 = *((_QWORD *)v13 + 5);
      v18 = *((_BYTE **)v13 + 4);
      if ( v17 > 0xF )
        break;
      if ( v17 == 1 )
      {
        *(_BYTE *)(v15 + 48) = *v18;
        goto LABEL_13;
      }
      if ( v17 )
        goto LABEL_28;
LABEL_13:
      *(_QWORD *)(v15 + 40) = v17;
      v16[v17] = 0;
      v19 = (void *)(v15 + 80);
      *(_QWORD *)(v15 + 64) = v15 + 80;
      v20 = *((_QWORD *)v13 + 9);
      v21 = *((_BYTE **)v13 + 8);
      if ( v20 > 0xF )
      {
        v30 = *((_BYTE **)v13 + 8);
        v26 = std::string::_M_create();
        v21 = v30;
        *(_QWORD *)(v15 + 64) = v26;
        v19 = (void *)v26;
        *(_QWORD *)(v15 + 80) = v20;
LABEL_30:
        memcpy(v19, v21, v20);
        v19 = *(void **)(v15 + 64);
        goto LABEL_16;
      }
      if ( v20 == 1 )
      {
        *(_BYTE *)(v15 + 80) = *v21;
        goto LABEL_16;
      }
      if ( v20 )
        goto LABEL_30;
LABEL_16:
      *(_QWORD *)(v15 + 72) = v20;
      *((_BYTE *)v19 + v20) = 0;
      v22 = *v13;
      *(_QWORD *)(v15 + 16) = 0;
      *(_DWORD *)v15 = v22;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v14 + 16) = v15;
      *(_QWORD *)(v15 + 8) = v14;
      v23 = *((_QWORD *)v13 + 3);
      if ( v23 )
      {
        *(_QWORD *)(v15 + 24) = sub_828A90(v23, v15);
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
    }
    v29 = *((_BYTE **)v13 + 4);
    v25 = std::string::_M_create();
    v18 = v29;
    *(_QWORD *)(v15 + 32) = v25;
    v16 = (_BYTE *)v25;
    *(_QWORD *)(v15 + 48) = v17;
LABEL_28:
    memcpy(v16, v18, v17);
    v16 = *(_BYTE **)(v15 + 32);
    goto LABEL_13;
  }
  return v7;
}

