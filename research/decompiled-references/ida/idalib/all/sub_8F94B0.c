__int64 __fastcall sub_8F94B0(char *a1, const char *a2, const char *a3, char a4)
{
  const char *v5; // rbp
  char *v6; // rbx
  int v8; // r9d
  size_t v9; // rax
  __int64 v10; // r15
  size_t v11; // r13
  char *v12; // rax
  char *v13; // r13
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
  char *v24; // rax
  _QWORD *v25; // rbx
  char *v26; // r14
  char *v27; // rbp
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
  unsigned int v49; // eax
  __int64 v50; // rdi
  bool v51; // zf
  void *v52; // rdi
  _QWORD *v53; // r14
  _QWORD *v54; // [rsp+0h] [rbp-A8h]
  pthread_rwlock_t *rwlock; // [rsp+10h] [rbp-98h]
  __int64 v57; // [rsp+18h] [rbp-90h]
  void *ptr[2]; // [rsp+20h] [rbp-88h] BYREF
  const char *v59; // [rsp+30h] [rbp-78h]
  _QWORD *v60; // [rsp+38h] [rbp-70h]
  const char *v61; // [rsp+48h] [rbp-60h]
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __m128i v63; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v64; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  v64 = __readfsqword(0x28u);
  if ( !strcmp(a2, a3) )
    return 0;
  rwlock = (pthread_rwlock_t *)(a1 + 32);
  v61 = "file:rename";
  if ( unk_2C820E0 )
  {
    if ( *((_DWORD *)a1 + 28) <= dword_2CD72F4 )
    {
      if ( !under_debugger )
        interr(2388);
      BUG();
    }
    v8 = *((_DWORD *)a1 + 30);
    dword_2CD72F4 = *((_DWORD *)a1 + 28);
    if ( v8 )
      sub_8EFB10();
  }
  pthread_rwlock_wrlock(rwlock);
  _InterlockedAdd((volatile signed __int32 *)a1 + 30, 1u);
  a1[116] = 1;
  s2 = nullptr;
  v63 = 0;
  if ( a2 )
  {
    v9 = strlen(a2);
    v10 = v9 + 1;
    v11 = v9;
    v12 = (char *)qvector_reserve(&s2, 0, v9 + 1, 1);
    v63.m128i_i64[0] = v10;
    s2 = v12;
    memmove(v12, a2, v11);
    s2[v11] = 0;
    v13 = s2;
    v60 = a1 + 128;
    v14 = (char *)sub_8F78A0((__int64)(a1 + 128), (__int64)&s2);
    if ( v13 )
    {
      v63.m128i_i64[0] = 0;
      qfree(v13);
    }
  }
  else
  {
    v60 = a1 + 128;
    v14 = (char *)sub_8F78A0((__int64)(a1 + 128), (__int64)&s2);
  }
  v54 = a1 + 136;
  if ( a1 + 136 == v14 )
  {
    set_error_string(0, a2);
    if ( *((int *)a1 + 30) <= 0 )
      sub_8EFB30();
    _InterlockedSub((volatile signed __int32 *)a1 + 30, 1u);
    v51 = a1[116] == 0;
    dword_2CD72F4 = 0;
    if ( !v51 )
      a1[116] = 0;
    pthread_rwlock_unlock(rwlock);
    return 3;
  }
  v57 = *((_QWORD *)v14 + 7);
  v15 = std::_Rb_tree_rebalance_for_erase(v14, v54);
  v16 = *(void **)(v15 + 32);
  v17 = (void *)v15;
  if ( v16 )
  {
    *(_QWORD *)(v15 + 40) = 0;
    qfree(v16);
  }
  operator delete(v17, 0x40u);
  --*((_QWORD *)v6 + 21);
  s2 = nullptr;
  v63 = 0;
  if ( a3 )
  {
    v18 = strlen(a3);
    v19 = v18 + 1;
    v20 = v18;
    s2 = (char *)qvector_reserve(&s2, 0, v18 + 1, 1);
    v63.m128i_i64[0] = v19;
    memmove(s2, a3, v20);
    s2[v20] = 0;
  }
  v21 = *((_QWORD **)v6 + 18);
  v22 = v6 + 136;
  if ( !v21 )
    goto LABEL_35;
  v23 = v63.m128i_i64[0];
  ptr[0] = v6;
  v24 = (char *)haystack;
  v59 = a2;
  v25 = v21;
  v22 = v54;
  v26 = s2;
  if ( v63.m128i_i64[0] )
    v24 = s2;
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
      v6 = (char *)ptr[0];
      v5 = v59;
      v35 = v26;
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
  v35 = v26;
  v53 = v25;
  v5 = v59;
  v6 = (char *)ptr[0];
  v22 = v53;
LABEL_30:
  if ( v54 == v22 )
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
    goto LABEL_45;
  }
  v36 = (const char *)v22[4];
  v37 = haystack;
  if ( v23 )
    goto LABEL_33;
LABEL_34:
  ptr[0] = v35;
  v38 = strcmp(v37, v36);
  v35 = (char *)ptr[0];
  if ( v38 >= 0 )
  {
LABEL_45:
    v22[7] = v57;
    if ( v35 )
    {
      v63.m128i_i64[0] = 0;
      qfree(v35);
    }
    goto LABEL_47;
  }
LABEL_35:
  v39 = operator new(0x40u);
  v40 = s2;
  v41 = v60;
  v42 = v22;
  v22 = (_QWORD *)v39;
  v43 = _mm_loadu_si128(&v63);
  *(_QWORD *)(v39 + 56) = 0;
  *(_QWORD *)(v39 + 32) = v40;
  *(__m128i *)(v39 + 40) = v43;
  s2 = nullptr;
  *(__m128i *)ptr = v43;
  v63 = 0;
  v44 = sub_8B6F60(v41, v42, v39 + 32);
  v46 = v44;
  if ( v45 )
  {
    if ( v54 == v45 || (v47 = _mm_load_si128((const __m128i *)ptr).m128i_u64[0], v44) )
    {
      v50 = 1;
    }
    else
    {
      v48 = haystack;
      if ( v45[5] )
        v48 = (const char *)v45[4];
      ptr[0] = v45;
      if ( !v47 )
        v40 = (char *)haystack;
      v49 = strcmp(v40, v48);
      v45 = ptr[0];
      v50 = v49 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v50, v22, v45, v54);
    ++*((_QWORD *)v6 + 21);
    v35 = s2;
    goto LABEL_45;
  }
  if ( v22 )
  {
    if ( v40 )
    {
      v22[5] = 0;
      qfree(v40);
    }
    v52 = v22;
    v22 = v46;
    operator delete(v52, 0x40u);
    v35 = s2;
    goto LABEL_45;
  }
  v44[7] = v57;
LABEL_47:
  if ( (a4 & 4) != 0 )
    sub_8C98A0(*((_QWORD **)v6 + 1), v5);
  if ( *((int *)v6 + 30) <= 0 )
    sub_8EFB30();
  _InterlockedSub((volatile signed __int32 *)v6 + 30, 1u);
  v51 = v6[116] == 0;
  dword_2CD72F4 = 0;
  if ( !v51 )
    v6[116] = 0;
  pthread_rwlock_unlock(rwlock);
  return 0;
}
