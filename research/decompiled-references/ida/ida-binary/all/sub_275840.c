__int64 __fastcall sub_275840(_QWORD *a1, __int64 a2, const char *a3)
{
  __int64 v3; // r15
  __int64 (*v4)(void); // rax
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // r9d
  _BYTE *v14; // r15
  size_t v15; // rax
  size_t v16; // r9
  size_t v17; // r8
  size_t v18; // r10
  size_t v19; // rdx
  const char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 *v26; // rbp
  __int64 v27; // rdi
  __int64 v29; // rbx
  void *v30; // rax
  __int64 v32; // [rsp+0h] [rbp-A8h]
  int v33; // [rsp+10h] [rbp-98h]
  size_t v34; // [rsp+10h] [rbp-98h]
  size_t v35; // [rsp+10h] [rbp-98h]
  size_t v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  size_t v38; // [rsp+18h] [rbp-90h]
  size_t v39; // [rsp+20h] [rbp-88h]
  size_t v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+30h] [rbp-78h] BYREF
  __int128 v42; // [rsp+38h] [rbp-70h]
  void *dest; // [rsp+50h] [rbp-58h] BYREF
  __int128 v44; // [rsp+58h] [rbp-50h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v3 = -1;
  v4 = *(__int64 (**)(void))(*a1 + 160LL);
  v45 = __readfsqword(0x28u);
  if ( v4 != desktops_diff_source_t__::vfunc_20 )
    v3 = v4();
  v41 = 0;
  v42 = 0;
  v41 = qvector_reserve(&v41, 0, 1, 40);
  v6 = v41 + 40 * v42;
  *(_QWORD *)v6 = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)&v42 = v42 + 1;
  v7 = (_WORD *)qvector_reserve(v6, *(_QWORD *)v6, 3, 1);
  *(_QWORD *)v6 = v7;
  *(_QWORD *)(v6 + 8) = 3;
  *v7 = 24933;
  *(_BYTE *)(*(_QWORD *)v6 + 2LL) = 0;
  if ( *(_DWORD *)(v6 + 24) )
    jvalue_t_clear(v6 + 24);
  *(_QWORD *)(v6 + 32) = v3;
  *(_DWORD *)(v6 + 24) = 1;
  v8 = v42;
  v33 = *(_DWORD *)(a2 + 32);
  v37 = v41;
  if ( (_QWORD)v42 )
  {
    v9 = v41;
    v10 = 0;
    while ( !*(_QWORD *)(v9 + 8) || strcmp(*(const char **)v9, "merge_kind") )
    {
      ++v10;
      v9 += 40;
      if ( v8 == v10 )
        goto LABEL_40;
    }
    v11 = v9 + 24;
  }
  else
  {
LABEL_40:
    if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v8 + 1) )
    {
      v37 = qvector_reserve(&v41, v37, v8 + 1, 40);
      v8 = v42;
      v41 = v37;
    }
    v29 = v37 + 40 * v8;
    *(_QWORD *)v29 = 0;
    *(_DWORD *)(v29 + 24) = 0;
    *(_QWORD *)(v29 + 32) = 0;
    *(_OWORD *)(v29 + 8) = 0;
    *(_QWORD *)&v42 = v42 + 1;
    v30 = (void *)qvector_reserve(v29, *(_QWORD *)v29, 11, 1);
    *(_QWORD *)v29 = v30;
    v11 = v29 + 24;
    *(_QWORD *)(v11 - 16) = 11;
    qmemcpy(v30, "merge_kind", 10);
    *(_BYTE *)(*(_QWORD *)(v11 - 24) + 10LL) = 0;
  }
  if ( *(_DWORD *)v11 )
    jvalue_t_clear(v11);
  *(_QWORD *)(v11 + 8) = v33;
  *(_DWORD *)v11 = 1;
  v44 = 0;
  dest = nullptr;
  dest = (void *)qvector_reserve(&dest, 0, 13, 1);
  *(_QWORD *)&v44 = 13;
  strcpy((char *)dest, "Pseudocode-A");
  v14 = dest;
  if ( a3 )
  {
    v34 = v44;
    v15 = strlen(a3);
    v16 = v34;
    v17 = v15;
    if ( v34 )
    {
      v16 = v34 - 1;
      v18 = v15 + v34 - 1;
      v19 = v15 + v34;
      if ( *((_QWORD *)&v44 + 1) >= v15 + v34 )
      {
        *(_QWORD *)&v44 = v15 + v34;
        v14[v18] = 0;
        if ( v34 == 1 )
        {
LABEL_17:
          memmove(dest, a3, v17);
          goto LABEL_18;
        }
LABEL_36:
        v35 = v17;
        memmove((char *)dest + v17, dest, v16);
        v17 = v35;
        goto LABEL_17;
      }
    }
    else
    {
      v19 = v15 + 1;
      if ( *((_QWORD *)&v44 + 1) >= v15 + 1 )
      {
        *(_QWORD *)&v44 = v15 + 1;
        v14[v15] = 0;
        goto LABEL_17;
      }
      v18 = v15;
    }
    v40 = v15;
    v39 = v18;
    v38 = v16;
    v36 = v19;
    dest = (void *)qvector_reserve(&dest, v14, v19, 1);
    v16 = v38;
    v17 = v40;
    *(_QWORD *)&v44 = v36;
    *((_BYTE *)dest + v39) = 0;
    if ( !v38 )
      goto LABEL_17;
    goto LABEL_36;
  }
LABEL_18:
  v20 = &s1;
  if ( (_QWORD)v44 )
    v20 = (const char *)dest;
  v21 = callui(171, (_DWORD)v20, (unsigned int)&v41, (_DWORD)callui, v12, v13, a2);
  if ( v21 )
  {
    v22 = 0;
    if ( !*(_BYTE *)(v21 + 64) )
    {
      v22 = *(_QWORD *)(v21 + 56);
      if ( v22 )
        v22 += 104;
    }
  }
  else
  {
    v20 = (const char *)v32;
    v22 = sub_2757D0(a1, v32, a3);
  }
  if ( dest )
  {
    *(_QWORD *)&v44 = 0;
    qfree(dest, v20);
  }
  v23 = v41;
  if ( v41 )
  {
    v24 = v42;
    if ( (_QWORD)v42 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v23 + 40 * v25);
        jvalue_t_clear(v26 + 3);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27, v20);
        }
        ++v25;
        v23 = v41;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v23, v20);
  }
  return v22;
}
