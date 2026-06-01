__int64 __fastcall create_undo_point(const void *a1, size_t a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbp
  size_t v7; // r15
  __int64 *v8; // r13
  __int64 v9; // r12
  size_t v10; // rdx
  __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  void *v14; // rdi
  void *v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  void *v19; // rdi
  void *v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 *v22; // rbx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // r12
  void *v26; // rdi
  void *v27; // rdi
  __int64 v28; // rax
  __int64 *v29; // rdx
  bool v30; // dl
  bool v31; // zf
  void (__fastcall **v32)(_QWORD); // rbx
  void (__fastcall **i)(_QWORD); // rbp
  __int64 v35; // rbx
  void *v36; // rdi
  size_t v37; // rax
  __int64 v40; // rdi

  v40 = *(_QWORD *)(qword_2CCB598 + 1848);
  if ( !*(_QWORD *)(v40 + 88) )
    return 0;
  v6 = *(_QWORD *)(qword_2CCB598 + 1848);
  if ( !*(_QWORD *)(v40 + 96) )
    return 0;
  v7 = a2;
  if ( !*(_BYTE *)(v40 + 112) && !(unsigned __int8)sub_3A1A70() )
    return 0;
  if ( *(_DWORD *)(v40 + 116) )
  {
    if ( !under_debugger )
      interr(1757);
    goto LABEL_53;
  }
  v8 = (__int64 *)(v40 + 8);
  sub_5C9D00(*(_QWORD *)v40, (_DWORD)a1, 0, a4, a5, a6);
  v9 = *(_QWORD *)(v40 + 32);
  if ( v9 != v40 + 8 )
  {
    v10 = *(_QWORD *)(v9 + 48);
    if ( !v10 )
    {
      while ( 1 )
      {
        v11 = (__int64 *)v9;
LABEL_8:
        v12 = *(_QWORD *)(v6 + 104);
        v13 = v11[6] + v11[3];
        if ( v12 < v13 )
          break;
        *(_QWORD *)(v6 + 104) = v12 - v13;
        v9 = *v11;
        *(_QWORD *)v11[1] = *v11;
        *(_QWORD *)(v9 + 8) = v11[1];
        v14 = (void *)v11[5];
        if ( v14 )
        {
          v11[6] = 0;
          qfree(v14);
        }
        v15 = (void *)v11[2];
        if ( v15 )
        {
          v11[3] = 0;
          qfree(v15);
        }
        qfree(v11);
        v16 = *(_QWORD *)(v6 + 24);
        v17 = v16 - 1;
        *(_QWORD *)(v6 + 24) = v16 - 1;
        if ( v8 == (__int64 *)v9 )
          goto LABEL_14;
      }
LABEL_48:
      if ( !under_debugger )
        interr(1759);
LABEL_53:
      BUG();
    }
    if ( *(_QWORD *)(v40 + 8) == v9 )
    {
      v37 = *(_QWORD *)(v40 + 104);
      if ( v37 < v10 )
        sub_57E1C0();
      v11 = *(__int64 **)(v40 + 32);
      *(_QWORD *)(v40 + 104) = v37 - v10;
    }
    else
    {
      v35 = *(_QWORD *)(v9 + 8);
      sub_57E1E0((__int64 *)(v35 + 16), *(const void **)(v9 + 40), v10);
      v11 = *(__int64 **)v35;
    }
    v36 = *(void **)(v9 + 40);
    if ( v36 )
    {
      *(_QWORD *)(v9 + 48) = 0;
      qfree(v36);
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 56) = 0;
    }
    if ( v11 != v8 )
      goto LABEL_8;
  }
  v17 = *(_QWORD *)(v6 + 24);
  v9 = v6 + 8;
  v16 = v17 + 1;
LABEL_14:
  *(_QWORD *)(v6 + 32) = v9;
  if ( *(_QWORD *)(v6 + 88) < v16 )
  {
    while ( 1 )
    {
      v22 = *(__int64 **)(v6 + 8);
      v23 = *(_QWORD *)(v6 + 104);
      v24 = v22[3] + v22[6];
      if ( v23 < v24 )
        goto LABEL_48;
      *(_QWORD *)(v6 + 104) = v23 - v24;
      if ( *(__int64 **)(v6 + 32) == v22 || v17 == 1 )
        break;
      v18 = (__int64 *)*v22;
      *(_QWORD *)v22[1] = *v22;
      v18[1] = v22[1];
      v19 = (void *)v22[5];
      if ( v19 )
      {
        v22[6] = 0;
        qfree(v19);
      }
      v20 = (void *)v22[2];
      if ( v20 )
      {
        v22[3] = 0;
        qfree(v20);
      }
      qfree(v22);
      v21 = *(_QWORD *)(v6 + 24);
      v17 = v21 - 1;
      *(_QWORD *)(v6 + 24) = v21 - 1;
      if ( *(_QWORD *)(v6 + 88) >= v21 )
        goto LABEL_32;
    }
    if ( v8 != v22 )
    {
      do
      {
        v25 = v22;
        v22 = (__int64 *)*v22;
        *(_QWORD *)v25[1] = v22;
        v22[1] = v25[1];
        v26 = (void *)v25[5];
        if ( v26 )
        {
          v25[6] = 0;
          qfree(v26);
        }
        v27 = (void *)v25[2];
        if ( v27 )
        {
          v25[3] = 0;
          qfree(v27);
        }
        qfree(v25);
        --*(_QWORD *)(v6 + 24);
      }
      while ( v8 != v22 );
      v22 = *(__int64 **)(v6 + 8);
    }
    *(_QWORD *)(v6 + 32) = v22;
    *(_QWORD *)(v6 + 104) = 0;
    *(_BYTE *)(v6 + 120) = 0;
  }
LABEL_32:
  v28 = qalloc_or_throw(64);
  *(_QWORD *)(v28 + 16) = 0;
  *(_QWORD *)(v28 + 40) = 0;
  *(_QWORD *)v28 = v8;
  *(_OWORD *)(v28 + 24) = 0;
  *(_OWORD *)(v28 + 48) = 0;
  v29 = *(__int64 **)(v6 + 16);
  *(_QWORD *)(v28 + 8) = v29;
  *v29 = v28;
  v30 = 0;
  v31 = (*(_QWORD *)(v6 + 24))++ == -1;
  *(_QWORD *)(v6 + 16) = v28;
  *(_QWORD *)(v6 + 32) = v8;
  if ( !v31 )
    v30 = *(_DWORD *)(v6 + 116) == 0;
  *(_BYTE *)(v6 + 120) = v30;
  sub_57E2A0(v6, 0, a1, v7);
  v32 = *(void (__fastcall ***)(_QWORD))(v6 + 64);
  for ( i = &v32[*(_QWORD *)(v6 + 72)]; i != v32; ++v32 )
    (*v32)(0);
  return 1;
}
