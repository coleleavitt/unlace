unsigned __int64 __fastcall sub_4B5050(const char *src, _QWORD *a2, unsigned __int8 a3, double a4, __m128 a5)
{
  unsigned __int64 v7; // rbp
  bool v8; // zf
  __int16 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  size_t v12; // rax
  size_t v13; // r12
  size_t v14; // rbx
  int *v15; // r15
  __int64 v16; // rbp
  char *v17; // r14
  char *v18; // rax
  int *v19; // rbx
  int *v20; // r12
  const char *v21; // rsi
  const char *v22; // rdi
  int v23; // eax
  int *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const char *v27; // rsi
  size_t v28; // rax
  size_t v29; // r12
  size_t v30; // rbx
  char **v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 **v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  char *v42; // [rsp+0h] [rbp-A0h]
  char **p_s2; // [rsp+20h] [rbp-80h] BYREF
  __int64 v45; // [rsp+28h] [rbp-78h] BYREF
  __int128 v46; // [rsp+30h] [rbp-70h]
  char *s2; // [rsp+48h] [rbp-58h] BYREF
  __int128 v48; // [rsp+50h] [rbp-50h]
  unsigned __int64 v49; // [rsp+60h] [rbp-40h]

  v7 = 0;
  v49 = __readfsqword(0x28u);
  v8 = a2[1] == 0;
  v46 = 0;
  v45 = 0;
  if ( !v8 )
  {
    do
    {
      LOWORD(s2) = sub_4B31A0(*a2 + 24 * v7, 0.0, a5);
      v9 = (__int16)s2;
      v10 = v46;
      v11 = v45;
      if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
      {
        v45 = qvector_reserve(&v45, v45, v46 + 1, 2);
        v11 = v45;
        v10 = v46;
      }
      *(_WORD *)(v11 + 2 * v10) = v9;
      ++v7;
      *(_QWORD *)&v46 = v46 + 1;
    }
    while ( v7 < a2[1] );
  }
  s2 = nullptr;
  v48 = 0;
  if ( src )
  {
    v12 = strlen(src);
    v13 = v12 + 1;
    v14 = v12;
    s2 = (char *)qvector_reserve(&s2, 0, v12 + 1, 1);
    *(_QWORD *)&v48 = v13;
    memmove(s2, src, v14);
    s2[v14] = 0;
  }
  v15 = (int *)qword_8D1CB0;
  if ( !qword_8D1CB0 )
  {
    v19 = &dword_8D1CA8;
    goto LABEL_28;
  }
  v16 = v48;
  v17 = s2;
  v18 = (char *)&s1;
  if ( (_QWORD)v48 )
    v18 = s2;
  v42 = v18;
  v19 = &dword_8D1CA8;
  while ( 1 )
  {
    v25 = *((_QWORD *)v15 + 5);
    if ( !v16 )
      break;
    if ( v25 )
      goto LABEL_21;
    v20 = v15;
    v21 = v17;
    v22 = &s1;
LABEL_14:
    v23 = strcmp(v22, v21);
    v24 = *((int **)v15 + 2);
    v15 = *((int **)v15 + 3);
    if ( v23 >= 0 )
    {
      v19 = v20;
      v15 = v24;
    }
    if ( !v15 )
      goto LABEL_23;
  }
  if ( v25 )
  {
LABEL_21:
    v22 = *((const char **)v15 + 4);
    v21 = v42;
    v20 = v15;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v26 = *((_QWORD *)v15 + 2);
    if ( !v26 )
      break;
    v19 = v15;
    v15 = *((int **)v15 + 2);
    if ( *(_QWORD *)(v26 + 40) )
      goto LABEL_21;
  }
  v19 = v15;
LABEL_23:
  if ( v19 == &dword_8D1CA8 )
    goto LABEL_28;
  if ( *((_QWORD *)v19 + 5) )
  {
    v27 = *((const char **)v19 + 4);
    if ( !v16 )
      v17 = (char *)&s1;
LABEL_27:
    if ( strcmp(v17, v27) < 0 )
    {
LABEL_28:
      p_s2 = &s2;
      v19 = (int *)sub_4B1E90(&qword_8D1CA0, v19, (__int64 **)&p_s2);
    }
  }
  else
  {
    v27 = &s1;
    if ( v16 )
      goto LABEL_27;
  }
  sub_4B0490((__int64)(v19 + 14), a3, (__int64)&v45);
  if ( s2 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(s2, (const char *)a3);
  }
  s2 = nullptr;
  v48 = 0;
  if ( src )
  {
    v28 = strlen(src);
    v29 = v28 + 1;
    v30 = v28;
    s2 = (char *)qvector_reserve(&s2, 0, v28 + 1, 1);
    *(_QWORD *)&v48 = v29;
    memmove(s2, src, v30);
    s2[v30] = 0;
  }
  v31 = &s2;
  v32 = sub_4B1590((__int64)&qword_8D1CA0, (__int64)&s2);
  v33 = v32[9];
  if ( !v33 || !*(_QWORD *)(v33 + 8) )
  {
    v36 = v32[8];
    if ( !v36 || !*(_QWORD *)(v36 + 8) )
    {
      v37 = v32[7];
      if ( !v37 || !*(_QWORD *)(v37 + 8) )
      {
        v38 = std::_Rb_tree_rebalance_for_erase(v32, &dword_8D1CA8);
        v39 = (__int64 **)(v38 + 56);
        v40 = (_QWORD *)v38;
        sub_4B03E0((__int64 **)(v38 + 56), (_BYTE *)&dword_0 + 1);
        sub_4B03E0(v39, nullptr);
        v41 = v40[4];
        if ( v41 )
        {
          v40[5] = 0;
          qfree(v41, nullptr);
        }
        v31 = (char **)off_50;
        operator delete(v40, 0x50u);
        --qword_8D1CC8;
      }
    }
  }
  if ( s2 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(s2, (const char *)v31);
  }
  v34 = sub_534430(src);
  if ( v34 )
    sub_5378C0(v34);
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, (const char *)v31);
  }
  return v49 - __readfsqword(0x28u);
}
