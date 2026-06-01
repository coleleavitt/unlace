__int64 __fastcall sub_3F0C20(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v9; // rsi
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 *v15; // rcx
  __int64 *v16; // rax
  const char *v17; // rdx
  __int64 v18; // rsi
  const char *v19; // rdx
  __int64 v20; // r8
  const char *v21; // rcx
  const char *v22; // rdx
  const char *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdi
  void **v26; // rsi
  __int64 v27; // rcx
  void *v28; // rbp
  void **v29; // rdx
  void **v30; // rax
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 i; // rax
  const char *v36; // rdx
  __int64 v37; // rsi
  const char *v38; // rcx
  const char *v39; // rdx
  void *v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // [rsp+0h] [rbp-498h] BYREF
  void *v55; // [rsp+8h] [rbp-490h] BYREF
  __int64 v56; // [rsp+10h] [rbp-488h] BYREF
  void *v57; // [rsp+18h] [rbp-480h] BYREF
  void *v58; // [rsp+20h] [rbp-478h] BYREF
  __int128 v59; // [rsp+28h] [rbp-470h]
  void *ptr; // [rsp+40h] [rbp-458h] BYREF
  __int128 v61; // [rsp+48h] [rbp-450h]
  _BYTE v62[1032]; // [rsp+60h] [rbp-438h] BYREF
  unsigned __int64 v63; // [rsp+468h] [rbp-30h]

  v63 = __readfsqword(0x28u);
  if ( a3 )
    return 1;
  v3 = a1[8];
  if ( v3 == -1 || (v47 = netnode_valobj(a1[8], v62, 1024), v47 <= 0) )
  {
    v5 = a1[9];
    if ( v5 == -1 )
      goto LABEL_4;
  }
  else
  {
    netnode_set(v3, v62, v47);
    v5 = a1[9];
    if ( v5 == -1 )
    {
LABEL_4:
      v6 = a1[10];
      if ( v6 == -1 )
        goto LABEL_5;
      goto LABEL_59;
    }
  }
  v46 = netnode_valobj(v5, v62, 1024);
  if ( v46 <= 0 )
    goto LABEL_4;
  netnode_set(v5, v62, v46);
  v6 = a1[10];
  if ( v6 == -1 )
  {
LABEL_5:
    v7 = a1[18];
    if ( v7 == -1 )
      goto LABEL_6;
    goto LABEL_57;
  }
LABEL_59:
  v45 = netnode_valobj(v6, v62, 1024);
  if ( v45 <= 0 )
    goto LABEL_5;
  netnode_set(v6, v62, v45);
  v7 = a1[18];
  if ( v7 == -1 )
    goto LABEL_6;
LABEL_57:
  v44 = netnode_valobj(v7, v62, 1024);
  if ( v44 > 0 )
    netnode_set(v7, v62, v44);
LABEL_6:
  netnode_check(&v54, "$ attributes", 0, 0);
  if ( v54 == -1 )
    goto LABEL_7;
  v34 = a1[3];
  v61 = 0;
  ptr = nullptr;
  for ( i = sub_7BF580(&v54, v34, &ptr, 72); i > 0; i = sub_7BF600(&v54, a1[3], &ptr, v38, 72) )
  {
    v39 = haystack;
    if ( (_QWORD)v61 )
      v39 = (const char *)ptr;
    v40 = (void *)sub_7BF490(&v54, a1[3], v39, 72);
    v41 = a1[15];
    v42 = a1[14];
    if ( a1[16] < (unsigned __int64)(v41 + 1) )
    {
      v43 = qvector_reserve(a1 + 14, v42, v41 + 1, 8);
      a1[14] = v43;
      v42 = v43;
      v41 = a1[15];
    }
    *(_QWORD *)(v42 + 8 * v41) = v40;
    v36 = haystack;
    ++a1[15];
    if ( (_QWORD)v61 )
      v36 = (const char *)ptr;
    v37 = a1[3];
    v58 = v40;
    sub_7BF4E0(&v54, v37, v36, &v58, 8, 72);
    v38 = haystack;
    if ( (_QWORD)v61 )
      v38 = (const char *)ptr;
  }
  if ( !ptr )
  {
LABEL_7:
    if ( a1[17] == -1 )
      goto LABEL_8;
  }
  else
  {
    *(_QWORD *)&v61 = 0;
    qfree(ptr);
    if ( a1[17] == -1 )
    {
LABEL_8:
      if ( a1[20] == -1 )
        return 1;
      goto LABEL_10;
    }
  }
  if ( !(unsigned __int8)sub_7BEFD0(a1 + 17, a1[3], &v58, -2, 65) )
    goto LABEL_8;
  v33 = a1[17];
  ptr = v58;
  netnode_supset(v33, -2, &ptr, 8, 65, v32);
  if ( a1[20] == -1 )
    return 1;
LABEL_10:
  v9 = a1[3];
  v59 = 0;
  v58 = nullptr;
  if ( sub_7BF580(a1 + 20, v9, &v58, 72) > 0 )
  {
    do
    {
      v10 = haystack;
      if ( (_QWORD)v59 )
        v10 = (const char *)v58;
      v11 = sub_7BF490(a1 + 20, a1[3], v10, 72);
      v12 = (__int64 *)a1[21];
      v13 = a1[22];
      v14 = v11;
      v15 = &v12[v13];
      if ( v12 == v15 )
        goto LABEL_68;
      v16 = (__int64 *)a1[21];
      while ( v14 != *v16 )
      {
        if ( v15 == ++v16 )
          goto LABEL_68;
      }
      if ( v15 == v16 )
      {
LABEL_68:
        v48 = v13 + 1;
        if ( a1[23] < v48 )
        {
          v49 = qvector_reserve(a1 + 21, v12, v48, 8);
          v50 = a1[22];
          a1[21] = v49;
          v15 = (__int64 *)(v49 + 8 * v50);
        }
        *v15 = v14;
        ++a1[22];
      }
      v17 = haystack;
      if ( (_QWORD)v59 )
        v17 = (const char *)v58;
      v18 = a1[3];
      v56 = v14;
      sub_7BF4E0(a1 + 20, v18, v17, &v56, 8, 72);
      v19 = haystack;
      ptr = nullptr;
      v61 = 0;
      if ( (_QWORD)v59 )
        v19 = (const char *)v58;
      v20 = netnode_qhashstr(a1[20], &ptr, v19, 70);
      if ( v20 > 0 )
      {
        v21 = haystack;
        if ( (_QWORD)v61 )
          v21 = (const char *)ptr;
        v22 = haystack;
        if ( (_QWORD)v59 )
          v22 = (const char *)v58;
        sub_7BF4E0(a1 + 20, a1[3], v22, v21, v20, 70);
      }
      if ( ptr )
      {
        *(_QWORD *)&v61 = 0;
        qfree(ptr);
      }
      v23 = haystack;
      if ( (_QWORD)v59 )
        v23 = (const char *)v58;
    }
    while ( sub_7BF600(a1 + 20, a1[3], &v58, v23, 72) > 0 );
  }
  if ( (unsigned __int8)sub_7BEFD0(a1 + 20, a1[3], &v55, 1, 65) )
  {
    v25 = a1[20];
    v57 = v55;
    netnode_supset(v25, 1, &v57, 8, 65, v24);
    v26 = (void **)a1[21];
    v27 = a1[22];
    v28 = v55;
    v29 = &v26[v27];
    if ( v26 == v29 )
      goto LABEL_74;
    v30 = (void **)a1[21];
    while ( v55 != *v30 )
    {
      if ( v29 == ++v30 )
        goto LABEL_74;
    }
    if ( v29 == v30 )
    {
LABEL_74:
      if ( a1[23] < (unsigned __int64)(v27 + 1) )
      {
        v52 = qvector_reserve(a1 + 21, v26, v27 + 1, 8);
        v53 = a1[22];
        a1[21] = v52;
        v29 = (void **)(v52 + 8 * v53);
      }
      *v29 = v28;
      ++a1[22];
    }
  }
  if ( (unsigned __int8)sub_7BEFD0(a1 + 20, a1[3], &v55, 0, 65) )
  {
    v51 = a1[20];
    ptr = v55;
    netnode_supset(v51, 0, &ptr, 8, 65, v31);
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  return 1;
}
