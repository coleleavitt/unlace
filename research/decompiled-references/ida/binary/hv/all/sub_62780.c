__int64 __fastcall sub_62780(__int64 a1, void (__fastcall *a2)(__int64), char a3)
{
  int *v4; // r15
  __int64 v5; // r13
  int *v6; // rbx
  const char *v7; // rsi
  int *v8; // r12
  const char *v9; // rdi
  int v10; // eax
  int *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rbp
  __int64 v18; // rax
  size_t v19; // r13
  int *v20; // r12
  int *v21; // rax
  __int64 v22; // rdx
  const char *v23; // rsi
  const char *v24; // rdi
  _QWORD *v25; // rax
  void *v26; // rdi
  void *v27; // rax
  const char *v28; // rsi
  __int64 v29; // rax

  v4 = (int *)qword_1659F0;
  if ( !qword_1659F0 )
  {
    v6 = &dword_1659E8;
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = &dword_1659E8;
  while ( 1 )
  {
    v12 = *((_QWORD *)v4 + 5);
    if ( !v5 )
      break;
    v7 = *(const char **)a1;
    v8 = v4;
    v9 = haystack;
    if ( v12 )
      goto LABEL_4;
LABEL_5:
    v10 = strcmp(v9, v7);
    v11 = *((int **)v4 + 2);
    v4 = *((int **)v4 + 3);
    if ( v10 >= 0 )
    {
      v6 = v8;
      v4 = v11;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v12 )
  {
LABEL_12:
    v8 = v4;
    v7 = haystack;
LABEL_4:
    v9 = *((const char **)v4 + 4);
    goto LABEL_5;
  }
  while ( 1 )
  {
    v13 = *((_QWORD *)v4 + 2);
    if ( !v13 )
      break;
    v6 = v4;
    v4 = *((int **)v4 + 2);
    if ( *(_QWORD *)(v13 + 40) )
      goto LABEL_12;
  }
  v6 = v4;
LABEL_14:
  if ( v6 == &dword_1659E8 )
    goto LABEL_22;
  if ( !*((_QWORD *)v6 + 5) )
  {
    v14 = haystack;
    if ( v5 )
    {
LABEL_17:
      v15 = *(const char **)a1;
      goto LABEL_18;
    }
    v16 = *((_QWORD *)v6 + 7);
    if ( !v16 )
      goto LABEL_34;
    return v16;
  }
  v14 = *((const char **)v6 + 4);
  v15 = haystack;
  if ( v5 )
    goto LABEL_17;
LABEL_18:
  if ( strcmp(v15, v14) < 0 )
  {
LABEL_22:
    v18 = operator new(0x40u);
    v19 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v18 + 32) = 0;
    v20 = (int *)v18;
    *(_OWORD *)(v18 + 40) = 0;
    if ( v19 )
    {
      v27 = (void *)sub_96030(v19);
      *((_QWORD *)v20 + 4) = v27;
      v28 = *(const char **)a1;
      *((_QWORD *)v20 + 6) = v19;
      memcpy(v27, v28, v19);
      *((_QWORD *)v20 + 5) = v19;
    }
    *((_QWORD *)v20 + 7) = 0;
    v21 = (int *)sub_625C0(&qword_1659E0, v6, (__int64)(v20 + 8));
    v6 = v21;
    if ( v22 )
    {
      if ( &dword_1659E8 != (int *)v22 && !v21 )
      {
        v23 = haystack;
        if ( *(_QWORD *)(v22 + 40) )
          v23 = *(const char **)(v22 + 32);
        v24 = haystack;
        if ( *((_QWORD *)v20 + 5) )
          v24 = *((const char **)v20 + 4);
        strcmp(v24, v23);
      }
      v6 = v20;
      std::_Rb_tree_insert_and_rebalance();
      ++qword_165A08;
    }
    else if ( v20 )
    {
      v26 = *((void **)v20 + 4);
      if ( v26 )
      {
        *((_QWORD *)v20 + 5) = 0;
        j__free(v26);
      }
      operator delete(v20, 0x40u);
    }
  }
  v16 = *((_QWORD *)v6 + 7);
  if ( v16 )
    return v16;
LABEL_34:
  if ( (a3 & 8) != 0 )
  {
    v16 = operator new(0xE8u);
    *(_QWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 24) = 0;
    *(_QWORD *)v16 = &off_164848;
    *(_QWORD *)(v16 + 80) = 0;
    *(_QWORD *)(v16 + 88) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(_OWORD *)(v16 + 48) = 0;
    *(_OWORD *)(v16 + 64) = 0;
    *(_OWORD *)(v16 + 96) = 0;
    v29 = sub_96080(v16 + 88, 0, 7, 1);
    *(_QWORD *)(v16 + 88) = v29;
    *(_QWORD *)(v16 + 96) = 7;
    *(_DWORD *)v29 = 1869378406;
    *(_WORD *)(v29 + 4) = 27491;
    *(_BYTE *)(*(_QWORD *)(v16 + 88) + 6LL) = 0;
    *(_DWORD *)(v16 + 112) = 7;
    *(_BYTE *)(v16 + 116) = 0;
    *(_DWORD *)(v16 + 120) = 0;
    *(_DWORD *)(v16 + 136) = 0;
    *(_QWORD *)(v16 + 144) = 0;
    *(_QWORD *)(v16 + 152) = v16 + 136;
    *(_QWORD *)(v16 + 160) = v16 + 136;
    *(_QWORD *)(v16 + 168) = 0;
    *(_QWORD *)(v16 + 176) = 0;
    *(_QWORD *)(v16 + 200) = 0;
    *(_QWORD *)(v16 + 208) = 0;
    *(_OWORD *)(v16 + 184) = 0;
    *(_OWORD *)(v16 + 216) = 0;
  }
  else
  {
    v25 = (_QWORD *)operator new(0x20u);
    v25[1] = 0;
    v16 = (__int64)v25;
    v25[2] = 0;
    v25[3] = 0;
    *v25 = &off_164768;
  }
  *((_QWORD *)v6 + 7) = v16;
  if ( (a3 & 0x10) != 0 )
  {
    sub_676C0(v16);
    v16 = *((_QWORD *)v6 + 7);
  }
  if ( a2 )
  {
    a2(v16);
    return *((_QWORD *)v6 + 7);
  }
  return v16;
}

