unsigned __int64 __fastcall sub_2CB730(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  __int64 v19; // rdi
  unsigned __int8 (*v20)(void); // rax
  __int64 v21; // rdi
  __int64 v22; // rbp
  unsigned __int8 (*v23)(void); // rax
  __int64 *v25; // rbp
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // r13
  _QWORD *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // rax
  _QWORD *v41; // rdi
  unsigned __int64 v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+8h] [rbp-80h]
  unsigned __int64 i; // [rsp+8h] [rbp-80h]
  __int64 *v47; // [rsp+18h] [rbp-70h]
  __int64 *v48; // [rsp+20h] [rbp-68h]
  __int64 *v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h] BYREF
  __int128 v51; // [rsp+38h] [rbp-50h]
  unsigned __int64 v52; // [rsp+48h] [rbp-40h]

  v4 = a1[14] == 0;
  v52 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( !v4 )
  {
    v50 = 0;
    v51 = 0;
    sub_2CB360(&v50, v5);
    v25 = a1 + 2;
    for ( i = 0; i < a1[1]; v25 += 3 )
    {
      switch_dbctx(*(int *)(a2[i] + 8LL));
      v26 = *v25;
      v27 = *v25 + 200 * v25[1];
      if ( *v25 != v27 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v50 + 192LL * *(_QWORD *)(v26 + 192)) + 8LL))(
            v50 + 192LL * *(_QWORD *)(v26 + 192),
            v26);
          v26 += 200;
        }
        while ( v27 != v26 );
        v27 = *v25;
      }
      if ( v27 )
      {
        v28 = v25[1];
        if ( v28 )
        {
          v29 = 0;
          do
          {
            v30 = (_QWORD *)(v27 + 200 * v29);
            *v30 = &off_4CE648;
            cleanup_argloc(v30 + 18);
            v31 = v30[13];
            if ( v31 )
            {
              v30[14] = 0;
              qfree(v31);
            }
            clear_tinfo_t(v30 + 12);
            v32 = v30[9];
            if ( v32 )
            {
              v30[10] = 0;
              qfree(v32);
            }
            ++v29;
            cleanup_argloc(v30 + 6);
            cleanup_argloc(v30 + 1);
            v27 = *v25;
          }
          while ( v28 != v29 );
        }
        v25[1] = 0;
        qfree(v27);
        *v25 = 0;
        v25[2] = 0;
      }
      v33 = a2[i];
      sub_2CB360((__int64 *)(v33 + 40), v5 - a1[14]);
      if ( v5 )
      {
        v34 = 0;
        v35 = 0;
        do
        {
          if ( *(_DWORD *)(a1[11] + 4 * v34) )
          {
            v36 = v35 + 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v33 + 40) + 192 * v35) + 8LL))(
              *(_QWORD *)(v33 + 40) + 192 * v35,
              v50 + 192 * v34);
            v35 = v36;
          }
          ++v34;
        }
        while ( v34 != v5 );
      }
      else
      {
        v35 = 0;
      }
      if ( *(_QWORD *)(v33 + 48) != v35 )
      {
        if ( !under_debugger )
          sub_37EEE0(1962);
        BUG();
      }
      ++i;
    }
    v37 = v50;
    if ( v50 )
    {
      v38 = v51;
      if ( (_QWORD)v51 )
      {
        v39 = 0;
        do
        {
          v40 = 3 * v39++;
          v41 = (_QWORD *)((v40 << 6) + v37);
          *v41 = &off_4CE670;
          sub_2B6AB0((__int64)v41);
          v37 = v50;
        }
        while ( v38 != v39 );
      }
      *(_QWORD *)&v51 = 0;
      qfree(v37);
      if ( a3 )
        goto LABEL_14;
      return v52 - __readfsqword(0x28u);
    }
LABEL_13:
    if ( a3 )
    {
LABEL_14:
      v47 = nullptr;
      v16 = *a2;
      v48 = (__int64 *)(*a2 + 40LL);
      v43 = a2[1];
      v49 = (__int64 *)(v43 + 40);
      if ( a1[1] > 2u )
        v47 = (__int64 *)(a2[2] + 40LL);
      goto LABEL_16;
    }
    return v52 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v42 = 0;
    v6 = a1 + 2;
    do
    {
      switch_dbctx(*(int *)(a2[v42] + 8LL));
      v7 = a2[v42];
      sub_2CB360((__int64 *)(v7 + 40), v5);
      v8 = *v6;
      v9 = *v6 + 200 * v6[1];
      if ( *v6 != v9 )
      {
        do
        {
          v10 = *(_QWORD *)(v8 + 192);
          v11 = v8;
          v8 += 200;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 192 * v10) + 8LL))(
            *(_QWORD *)(v7 + 40) + 192 * v10,
            v11);
        }
        while ( v8 != v9 );
        v9 = *v6;
      }
      if ( v9 )
      {
        v12 = v6[1];
        if ( v12 )
        {
          v13 = 0;
          do
          {
            v14 = 5 * v13++;
            v15 = (_QWORD *)(v9 + 40 * v14);
            *v15 = &off_4CE670;
            sub_2B6AB0((__int64)v15);
            v9 = *v6;
          }
          while ( v12 != v13 );
        }
        v6[1] = 0;
        qfree(v9);
        *v6 = 0;
        v6[2] = 0;
      }
      ++v42;
      v6 += 3;
    }
    while ( v42 < a1[1] );
    goto LABEL_13;
  }
  if ( !a3 )
    return v52 - __readfsqword(0x28u);
  v47 = nullptr;
  v16 = *a2;
  v43 = a2[1];
  v48 = (__int64 *)(*a2 + 40LL);
  v49 = (__int64 *)(v43 + 40);
LABEL_16:
  v17 = *(_QWORD *)(v16 + 48);
  if ( !v17 )
    goto LABEL_31;
  v18 = 0;
  v17 = 0;
  do
  {
    v21 = 192 * v18 + *(_QWORD *)(v16 + 40);
    v22 = 192 * v18;
    v23 = **(unsigned __int8 (***)(void))v21;
    if ( (char *)v23 == (char *)sub_2A9450 )
    {
      if ( *(_DWORD *)(v21 + 40) == 2 )
        goto LABEL_21;
    }
    else if ( v23() )
    {
      goto LABEL_21;
    }
    v19 = v22 + *(_QWORD *)(v43 + 40);
    v20 = **(unsigned __int8 (***)(void))v19;
    if ( (char *)v20 == (char *)sub_2A9450 )
    {
      if ( *(_DWORD *)(v19 + 40) != 2 )
        goto LABEL_25;
    }
    else if ( !v20() )
    {
      goto LABEL_25;
    }
LABEL_21:
    if ( v17 < v18 )
    {
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 192 * v17) + 8LL))(
        *(_QWORD *)(v16 + 40) + 192 * v17,
        v22 + *(_QWORD *)(v16 + 40));
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v43 + 40) + 192 * v17) + 8LL))(
        *(_QWORD *)(v43 + 40) + 192 * v17,
        v22 + *(_QWORD *)(v43 + 40));
      if ( v47 )
        (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*v47 + 192 * v17) + 8LL))(
          *v47 + 192 * v17,
          v22 + *v47);
    }
    ++v17;
LABEL_25:
    ++v18;
  }
  while ( v18 < *(_QWORD *)(v16 + 48) );
  v16 = *a2;
LABEL_31:
  switch_dbctx(*(int *)(v16 + 8));
  sub_2CB360(v48, v17);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  sub_2CB360(v49, v17);
  if ( !v47 )
    return v52 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  return sub_2CB360(v47, v17);
}
