char **__fastcall sub_4749B0(int *a1, __int64 *a2)
{
  int v3; // eax
  size_t v5; // r12
  size_t v6; // r12
  size_t v7; // r12
  __int64 v9; // rdi
  void *v10; // r13
  __int64 v11; // rax
  bool v12; // cc
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdi
  void *v28; // r13
  __int64 v29; // rax
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdi
  void *v35; // r13
  __int64 v36; // rax
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+8h] [rbp-68h] BYREF
  void *v48; // [rsp+10h] [rbp-60h] BYREF
  __int64 v49; // [rsp+18h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v51; // [rsp+28h] [rbp-48h]
  unsigned __int64 v52; // [rsp+38h] [rbp-38h]

  v3 = *a1;
  v52 = __readfsqword(0x28u);
  if ( (v3 & 1) != 0 && *((_QWORD *)a1 + 1) != -1 )
  {
    v17 = a2[1];
    v19 = *a2;
    if ( a2[2] < (unsigned __int64)(v17 + 1) )
    {
      v42 = qvector_reserve(a2, v19, v17 + 1, 24);
      v17 = a2[1];
      *a2 = v42;
      v19 = v42;
    }
    v20 = v19 + 24 * v17;
    *(_QWORD *)v20 = 0;
    *(_OWORD *)(v20 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v20);
    v3 = *a1;
  }
  if ( (v3 & 0x20) != 0 && *((_QWORD *)a1 + 3) > 1u )
  {
    v24 = a2[1];
    v25 = *a2;
    if ( a2[2] < (unsigned __int64)(v24 + 1) )
    {
      v43 = qvector_reserve(a2, v25, v24 + 1, 24);
      v24 = a2[1];
      *a2 = v43;
      v25 = v43;
    }
    v26 = v25 + 24 * v24;
    *(_QWORD *)v26 = 0;
    *(_OWORD *)(v26 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v26);
    v3 = *a1;
  }
  if ( (v3 & 0x2000800) != 0 )
  {
    v5 = *((_QWORD *)a1 + 6);
    if ( v5 > 1 )
    {
      v9 = *((_QWORD *)a1 + 6);
      v47 = 0;
      v10 = (void *)qalloc_or_throw(v9);
      memcpy(v10, *((const void **)a1 + 5), v5);
      v11 = 0;
      v12 = *((_QWORD *)a1 + 12) <= 1u;
      v48 = v10;
      if ( !v12 )
        v11 = *((_QWORD *)a1 + 11);
      v49 = v11;
      v13 = nullptr;
      if ( *((_QWORD *)a1 + 15) > 1u )
        v13 = *((void **)a1 + 14);
      ptr = v13;
      deserialize_tinfo(&v47, 0, &v48, &v49, &ptr, 0);
      if ( v10 )
        qfree(v10);
      ptr = nullptr;
      v51 = 0;
      print_tinfo((unsigned int)&ptr, 0, 0, 0, 0, (unsigned int)&v47, 0, 0);
      v14 = a2[1];
      v15 = *a2;
      if ( a2[2] < (unsigned __int64)(v14 + 1) )
      {
        v44 = qvector_reserve(a2, v15, v14 + 1, 24);
        *a2 = v44;
        v14 = a2[1];
        v15 = v44;
      }
      v16 = v15 + 24 * v14;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v16);
      if ( ptr )
      {
        *(_QWORD *)&v51 = 0;
        qfree(ptr);
      }
      clear_tinfo_t(&v47);
      v3 = *a1;
    }
  }
  if ( (v3 & 0x1000) != 0 )
  {
    v6 = *((_QWORD *)a1 + 19);
    if ( v6 > 1 )
    {
      v34 = *((_QWORD *)a1 + 19);
      v47 = 0;
      v35 = (void *)qalloc_or_throw(v34);
      memcpy(v35, *((const void **)a1 + 18), v6);
      v36 = 0;
      v12 = *((_QWORD *)a1 + 25) <= 1u;
      v48 = v35;
      if ( !v12 )
        v36 = *((_QWORD *)a1 + 24);
      v49 = v36;
      v37 = nullptr;
      if ( *((_QWORD *)a1 + 28) > 1u )
        v37 = *((void **)a1 + 27);
      ptr = v37;
      deserialize_tinfo(&v47, 0, &v48, &v49, &ptr, 0);
      if ( v35 )
        qfree(v35);
      ptr = nullptr;
      v51 = 0;
      print_tinfo((unsigned int)&ptr, 0, 0, 0, 0, (unsigned int)&v47, 0, 0);
      v38 = a2[1];
      v39 = *a2;
      if ( a2[2] < (unsigned __int64)(v38 + 1) )
      {
        v46 = qvector_reserve(a2, v39, v38 + 1, 24);
        *a2 = v46;
        v38 = a2[1];
        v39 = v46;
      }
      v40 = v39 + 24 * v38;
      *(_QWORD *)v40 = 0;
      *(_OWORD *)(v40 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v40);
      if ( ptr )
      {
        *(_QWORD *)&v51 = 0;
        qfree(ptr);
      }
      clear_tinfo_t(&v47);
      v3 = *a1;
    }
  }
  if ( (v3 & 0x2000) != 0 )
  {
    v7 = *((_QWORD *)a1 + 32);
    if ( v7 > 1 )
    {
      v27 = *((_QWORD *)a1 + 32);
      v47 = 0;
      v28 = (void *)qalloc_or_throw(v27);
      memcpy(v28, *((const void **)a1 + 31), v7);
      v29 = 0;
      v12 = *((_QWORD *)a1 + 38) <= 1u;
      v48 = v28;
      if ( !v12 )
        v29 = *((_QWORD *)a1 + 37);
      v49 = v29;
      v30 = nullptr;
      if ( *((_QWORD *)a1 + 41) > 1u )
        v30 = *((void **)a1 + 40);
      ptr = v30;
      deserialize_tinfo(&v47, 0, &v48, &v49, &ptr, 0);
      if ( v28 )
        qfree(v28);
      ptr = nullptr;
      v51 = 0;
      print_tinfo((unsigned int)&ptr, 0, 0, 0, 0, (unsigned int)&v47, 0, 0);
      v31 = a2[1];
      v32 = *a2;
      if ( a2[2] < (unsigned __int64)(v31 + 1) )
      {
        v45 = qvector_reserve(a2, v32, v31 + 1, 24);
        *a2 = v45;
        v32 = v45;
        v31 = a2[1];
      }
      v33 = v32 + 24 * v31;
      *(_QWORD *)v33 = 0;
      *(_OWORD *)(v33 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v33);
      if ( ptr )
      {
        *(_QWORD *)&v51 = 0;
        qfree(ptr);
      }
      clear_tinfo_t(&v47);
      v3 = *a1;
    }
  }
  if ( (v3 & 0x40000) == 0 || a1[88] == -1 )
    return (char **)(v52 - __readfsqword(0x28u));
  v21 = a2[1];
  v22 = *a2;
  if ( a2[2] < (unsigned __int64)(v21 + 1) )
  {
    v41 = qvector_reserve(a2, v22, v21 + 1, 24);
    v21 = a2[1];
    *a2 = v41;
    v22 = v41;
  }
  v23 = v22 + 24 * v21;
  *(_QWORD *)v23 = 0;
  *(_OWORD *)(v23 + 8) = 0;
  ++a2[1];
  return sub_35A790((char **)v23);
}
