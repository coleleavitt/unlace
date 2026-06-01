__int64 (__fastcall **__fastcall sub_97B860(_QWORD *a1))()
{
  __int64 v1; // rsi
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // r12
  __int64 v10; // rdi
  void *v11; // rdi
  void *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r14
  void *v29; // r13
  __int64 v30; // rsi
  __int64 *v31; // rbp
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  bool v35; // zf
  __int64 *v36; // rbp
  __int64 *v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v42; // rdi

  v1 = a1[90];
  *a1 = off_1C70328;
  if ( v1 )
  {
    v3 = *(unsigned int *)(v1 - 4);
    if ( !(_DWORD)v3 )
      goto LABEL_6;
    v4 = 16 * v3;
    v5 = 0;
    do
    {
      v6 = v5 + v1;
      v5 += 16;
      sub_182EF00(a1[91], v6);
      v1 = a1[90];
    }
    while ( v4 != v5 );
    if ( v1 )
LABEL_6:
      *(_DWORD *)(v1 - 4) = 0;
  }
  v7 = a1[117];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[116];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 112);
  sub_182CBA0(v9, a1 + 114);
  v10 = a1[110];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (void *)a1[107];
  if ( v11 )
    sub_186B220(v11);
  sub_182EF00(a1[103], a1 + 104);
  sub_182EF00(a1[100], a1 + 101);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 96);
  sub_182CBA0(v12, a1 + 98);
  v13 = a1[95];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[94];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[92];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[90];
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( !(_DWORD)v17 )
      goto LABEL_26;
    v18 = 16 * v17;
    v19 = 0;
    do
    {
      v20 = v19 + v16;
      v19 += 16;
      sub_182EF00(a1[91], v20);
      v16 = a1[90];
    }
    while ( v18 != v19 );
    if ( v16 )
    {
LABEL_26:
      *(_DWORD *)(v16 - 4) = 0;
      sub_186B220((void *)(v16 - 8));
    }
  }
  v21 = a1[88];
  if ( v21 )
  {
    v22 = *(unsigned int *)(v21 - 4);
    if ( !(_DWORD)v22 )
      goto LABEL_32;
    v23 = 16 * v22;
    v24 = 0;
    do
    {
      v25 = v24 + v21;
      v24 += 16;
      sub_182EF00(a1[89], v25);
      v21 = a1[88];
    }
    while ( v23 != v24 );
    if ( v21 )
    {
LABEL_32:
      *(_DWORD *)(v21 - 4) = 0;
      sub_186B220((void *)(v21 - 8));
    }
  }
  v26 = a1[87];
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 - 4);
    if ( (_DWORD)v27 )
    {
      v28 = v26 + 32 * v27;
      do
      {
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26);
        v30 = v26 + 16;
        v26 += 32;
        sub_182CBA0(v29, v30);
      }
      while ( v26 != v28 );
      v26 = a1[87];
    }
    sub_186B220((void *)(v26 - 8));
  }
  v31 = (__int64 *)a1[86];
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 >= v32 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = a1[85];
          v35 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v35 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_46;
      }
      sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_46:
    v31 = (__int64 *)a1[86];
    if ( v31 )
LABEL_47:
      sub_186B220(v31 - 1);
  }
  v36 = (__int64 *)a1[84];
  if ( v36 )
  {
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 >= v37 )
      goto LABEL_56;
    do
    {
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 )
        {
          v39 = a1[83];
          v35 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v35 )
            break;
        }
        if ( ++v36 >= v37 )
          goto LABEL_55;
      }
      sub_15D7BC0(v39, v38);
      ++v36;
    }
    while ( v36 < v37 );
LABEL_55:
    v36 = (__int64 *)a1[84];
    if ( v36 )
LABEL_56:
      sub_186B220(v36 - 1);
  }
  sub_182EDF0(a1 + 8);
  v40 = a1[5];
  result = off_1C70148;
  *a1 = off_1C70148;
  if ( v40 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v40 - 8));
  v42 = a1[4];
  if ( v42 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v42 - 8));
  return result;
}

