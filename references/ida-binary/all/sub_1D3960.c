unsigned __int64 __fastcall sub_1D3960(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int64 (__fastcall *a5)(__int64 *))
{
  const char *v5; // rsi
  char v6; // al
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v14; // rbx
  char *v15; // r15
  __int64 v16; // r13
  char *v17; // rbp
  const char *v18; // rsi
  char *v19; // r12
  const char *v20; // rdi
  int v21; // eax
  char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // rsi
  const char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r12
  size_t v29; // r13
  const char *v30; // rsi
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  void *v39; // rax
  const char *v40; // rsi
  const char *v41; // rdi
  unsigned int v42; // eax
  char *s1; // [rsp+8h] [rbp-B0h]
  char *v44; // [rsp+10h] [rbp-A8h]
  const char *v46; // [rsp+20h] [rbp-98h]
  _BOOL4 v47; // [rsp+28h] [rbp-90h]
  unsigned int v48; // [rsp+2Ch] [rbp-8Ch]
  __int64 v49; // [rsp+30h] [rbp-88h]
  __int64 v54; // [rsp+58h] [rbp-60h]
  __int64 v55; // [rsp+60h] [rbp-58h] BYREF
  __int128 v56; // [rsp+68h] [rbp-50h]
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v46 = nullptr;
  do
  {
    v5 = v46;
    v48 = *(_DWORD *)(a2 + 4LL * (_QWORD)v46) | 0xFF000000;
    if ( (*(_DWORD *)(a3 + 4LL * (_QWORD)v46) | 0xFF000000) == v48 )
      goto LABEL_13;
    v55 = 0;
    v56 = 0;
    v6 = a5(&v55);
    v7 = v55;
    if ( !v6 )
      goto LABEL_4;
    v49 = v55 + 48 * v56;
    if ( v49 == v55 )
      goto LABEL_4;
    v14 = v55;
    v44 = (char *)(a1 + 1);
    do
    {
      v47 = 1;
      s1 = (char *)&::s1;
      if ( *(_QWORD *)(v14 + 32) )
      {
        s1 = *(char **)(v14 + 24);
        v47 = strcmp(s1, "color") && strcmp(s1, "background-color") != 0;
      }
      v15 = (char *)a1[2];
      if ( !v15 )
      {
        v17 = (char *)(a1 + 1);
        goto LABEL_38;
      }
      v16 = *(_QWORD *)(v14 + 8);
      v17 = (char *)(a1 + 1);
      while ( 1 )
      {
        v23 = *((_QWORD *)v15 + 5);
        if ( !v16 )
          break;
        v18 = *(const char **)v14;
        v19 = v15;
        v20 = &::s1;
        if ( v23 )
          goto LABEL_23;
LABEL_24:
        v21 = strcmp(v20, v18);
        v22 = *((char **)v15 + 2);
        v15 = *((char **)v15 + 3);
        if ( v21 >= 0 )
        {
          v17 = v19;
          v15 = v22;
        }
        if ( !v15 )
          goto LABEL_33;
      }
      if ( v23 )
      {
LABEL_31:
        v18 = &::s1;
LABEL_23:
        v20 = *((const char **)v15 + 4);
        v19 = v15;
        goto LABEL_24;
      }
      while ( 1 )
      {
        v24 = *((_QWORD *)v15 + 2);
        if ( !v24 )
          break;
        v17 = v15;
        v15 = *((char **)v15 + 2);
        if ( *(_QWORD *)(v24 + 40) )
          goto LABEL_31;
      }
      v17 = v15;
LABEL_33:
      if ( v17 == v44 )
        goto LABEL_38;
      if ( *((_QWORD *)v17 + 5) )
      {
        v25 = *((const char **)v17 + 4);
        v26 = &::s1;
        if ( v16 )
          goto LABEL_36;
LABEL_37:
        if ( strcmp(v26, v25) < 0 )
        {
LABEL_38:
          v27 = operator new(0x50u);
          *(_QWORD *)(v27 + 32) = 0;
          v28 = v27;
          *(_OWORD *)(v27 + 40) = 0;
          v29 = *(_QWORD *)(v14 + 8);
          if ( v29 )
          {
            v39 = (void *)qalloc_or_throw(*(_QWORD *)(v14 + 8));
            *(_QWORD *)(v28 + 32) = v39;
            *(_QWORD *)(v28 + 48) = v29;
            memcpy(v39, *(const void **)v14, v29);
            *(_QWORD *)(v28 + 40) = v29;
          }
          *(_QWORD *)(v28 + 56) = 0;
          v30 = v17;
          *(_OWORD *)(v28 + 64) = 0;
          v31 = (char *)sub_1D3420(a1, v17, v28 + 32);
          v17 = v31;
          if ( v32 )
          {
            if ( v31 || v44 == (char *)v32 )
            {
              v33 = 1;
            }
            else
            {
              v40 = &::s1;
              if ( *(_QWORD *)(v32 + 40) )
                v40 = *(const char **)(v32 + 32);
              v41 = &::s1;
              if ( *(_QWORD *)(v28 + 40) )
                v41 = *(const char **)(v28 + 32);
              v54 = v32;
              v42 = strcmp(v41, v40);
              v32 = v54;
              v33 = v42 >> 31;
            }
            v17 = (char *)v28;
            std::_Rb_tree_insert_and_rebalance(v33, v28, v32, v44);
            ++a1[5];
          }
          else if ( v28 )
          {
            v38 = *(_QWORD *)(v28 + 32);
            if ( v38 )
            {
              *(_QWORD *)(v28 + 40) = 0;
              qfree(v38, v30);
            }
            operator delete((void *)v28, 0x50u);
          }
        }
      }
      else
      {
        v25 = &::s1;
        if ( v16 )
        {
LABEL_36:
          v26 = *(const char **)v14;
          goto LABEL_37;
        }
      }
      v34 = *((_QWORD *)v17 + 8);
      v35 = *((_QWORD *)v17 + 7);
      if ( *((_QWORD *)v17 + 9) < (unsigned __int64)(v34 + 1) )
      {
        v37 = qvector_reserve(v17 + 56, v35, v34 + 1, 24);
        *((_QWORD *)v17 + 7) = v37;
        v34 = *((_QWORD *)v17 + 8);
        v35 = v37;
      }
      v36 = v35 + 24 * v34;
      v5 = s1;
      *(_QWORD *)v36 = 0;
      *(_OWORD *)(v36 + 8) = 0;
      ++*((_QWORD *)v17 + 8);
      sub_5264C0(v36, s1, v48, v47);
      v14 += 48;
    }
    while ( v49 != v14 );
    v7 = v55;
LABEL_4:
    if ( v7 )
    {
      v8 = v56;
      if ( (_QWORD)v56 )
      {
        v9 = 0;
        do
        {
          v10 = (__int64 *)(v7 + 48 * v9);
          v11 = v10[3];
          if ( v11 )
          {
            v10[4] = 0;
            qfree(v11, v5);
          }
          v12 = *v10;
          if ( *v10 )
          {
            v10[1] = 0;
            qfree(v12, v5);
          }
          ++v9;
          v7 = v55;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v56 = 0;
      qfree(v7, v5);
    }
LABEL_13:
    ++v46;
  }
  while ( a4 != v46 );
  return v57 - __readfsqword(0x28u);
}
