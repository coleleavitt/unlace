__int64 __fastcall sub_5FD00(char *a1, const char *a2, const char *a3, char a4)
{
  const char *v5; // rbp
  char *v6; // rbx
  int v8; // r9d
  size_t v9; // rax
  __int64 v10; // r15
  size_t v11; // r13
  void *v12; // rax
  void *v13; // r13
  char *v14; // r15
  __int64 v15; // rax
  void *v16; // rdi
  void *v17; // r15
  size_t v18; // rax
  __int64 v19; // r13
  size_t v20; // r15
  _QWORD *v21; // r14
  _QWORD *v22; // r15
  __int64 v23; // r13
  const char *v24; // rax
  _QWORD *v25; // rbx
  const char *v26; // r14
  const char *v27; // rbp
  _QWORD *v28; // r12
  const char *v29; // rsi
  const char *v30; // rdi
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  char *v35; // rdx
  const char *v36; // rsi
  const char *v37; // rdi
  int v38; // eax
  __int64 v39; // rax
  char *v40; // r14
  _QWORD *v41; // rdi
  _QWORD *v42; // rsi
  __m128i v43; // xmm0
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // r12
  unsigned __int64 v47; // xmm0_8
  const char *v48; // rsi
  bool v49; // zf
  void *v50; // rdi
  _QWORD *v51; // r14
  _QWORD *v52; // [rsp+0h] [rbp-A8h]
  pthread_rwlock_t *rwlock; // [rsp+10h] [rbp-98h]
  __int64 v55; // [rsp+18h] [rbp-90h]
  void *v56[2]; // [rsp+20h] [rbp-88h] BYREF
  const char *v57; // [rsp+30h] [rbp-78h]
  _QWORD *v58; // [rsp+38h] [rbp-70h]
  const char *v59; // [rsp+48h] [rbp-60h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __m128i v61; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  v62 = __readfsqword(0x28u);
  if ( !strcmp(a2, a3) )
    return 0;
  rwlock = (pthread_rwlock_t *)(a1 + 32);
  v59 = "file:rename";
  if ( LOBYTE(qword_165660[0]) )
  {
    if ( *((_DWORD *)a1 + 28) <= dword_165A14 )
    {
      if ( !byte_1671A1 )
        sub_96F80(2388);
      BUG();
    }
    v8 = *((_DWORD *)a1 + 30);
    dword_165A14 = *((_DWORD *)a1 + 28);
    if ( v8 )
      sub_55FB0();
  }
  pthread_rwlock_wrlock(rwlock);
  _InterlockedAdd((volatile signed __int32 *)a1 + 30, 1u);
  a1[116] = 1;
  ptr = nullptr;
  v61 = 0;
  if ( a2 )
  {
    v9 = strlen(a2);
    v10 = v9 + 1;
    v11 = v9;
    v12 = (void *)sub_96080(&ptr, 0, v9 + 1, 1);
    v61.m128i_i64[0] = v10;
    ptr = v12;
    memmove(v12, a2, v11);
    *((_BYTE *)ptr + v11) = 0;
    v13 = ptr;
    v58 = a1 + 128;
    v14 = (char *)sub_5DDE0((__int64)(a1 + 128), (__int64)&ptr);
    if ( v13 )
    {
      v61.m128i_i64[0] = 0;
      j__free(v13);
    }
  }
  else
  {
    v58 = a1 + 128;
    v14 = (char *)sub_5DDE0((__int64)(a1 + 128), (__int64)&ptr);
  }
  v52 = a1 + 136;
  if ( a1 + 136 == v14 )
  {
    sub_8F890(0, a2);
    if ( *((int *)a1 + 30) <= 0 )
      sub_55FD0();
    _InterlockedSub((volatile signed __int32 *)a1 + 30, 1u);
    v49 = a1[116] == 0;
    dword_165A14 = 0;
    if ( !v49 )
      a1[116] = 0;
    pthread_rwlock_unlock(rwlock);
    return 3;
  }
  v55 = *((_QWORD *)v14 + 7);
  v15 = std::_Rb_tree_rebalance_for_erase();
  v16 = *(void **)(v15 + 32);
  v17 = (void *)v15;
  if ( v16 )
  {
    *(_QWORD *)(v15 + 40) = 0;
    j__free(v16);
  }
  operator delete(v17, 0x40u);
  --*((_QWORD *)v6 + 21);
  ptr = nullptr;
  v61 = 0;
  if ( a3 )
  {
    v18 = strlen(a3);
    v19 = v18 + 1;
    v20 = v18;
    ptr = (void *)sub_96080(&ptr, 0, v18 + 1, 1);
    v61.m128i_i64[0] = v19;
    memmove(ptr, a3, v20);
    *((_BYTE *)ptr + v20) = 0;
  }
  v21 = *((_QWORD **)v6 + 18);
  v22 = v6 + 136;
  if ( !v21 )
    goto LABEL_35;
  v23 = v61.m128i_i64[0];
  v56[0] = v6;
  v24 = haystack;
  v57 = a2;
  v25 = v21;
  v22 = v52;
  v26 = (const char *)ptr;
  if ( v61.m128i_i64[0] )
    v24 = (const char *)ptr;
  v27 = v24;
  while ( 1 )
  {
    v33 = v25[5];
    if ( !v23 )
      break;
    if ( v33 )
      goto LABEL_27;
    v28 = v25;
    v29 = v26;
    v30 = haystack;
LABEL_20:
    v31 = strcmp(v30, v29);
    v32 = (_QWORD *)v25[2];
    v25 = (_QWORD *)v25[3];
    if ( v31 >= 0 )
    {
      v22 = v28;
      v25 = v32;
    }
    if ( !v25 )
    {
      v6 = (char *)v56[0];
      v5 = v57;
      v35 = (char *)v26;
      goto LABEL_30;
    }
  }
  if ( v33 )
  {
LABEL_27:
    v30 = (const char *)v25[4];
    v28 = v25;
    v29 = v27;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v34 = v25[2];
    if ( !v34 )
      break;
    v22 = v25;
    v25 = (_QWORD *)v25[2];
    if ( *(_QWORD *)(v34 + 40) )
      goto LABEL_27;
  }
  v35 = (char *)v26;
  v51 = v25;
  v5 = v57;
  v6 = (char *)v56[0];
  v22 = v51;
LABEL_30:
  if ( v52 == v22 )
    goto LABEL_35;
  if ( !v22[5] )
  {
    v36 = haystack;
    if ( v23 )
    {
LABEL_33:
      v37 = v35;
      goto LABEL_34;
    }
    goto LABEL_44;
  }
  v36 = (const char *)v22[4];
  v37 = haystack;
  if ( v23 )
    goto LABEL_33;
LABEL_34:
  v56[0] = v35;
  v38 = strcmp(v37, v36);
  v35 = (char *)v56[0];
  if ( v38 >= 0 )
  {
LABEL_44:
    v22[7] = v55;
    if ( v35 )
    {
      v61.m128i_i64[0] = 0;
      j__free(v35);
    }
    goto LABEL_46;
  }
LABEL_35:
  v39 = operator new(0x40u);
  v40 = (char *)ptr;
  v41 = v58;
  v42 = v22;
  v22 = (_QWORD *)v39;
  v43 = _mm_loadu_si128(&v61);
  *(_QWORD *)(v39 + 56) = 0;
  *(_QWORD *)(v39 + 32) = v40;
  *(__m128i *)(v39 + 40) = v43;
  ptr = nullptr;
  *(__m128i *)v56 = v43;
  v61 = 0;
  v44 = sub_5FB40(v41, v42, v39 + 32);
  v46 = v44;
  if ( v45 )
  {
    if ( v52 != v45 )
    {
      v47 = _mm_load_si128((const __m128i *)v56).m128i_u64[0];
      if ( !v44 )
      {
        v48 = haystack;
        if ( v45[5] )
          v48 = (const char *)v45[4];
        v56[0] = v45;
        if ( !v47 )
          v40 = (char *)haystack;
        strcmp(v40, v48);
      }
    }
    std::_Rb_tree_insert_and_rebalance();
    ++*((_QWORD *)v6 + 21);
    v35 = (char *)ptr;
    goto LABEL_44;
  }
  if ( v22 )
  {
    if ( v40 )
    {
      v22[5] = 0;
      j__free(v40);
    }
    v50 = v22;
    v22 = v46;
    operator delete(v50, 0x40u);
    v35 = (char *)ptr;
    goto LABEL_44;
  }
  v44[7] = v55;
LABEL_46:
  if ( (a4 & 4) != 0 )
    sub_681B0(*((_QWORD *)v6 + 1), v5);
  if ( *((int *)v6 + 30) <= 0 )
    sub_55FD0();
  _InterlockedSub((volatile signed __int32 *)v6 + 30, 1u);
  v49 = v6[116] == 0;
  dword_165A14 = 0;
  if ( !v49 )
    v6[116] = 0;
  pthread_rwlock_unlock(rwlock);
  return 0;
}

