unsigned __int64 __fastcall sub_8CB950(_QWORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  char *v8; // rax
  char *v9; // rsi
  __int64 v10; // rbp
  char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  char *v15; // r13
  __int64 v16; // r14
  char *v17; // rax
  char *v18; // r15
  char *v19; // rbx
  char *v20; // r13
  char *v21; // rbp
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  char *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  const char *v28; // r9
  size_t v29; // rax
  size_t v30; // rbp
  __int64 v31; // rbp
  _QWORD *v32; // r12
  void *v33; // rdi
  char *v34; // rdi
  char *v36; // rdi
  size_t v37; // r14
  char *v38; // r13
  char *v39; // [rsp+10h] [rbp-10C8h]
  int v40[2]; // [rsp+18h] [rbp-10C0h]
  __int64 v42; // [rsp+30h] [rbp-10A8h]
  _QWORD *v46; // [rsp+68h] [rbp-1070h] BYREF
  char *s1; // [rsp+70h] [rbp-1068h] BYREF
  __int128 v48; // [rsp+78h] [rbp-1060h]
  char s[4104]; // [rsp+90h] [rbp-1048h] BYREF
  unsigned __int64 v50; // [rsp+1098h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( !a3[5] )
    return v50 - __readfsqword(0x28u);
  v4 = a3[3];
  *(_QWORD *)v40 = a3 + 1;
  qdirname(s);
  s1 = nullptr;
  v48 = 0;
  v5 = strlen(s);
  v6 = v5 + 1;
  v7 = v5;
  v8 = (char *)qvector_reserve(&s1, 0, v5 + 1, 1);
  v9 = s;
  *(_QWORD *)&v48 = v6;
  s1 = v8;
  memmove(v8, s, v7);
  s1[v7] = 0;
  v10 = v4;
  do
  {
LABEL_3:
    v4 = std::_Rb_tree_increment(v4, v9);
    if ( *(_QWORD *)v40 == v4 )
      s[0] = 0;
    else
      qdirname(s);
    v11 = (char *)haystack;
    if ( (_QWORD)v48 )
      v11 = s1;
    v9 = s;
  }
  while ( !strcmp(v11, s) );
  v46 = sub_8CA330(a1, (__int64)&s1, 0, v12, v13, v14);
  if ( a4 )
  {
    sub_8C98D0((int)a1, v46, v10, v4);
    v15 = (char *)a2[2];
    if ( !v15 )
      goto LABEL_37;
  }
  else
  {
    sub_8C9CD0((__int64)a1, v46, v10, v4);
    v15 = (char *)a2[2];
    if ( !v15 )
    {
LABEL_37:
      v18 = (char *)(a2 + 1);
      goto LABEL_31;
    }
  }
  v16 = v48;
  v17 = (char *)haystack;
  v42 = v4;
  v18 = (char *)(a2 + 1);
  v19 = v15;
  v20 = s1;
  if ( (_QWORD)v48 )
    v17 = s1;
  v39 = v17;
  while ( 1 )
  {
    v26 = *((_QWORD *)v19 + 5);
    if ( !v16 )
      break;
    v21 = v19;
    if ( v26 )
      goto LABEL_23;
    v22 = v20;
    v23 = haystack;
LABEL_15:
    v24 = strcmp(v23, v22);
    v25 = *((char **)v19 + 2);
    v19 = *((char **)v19 + 3);
    if ( v24 >= 0 )
    {
      v18 = v21;
      v19 = v25;
    }
    if ( !v19 )
    {
      v4 = v42;
      v28 = v20;
      goto LABEL_26;
    }
  }
  if ( v26 )
  {
LABEL_22:
    v21 = v19;
LABEL_23:
    v23 = *((const char **)v19 + 4);
    v22 = v39;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v27 = *((_QWORD *)v19 + 2);
    if ( !v27 )
      break;
    v18 = v19;
    v19 = *((char **)v19 + 2);
    if ( *(_QWORD *)(v27 + 40) )
      goto LABEL_22;
  }
  v28 = v20;
  v38 = v19;
  v4 = v42;
  v18 = v38;
LABEL_26:
  if ( a2 + 1 == (_QWORD *)v18 )
    goto LABEL_31;
  if ( *((_QWORD *)v18 + 5) )
  {
    v9 = *((char **)v18 + 4);
    if ( !v16 )
      v28 = haystack;
LABEL_30:
    if ( strcmp(v28, v9) < 0 )
    {
LABEL_31:
      v9 = v18;
      sub_8CB7E0(a2, v18, (__int64)&s1, &v46);
    }
    if ( *(_QWORD *)v40 != v4 )
    {
LABEL_33:
      v29 = strlen(s);
      v30 = v29;
      if ( v29 )
      {
        v36 = s1;
        v37 = v29 + 1;
        if ( *((_QWORD *)&v48 + 1) < v29 + 1 )
        {
          s1 = (char *)qvector_reserve(&s1, s1, v29 + 1, 1);
          v36 = s1;
        }
        v9 = s;
        *(_QWORD *)&v48 = v37;
        memmove(v36, s, v30);
        s1[v30] = 0;
      }
      else
      {
        *(_QWORD *)&v48 = 0;
      }
      v10 = v4;
      goto LABEL_3;
    }
  }
  else
  {
    v9 = (char *)haystack;
    if ( v16 )
      goto LABEL_30;
    if ( *(_QWORD *)v40 != v4 )
      goto LABEL_33;
  }
  v31 = a3[2];
  while ( v31 )
  {
    v32 = (_QWORD *)v31;
    sub_8C86D0(*(_QWORD **)(v31 + 24));
    v33 = *(void **)(v31 + 32);
    v31 = *(_QWORD *)(v31 + 16);
    if ( v33 )
    {
      v32[5] = 0;
      qfree(v33);
    }
    operator delete(v32, 0x58u);
  }
  v34 = s1;
  a3[2] = 0;
  a3[3] = v4;
  a3[4] = v4;
  a3[5] = 0;
  if ( v34 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v34);
  }
  return v50 - __readfsqword(0x28u);
}
