unsigned __int64 __fastcall sub_6A270(_QWORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  void *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  const char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  _QWORD *v15; // r13
  __int64 v16; // r14
  const char *v17; // rax
  _QWORD *v18; // r15
  _QWORD *v19; // rbx
  const char *v20; // r13
  _QWORD *v21; // rbp
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  const char *v28; // r9
  const char *v29; // rsi
  size_t v30; // rax
  size_t v31; // rbp
  __int64 v32; // rbp
  _QWORD *v33; // r12
  void *v34; // rdi
  void *v35; // rdi
  void *v37; // rdi
  size_t v38; // r14
  _QWORD *v39; // r13
  const char *v40; // [rsp+10h] [rbp-10C8h]
  int v41[2]; // [rsp+18h] [rbp-10C0h]
  int v42[2]; // [rsp+20h] [rbp-10B8h]
  __int64 v44; // [rsp+30h] [rbp-10A8h]
  _QWORD *v48; // [rsp+68h] [rbp-1070h] BYREF
  void *ptr; // [rsp+70h] [rbp-1068h] BYREF
  __int128 v50; // [rsp+78h] [rbp-1060h]
  char s[4104]; // [rsp+90h] [rbp-1048h] BYREF
  unsigned __int64 v52; // [rsp+1098h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( !a3[5] )
    return v52 - __readfsqword(0x28u);
  v4 = a3[3];
  *(_QWORD *)v41 = a3 + 1;
  sub_94D70(s);
  ptr = nullptr;
  v50 = 0;
  v5 = strlen(s);
  v6 = v5 + 1;
  v7 = v5;
  v8 = (void *)sub_96080(&ptr, 0, v5 + 1, 1);
  *(_QWORD *)&v50 = v6;
  ptr = v8;
  memmove(v8, s, v7);
  *((_BYTE *)ptr + v7) = 0;
  v9 = v4;
  *(_QWORD *)v42 = a2 + 1;
  do
  {
LABEL_3:
    v10 = std::_Rb_tree_increment();
    if ( *(_QWORD *)v41 == v10 )
      s[0] = 0;
    else
      sub_94D70(s);
    v11 = haystack;
    if ( (_QWORD)v50 )
      v11 = (const char *)ptr;
  }
  while ( !strcmp(v11, s) );
  v48 = sub_68C40(a1, (__int64)&ptr, 0, v12, v13, v14);
  if ( a4 )
  {
    sub_681E0((int)a1, v48, v9, v10);
    v15 = (_QWORD *)a2[2];
    if ( !v15 )
      goto LABEL_37;
  }
  else
  {
    sub_685E0((__int64)a1, v48, v9, v10);
    v15 = (_QWORD *)a2[2];
    if ( !v15 )
    {
LABEL_37:
      v18 = *(_QWORD **)v42;
      goto LABEL_31;
    }
  }
  v16 = v50;
  v17 = haystack;
  v44 = v10;
  v18 = *(_QWORD **)v42;
  v19 = v15;
  v20 = (const char *)ptr;
  if ( (_QWORD)v50 )
    v17 = (const char *)ptr;
  v40 = v17;
  while ( 1 )
  {
    v26 = v19[5];
    if ( !v16 )
      break;
    v21 = v19;
    if ( v26 )
      goto LABEL_23;
    v22 = v20;
    v23 = haystack;
LABEL_15:
    v24 = strcmp(v23, v22);
    v25 = (_QWORD *)v19[2];
    v19 = (_QWORD *)v19[3];
    if ( v24 >= 0 )
    {
      v18 = v21;
      v19 = v25;
    }
    if ( !v19 )
    {
      v10 = v44;
      v28 = v20;
      goto LABEL_26;
    }
  }
  if ( v26 )
  {
LABEL_22:
    v21 = v19;
LABEL_23:
    v23 = (const char *)v19[4];
    v22 = v40;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v27 = v19[2];
    if ( !v27 )
      break;
    v18 = v19;
    v19 = (_QWORD *)v19[2];
    if ( *(_QWORD *)(v27 + 40) )
      goto LABEL_22;
  }
  v28 = v20;
  v39 = v19;
  v10 = v44;
  v18 = v39;
LABEL_26:
  if ( *(_QWORD **)v42 == v18 )
    goto LABEL_31;
  if ( v18[5] )
  {
    v29 = (const char *)v18[4];
    if ( !v16 )
      v28 = haystack;
LABEL_30:
    if ( strcmp(v28, v29) < 0 )
LABEL_31:
      sub_6A100(a2, v18, (__int64)&ptr, &v48);
    if ( *(_QWORD *)v41 != v10 )
    {
LABEL_33:
      v30 = strlen(s);
      v31 = v30;
      if ( v30 )
      {
        v37 = ptr;
        v38 = v30 + 1;
        if ( *((_QWORD *)&v50 + 1) < v30 + 1 )
        {
          ptr = (void *)sub_96080(&ptr, ptr, v30 + 1, 1);
          v37 = ptr;
        }
        *(_QWORD *)&v50 = v38;
        memmove(v37, s, v31);
        *((_BYTE *)ptr + v31) = 0;
      }
      else
      {
        *(_QWORD *)&v50 = 0;
      }
      v9 = v10;
      goto LABEL_3;
    }
  }
  else
  {
    v29 = haystack;
    if ( v16 )
      goto LABEL_30;
    if ( *(_QWORD *)v41 != v10 )
      goto LABEL_33;
  }
  v32 = a3[2];
  while ( v32 )
  {
    v33 = (_QWORD *)v32;
    sub_67190(*(_QWORD **)(v32 + 24));
    v34 = *(void **)(v32 + 32);
    v32 = *(_QWORD *)(v32 + 16);
    if ( v34 )
    {
      v33[5] = 0;
      j__free(v34);
    }
    operator delete(v33, 0x58u);
  }
  v35 = ptr;
  a3[2] = 0;
  a3[3] = v10;
  a3[4] = v10;
  a3[5] = 0;
  if ( v35 )
  {
    *(_QWORD *)&v50 = 0;
    j__free(v35);
  }
  return v52 - __readfsqword(0x28u);
}

