__int64 __fastcall get_vault_filesys(__int64 a1, void (__fastcall *a2)(__int64), char a3)
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
  unsigned int v25; // eax
  __int64 v26; // rdi
  _QWORD *v27; // rax
  void *v28; // rdi
  void *v29; // rax
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 v34; // [rsp+18h] [rbp-40h]

  v4 = (int *)qword_2CD72D0;
  if ( !qword_2CD72D0 )
  {
    v6 = &dword_2CD72C8;
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = &dword_2CD72C8;
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
  if ( v6 == &dword_2CD72C8 )
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
      v29 = (void *)qalloc_or_throw(v19);
      *((_QWORD *)v20 + 4) = v29;
      v30 = *(const char **)a1;
      *((_QWORD *)v20 + 6) = v19;
      memcpy(v29, v30, v19);
      *((_QWORD *)v20 + 5) = v19;
    }
    *((_QWORD *)v20 + 7) = 0;
    v21 = (int *)sub_8FBD70(&qword_2CD72C0, v6, (__int64)(v20 + 8));
    v6 = v21;
    if ( v22 )
    {
      if ( &dword_2CD72C8 == (int *)v22 || v21 )
      {
        v26 = 1;
      }
      else
      {
        v23 = haystack;
        if ( *(_QWORD *)(v22 + 40) )
          v23 = *(const char **)(v22 + 32);
        v24 = haystack;
        if ( *((_QWORD *)v20 + 5) )
          v24 = *((const char **)v20 + 4);
        v34 = v22;
        v25 = strcmp(v24, v23);
        v22 = v34;
        v26 = v25 >> 31;
      }
      v6 = v20;
      std::_Rb_tree_insert_and_rebalance(v26, v20, v22, &dword_2CD72C8);
      ++qword_2CD72E8;
    }
    else if ( v20 )
    {
      v28 = *((void **)v20 + 4);
      if ( v28 )
      {
        *((_QWORD *)v20 + 5) = 0;
        qfree(v28);
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
    *(_QWORD *)v16 = &off_2BFC948;
    *(_QWORD *)(v16 + 80) = 0;
    *(_QWORD *)(v16 + 88) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(_OWORD *)(v16 + 48) = 0;
    *(_OWORD *)(v16 + 64) = 0;
    *(_OWORD *)(v16 + 96) = 0;
    v31 = qvector_reserve(v16 + 88, 0, 7, 1);
    *(_QWORD *)(v16 + 88) = v31;
    *(_QWORD *)(v16 + 96) = 7;
    *(_DWORD *)v31 = 1869378406;
    *(_WORD *)(v31 + 4) = 27491;
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
    v27 = (_QWORD *)operator new(0x20u);
    v27[1] = 0;
    v16 = (__int64)v27;
    v27[2] = 0;
    v27[3] = 0;
    *v27 = &off_2BFC868;
  }
  *((_QWORD *)v6 + 7) = v16;
  if ( (a3 & 0x10) != 0 )
  {
    sub_8C8DB0(v16);
    v16 = *((_QWORD *)v6 + 7);
  }
  if ( a2 )
  {
    a2(v16);
    return *((_QWORD *)v6 + 7);
  }
  return v16;
}
