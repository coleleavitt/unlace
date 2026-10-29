__int64 __fastcall sub_8D5770(char *a1, const char *a2, const char *a3, char a4)
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
  char *v17; // r15
  char *v18; // rdi
  size_t v19; // rax
  __int64 v20; // r13
  size_t v21; // r15
  _QWORD *v22; // r14
  _QWORD *v23; // r15
  __int64 v24; // r13
  char *v25; // rax
  _QWORD *v26; // rbx
  char *v27; // r14
  char *v28; // rbp
  _QWORD *v29; // r12
  const char *v30; // rsi
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  char *v35; // rdx
  const char *v36; // rsi
  int v37; // eax
  __int64 v38; // rax
  char *v39; // r14
  _QWORD *v40; // rsi
  __m128i v41; // xmm0
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // r12
  unsigned __int64 v45; // xmm0_8
  const char *v46; // rsi
  bool v47; // zf
  _QWORD *v48; // r14
  _QWORD *v49; // [rsp+0h] [rbp-A8h]
  pthread_rwlock_t *rwlock; // [rsp+10h] [rbp-98h]
  __int64 v52; // [rsp+18h] [rbp-90h]
  void *ptr[2]; // [rsp+20h] [rbp-88h] BYREF
  const char *v54; // [rsp+30h] [rbp-78h]
  char *v55; // [rsp+38h] [rbp-70h]
  const char *v56; // [rsp+48h] [rbp-60h]
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __m128i v58; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+68h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  v59 = __readfsqword(0x28u);
  if ( !strcmp(a2, a3) )
    return 0;
  rwlock = (pthread_rwlock_t *)(a1 + 32);
  v56 = "file:rename";
  if ( unk_2C581E0 )
  {
    if ( *((_DWORD *)a1 + 28) <= dword_2CAD3D4 )
    {
      if ( !under_debugger )
        interr(2388);
      BUG();
    }
    v8 = *((_DWORD *)a1 + 30);
    dword_2CAD3D4 = *((_DWORD *)a1 + 28);
    if ( v8 )
      sub_8CBDD0();
  }
  pthread_rwlock_wrlock(rwlock);
  _InterlockedAdd((volatile signed __int32 *)a1 + 30, 1u);
  a1[116] = 1;
  s2 = nullptr;
  v58 = 0;
  if ( a2 )
  {
    v9 = strlen(a2);
    v10 = v9 + 1;
    v11 = v9;
    v12 = (char *)qvector_reserve(&s2, 0, v9 + 1, 1);
    v58.m128i_i64[0] = v10;
    s2 = v12;
    memmove(v12, a2, v11);
    s2[v11] = 0;
    v13 = s2;
    v55 = a1 + 128;
    v14 = (char *)sub_8D3B60((__int64)(a1 + 128), (__int64)&s2);
    if ( v13 )
    {
      v58.m128i_i64[0] = 0;
      qfree(v13);
    }
  }
  else
  {
    v55 = a1 + 128;
    v14 = (char *)sub_8D3B60((__int64)(a1 + 128), (__int64)&s2);
  }
  v49 = a1 + 136;
  if ( a1 + 136 == v14 )
  {
    set_error_string();
    if ( *((int *)a1 + 30) <= 0 )
      sub_8CBDF0(0);
    _InterlockedSub((volatile signed __int32 *)a1 + 30, 1u);
    v47 = a1[116] == 0;
    dword_2CAD3D4 = 0;
    if ( !v47 )
      a1[116] = 0;
    pthread_rwlock_unlock(rwlock);
    return 3;
  }
  v52 = *((_QWORD *)v14 + 7);
  v15 = std::_Rb_tree_rebalance_for_erase();
  v16 = *(void **)(v15 + 32);
  v17 = (char *)v15;
  if ( v16 )
  {
    *(_QWORD *)(v15 + 40) = 0;
    qfree(v16);
  }
  v18 = v17;
  operator delete(v17, 0x40u);
  --*((_QWORD *)v6 + 21);
  s2 = nullptr;
  v58 = 0;
  if ( a3 )
  {
    v19 = strlen(a3);
    v20 = v19 + 1;
    v21 = v19;
    v18 = (char *)qvector_reserve(&s2, 0, v19 + 1, 1);
    s2 = v18;
    v58.m128i_i64[0] = v20;
    memmove(v18, a3, v21);
    s2[v21] = 0;
  }
  v22 = *((_QWORD **)v6 + 18);
  v23 = v6 + 136;
  if ( !v22 )
    goto LABEL_35;
  v24 = v58.m128i_i64[0];
  ptr[0] = v6;
  v25 = (char *)haystack;
  v54 = a2;
  v26 = v22;
  v23 = v49;
  v27 = s2;
  if ( v58.m128i_i64[0] )
    v25 = s2;
  v28 = v25;
  while ( 1 )
  {
    v33 = v26[5];
    if ( !v24 )
      break;
    if ( v33 )
      goto LABEL_27;
    v29 = v26;
    v30 = v27;
    v18 = (char *)haystack;
LABEL_20:
    v31 = strcmp(v18, v30);
    v32 = (_QWORD *)v26[2];
    v26 = (_QWORD *)v26[3];
    if ( v31 >= 0 )
    {
      v23 = v29;
      v26 = v32;
    }
    if ( !v26 )
    {
      v6 = (char *)ptr[0];
      v5 = v54;
      v35 = v27;
      goto LABEL_30;
    }
  }
  if ( v33 )
  {
LABEL_27:
    v18 = (char *)v26[4];
    v29 = v26;
    v30 = v28;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v34 = v26[2];
    if ( !v34 )
      break;
    v23 = v26;
    v26 = (_QWORD *)v26[2];
    if ( *(_QWORD *)(v34 + 40) )
      goto LABEL_27;
  }
  v35 = v27;
  v48 = v26;
  v5 = v54;
  v6 = (char *)ptr[0];
  v23 = v48;
LABEL_30:
  if ( v49 == v23 )
    goto LABEL_35;
  if ( !v23[5] )
  {
    v36 = haystack;
    if ( v24 )
    {
LABEL_33:
      v18 = v35;
      goto LABEL_34;
    }
    goto LABEL_45;
  }
  v36 = (const char *)v23[4];
  v18 = (char *)haystack;
  if ( v24 )
    goto LABEL_33;
LABEL_34:
  ptr[0] = v35;
  v37 = strcmp(v18, v36);
  v35 = (char *)ptr[0];
  if ( v37 >= 0 )
  {
LABEL_45:
    v23[7] = v52;
    if ( v35 )
    {
      v58.m128i_i64[0] = 0;
      v18 = v35;
      qfree(v35);
    }
    goto LABEL_47;
  }
LABEL_35:
  v38 = operator new(0x40u);
  v39 = s2;
  v18 = v55;
  v40 = v23;
  v23 = (_QWORD *)v38;
  v41 = _mm_loadu_si128(&v58);
  *(_QWORD *)(v38 + 56) = 0;
  *(_QWORD *)(v38 + 32) = v39;
  *(__m128i *)(v38 + 40) = v41;
  s2 = nullptr;
  *(__m128i *)ptr = v41;
  v58 = 0;
  v42 = sub_8935C0(v18, v40, v38 + 32);
  v44 = v42;
  if ( v43 )
  {
    if ( v49 == v43 || (v45 = _mm_load_si128((const __m128i *)ptr).m128i_u64[0], v42) )
    {
      v18 = (_BYTE *)(&dword_0 + 1);
    }
    else
    {
      v46 = haystack;
      if ( v43[5] )
        v46 = (const char *)v43[4];
      ptr[0] = v43;
      if ( !v45 )
        v39 = (char *)haystack;
      v18 = (char *)((unsigned int)strcmp(v39, v46) >> 31);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++*((_QWORD *)v6 + 21);
    v35 = s2;
    goto LABEL_45;
  }
  if ( v23 )
  {
    if ( v39 )
    {
      v23[5] = 0;
      qfree(v39);
    }
    v18 = (char *)v23;
    v23 = v44;
    operator delete(v18, 0x40u);
    v35 = s2;
    goto LABEL_45;
  }
  v42[7] = v52;
LABEL_47:
  if ( (a4 & 4) != 0 )
  {
    v18 = *((char **)v6 + 1);
    sub_8A5B60(v18, v5);
  }
  if ( *((int *)v6 + 30) <= 0 )
    sub_8CBDF0(v18);
  _InterlockedSub((volatile signed __int32 *)v6 + 30, 1u);
  v47 = v6[116] == 0;
  dword_2CAD3D4 = 0;
  if ( !v47 )
    v6[116] = 0;
  pthread_rwlock_unlock(rwlock);
  return 0;
}

