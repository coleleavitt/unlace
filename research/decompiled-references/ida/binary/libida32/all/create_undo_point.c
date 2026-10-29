__int64 __fastcall create_undo_point(const void *a1, size_t a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbp
  const void *v7; // r14
  size_t v8; // r15
  _QWORD *v9; // r13
  _QWORD *v10; // r12
  size_t v11; // rdx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  void *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  void *v20; // rdi
  void *v21; // rdi
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // r12
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // rax
  __int64 *v30; // rdx
  bool v31; // dl
  bool v32; // zf
  void (__fastcall **v33)(_QWORD); // rbx
  void (__fastcall **i)(_QWORD); // rbp
  __int64 v36; // rbx
  void *v37; // rdi
  size_t v38; // rax
  __int64 v41; // rdi

  v41 = *(_QWORD *)(qword_2CA1698 + 1656);
  if ( !*(_QWORD *)(v41 + 88) )
    return 0;
  v6 = *(_QWORD *)(qword_2CA1698 + 1656);
  if ( !*(_QWORD *)(v41 + 96) )
    return 0;
  v7 = a1;
  v8 = a2;
  if ( !*(_BYTE *)(v41 + 112) && !(unsigned __int8)sub_39CE60() )
    return 0;
  if ( *(_DWORD *)(v41 + 116) )
  {
    if ( !under_debugger )
      interr(1757);
    goto LABEL_53;
  }
  v9 = (_QWORD *)(v41 + 8);
  sub_5AF050(*(_QWORD *)v41, (_DWORD)a1, 0, a4, a5, a6);
  v10 = *(_QWORD **)(v41 + 32);
  if ( v10 != (_QWORD *)(v41 + 8) )
  {
    v11 = v10[6];
    if ( !v11 )
    {
      while ( 1 )
      {
        v12 = v10;
LABEL_8:
        v13 = *(_QWORD *)(v6 + 104);
        v14 = v12[6] + v12[3];
        if ( v13 < v14 )
          break;
        *(_QWORD *)(v6 + 104) = v13 - v14;
        v10 = (_QWORD *)*v12;
        *(_QWORD *)v12[1] = *v12;
        v10[1] = v12[1];
        v15 = (void *)v12[5];
        if ( v15 )
        {
          v12[6] = 0;
          qfree(v15);
        }
        v16 = (void *)v12[2];
        if ( v16 )
        {
          v12[3] = 0;
          qfree(v16);
        }
        qfree(v12);
        v17 = *(_QWORD *)(v6 + 24);
        v18 = v17 - 1;
        *(_QWORD *)(v6 + 24) = v17 - 1;
        if ( v9 == v10 )
          goto LABEL_14;
      }
LABEL_48:
      if ( !under_debugger )
        interr(1759);
LABEL_53:
      BUG();
    }
    if ( *(_QWORD **)(v41 + 8) == v10 )
    {
      v38 = *(_QWORD *)(v41 + 104);
      if ( v38 < v11 )
        sub_5648E0();
      v12 = *(_QWORD **)(v41 + 32);
      *(_QWORD *)(v41 + 104) = v38 - v11;
    }
    else
    {
      v36 = v10[1];
      a1 = (const void *)v10[5];
      sub_564900((__int64 *)(v36 + 16), a1, v11);
      v12 = *(_QWORD **)v36;
    }
    v37 = (void *)v10[5];
    if ( v37 )
    {
      v10[6] = 0;
      qfree(v37);
      v10[5] = 0;
      v10[7] = 0;
    }
    if ( v12 != v9 )
      goto LABEL_8;
  }
  v18 = *(_QWORD *)(v6 + 24);
  v10 = (_QWORD *)(v6 + 8);
  v17 = v18 + 1;
LABEL_14:
  *(_QWORD *)(v6 + 32) = v10;
  if ( *(_QWORD *)(v6 + 88) < v17 )
  {
    while ( 1 )
    {
      v23 = *(_QWORD **)(v6 + 8);
      v24 = *(_QWORD *)(v6 + 104);
      v25 = v23[3] + v23[6];
      if ( v24 < v25 )
        goto LABEL_48;
      *(_QWORD *)(v6 + 104) = v24 - v25;
      if ( *(_QWORD **)(v6 + 32) == v23 || v18 == 1 )
        break;
      v19 = (_QWORD *)*v23;
      *(_QWORD *)v23[1] = *v23;
      v19[1] = v23[1];
      v20 = (void *)v23[5];
      if ( v20 )
      {
        v23[6] = 0;
        qfree(v20);
      }
      v21 = (void *)v23[2];
      if ( v21 )
      {
        v23[3] = 0;
        qfree(v21);
      }
      qfree(v23);
      v22 = *(_QWORD *)(v6 + 24);
      v18 = v22 - 1;
      *(_QWORD *)(v6 + 24) = v22 - 1;
      if ( *(_QWORD *)(v6 + 88) >= v22 )
        goto LABEL_32;
    }
    if ( v9 != v23 )
    {
      do
      {
        v26 = v23;
        v23 = (_QWORD *)*v23;
        *(_QWORD *)v26[1] = v23;
        v23[1] = v26[1];
        v27 = (void *)v26[5];
        if ( v27 )
        {
          v26[6] = 0;
          qfree(v27);
        }
        v28 = (void *)v26[2];
        if ( v28 )
        {
          v26[3] = 0;
          qfree(v28);
        }
        qfree(v26);
        --*(_QWORD *)(v6 + 24);
      }
      while ( v9 != v23 );
      v23 = *(_QWORD **)(v6 + 8);
    }
    *(_QWORD *)(v6 + 32) = v23;
    *(_QWORD *)(v6 + 104) = 0;
    *(_BYTE *)(v6 + 120) = 0;
  }
LABEL_32:
  v29 = qalloc_or_throw(64, (const char *)a1);
  *(_QWORD *)(v29 + 16) = 0;
  *(_QWORD *)(v29 + 40) = 0;
  *(_QWORD *)v29 = v9;
  *(_OWORD *)(v29 + 24) = 0;
  *(_OWORD *)(v29 + 48) = 0;
  v30 = *(__int64 **)(v6 + 16);
  *(_QWORD *)(v29 + 8) = v30;
  *v30 = v29;
  v31 = 0;
  v32 = (*(_QWORD *)(v6 + 24))++ == -1;
  *(_QWORD *)(v6 + 16) = v29;
  *(_QWORD *)(v6 + 32) = v9;
  if ( !v32 )
    v31 = *(_DWORD *)(v6 + 116) == 0;
  *(_BYTE *)(v6 + 120) = v31;
  sub_5649C0(v6, 0, v7, v8);
  v33 = *(void (__fastcall ***)(_QWORD))(v6 + 64);
  for ( i = &v33[*(_QWORD *)(v6 + 72)]; i != v33; ++v33 )
    (*v33)(0);
  return 1;
}

