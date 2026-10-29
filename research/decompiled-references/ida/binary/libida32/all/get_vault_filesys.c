__int64 __fastcall get_vault_filesys(__int64 a1, const char *a2, char a3)
{
  int *v4; // r15
  __int64 v5; // r13
  int *v6; // rbx
  int *v7; // r12
  const char *v8; // rdi
  int v9; // eax
  int *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rdi
  __int64 v14; // rbp
  __int64 v16; // rax
  size_t v17; // r13
  int *v18; // r12
  int *v19; // rax
  __int64 v20; // rdx
  const char *v21; // rsi
  const char *v22; // rdi
  _QWORD *v23; // rax
  void *v24; // rdi
  void *v25; // rax
  const char *v26; // rsi
  __int64 v27; // rax
  const char *v29; // [rsp+10h] [rbp-48h]

  v4 = (int *)qword_2CAD3B0;
  v29 = a2;
  if ( !qword_2CAD3B0 )
  {
    v6 = &dword_2CAD3A8;
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = &dword_2CAD3A8;
  while ( 1 )
  {
    v11 = *((_QWORD *)v4 + 5);
    if ( !v5 )
      break;
    a2 = *(const char **)a1;
    v7 = v4;
    v8 = haystack;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, a2);
    v10 = *((int **)v4 + 2);
    v4 = *((int **)v4 + 3);
    if ( v9 >= 0 )
    {
      v6 = v7;
      v4 = v10;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v7 = v4;
    a2 = haystack;
LABEL_4:
    v8 = *((const char **)v4 + 4);
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v4 + 2);
    if ( !v12 )
      break;
    v6 = v4;
    v4 = *((int **)v4 + 2);
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v6 = v4;
LABEL_14:
  if ( v6 == &dword_2CAD3A8 )
    goto LABEL_22;
  if ( !*((_QWORD *)v6 + 5) )
  {
    a2 = haystack;
    if ( v5 )
    {
LABEL_17:
      v13 = *(const char **)a1;
      goto LABEL_18;
    }
    v14 = *((_QWORD *)v6 + 7);
    if ( !v14 )
      goto LABEL_34;
    return v14;
  }
  a2 = *((const char **)v6 + 4);
  v13 = haystack;
  if ( v5 )
    goto LABEL_17;
LABEL_18:
  if ( strcmp(v13, a2) < 0 )
  {
LABEL_22:
    v16 = operator new(0x40u);
    v17 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v16 + 32) = 0;
    v18 = (int *)v16;
    *(_OWORD *)(v16 + 40) = 0;
    if ( v17 )
    {
      v25 = (void *)qalloc_or_throw(v17, a2);
      *((_QWORD *)v18 + 4) = v25;
      v26 = *(const char **)a1;
      *((_QWORD *)v18 + 6) = v17;
      memcpy(v25, v26, v17);
      *((_QWORD *)v18 + 5) = v17;
    }
    *((_QWORD *)v18 + 7) = 0;
    v19 = (int *)sub_8D8030(&qword_2CAD3A0, v6, (__int64)(v18 + 8));
    v6 = v19;
    if ( v20 )
    {
      if ( &dword_2CAD3A8 != (int *)v20 && !v19 )
      {
        v21 = haystack;
        if ( *(_QWORD *)(v20 + 40) )
          v21 = *(const char **)(v20 + 32);
        v22 = haystack;
        if ( *((_QWORD *)v18 + 5) )
          v22 = *((const char **)v18 + 4);
        strcmp(v22, v21);
      }
      v6 = v18;
      std::_Rb_tree_insert_and_rebalance();
      ++qword_2CAD3C8;
    }
    else if ( v18 )
    {
      v24 = *((void **)v18 + 4);
      if ( v24 )
      {
        *((_QWORD *)v18 + 5) = 0;
        qfree(v24);
      }
      operator delete(v18, 0x40u);
    }
  }
  v14 = *((_QWORD *)v6 + 7);
  if ( v14 )
    return v14;
LABEL_34:
  if ( (a3 & 8) != 0 )
  {
    v14 = operator new(0xE8u);
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)v14 = &off_2BD2948;
    *(_QWORD *)(v14 + 80) = 0;
    *(_QWORD *)(v14 + 88) = 0;
    *(_OWORD *)(v14 + 32) = 0;
    *(_OWORD *)(v14 + 48) = 0;
    *(_OWORD *)(v14 + 64) = 0;
    *(_OWORD *)(v14 + 96) = 0;
    v27 = qvector_reserve(v14 + 88, 0, 7, 1);
    *(_QWORD *)(v14 + 88) = v27;
    *(_QWORD *)(v14 + 96) = 7;
    *(_DWORD *)v27 = 1869378406;
    *(_WORD *)(v27 + 4) = 27491;
    *(_BYTE *)(*(_QWORD *)(v14 + 88) + 6LL) = 0;
    *(_DWORD *)(v14 + 112) = 7;
    *(_BYTE *)(v14 + 116) = 0;
    *(_DWORD *)(v14 + 120) = 0;
    *(_DWORD *)(v14 + 136) = 0;
    *(_QWORD *)(v14 + 144) = 0;
    *(_QWORD *)(v14 + 152) = v14 + 136;
    *(_QWORD *)(v14 + 160) = v14 + 136;
    *(_QWORD *)(v14 + 168) = 0;
    *(_QWORD *)(v14 + 176) = 0;
    *(_QWORD *)(v14 + 200) = 0;
    *(_QWORD *)(v14 + 208) = 0;
    *(_OWORD *)(v14 + 184) = 0;
    *(_OWORD *)(v14 + 216) = 0;
  }
  else
  {
    v23 = (_QWORD *)operator new(0x20u);
    v23[1] = 0;
    v14 = (__int64)v23;
    v23[2] = 0;
    v23[3] = 0;
    *v23 = &off_2BD2868;
  }
  *((_QWORD *)v6 + 7) = v14;
  if ( (a3 & 0x10) != 0 )
  {
    sub_8A5070(v14);
    v14 = *((_QWORD *)v6 + 7);
  }
  if ( v29 )
  {
    ((void (__fastcall *)(__int64))v29)(v14);
    return *((_QWORD *)v6 + 7);
  }
  return v14;
}

