__int64 __fastcall sub_19D620(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  char tinfo_details; // r9
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rax
  int **v9; // rdx
  int *v10; // rax
  __int64 v11; // rdi
  char v12; // si
  char v13; // r12
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r13
  _QWORD *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r12
  _QWORD *v23; // rdx
  unsigned __int64 *v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ebp
  unsigned int v30; // eax
  unsigned int v31; // r13d
  unsigned int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rbp
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // [rsp+0h] [rbp-98h] BYREF
  __int128 v40; // [rsp+8h] [rbp-90h]
  __int64 v41; // [rsp+18h] [rbp-80h]
  __int64 v42; // [rsp+20h] [rbp-78h] BYREF
  __int64 v43; // [rsp+28h] [rbp-70h] BYREF
  __int128 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+40h] [rbp-58h]
  __int128 v46; // [rsp+48h] [rbp-50h]
  char v47; // [rsp+58h] [rbp-40h]
  unsigned __int64 v48; // [rsp+68h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 328);
  v48 = __readfsqword(0x28u);
  if ( !(_BYTE)v3 )
    goto LABEL_25;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 16;
  v40 = 0;
  v44 = 0;
  v46 = 0;
  tinfo_details = get_tinfo_details(v3, 12, &v39);
  if ( !tinfo_details || !(_QWORD)v40 )
  {
LABEL_14:
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    cleanup_argloc(&v43);
    clear_tinfo_t(&v42);
    v15 = v39;
    if ( v39 )
    {
      v16 = v40;
      if ( (_QWORD)v40 )
      {
        v17 = 0;
        do
        {
          v18 = (_QWORD *)(v15 + 80 * v17);
          clear_tinfo_t(v18 + 8);
          v19 = v18[5];
          if ( v19 )
          {
            v18[6] = 0;
            qfree(v19);
          }
          v20 = v18[2];
          if ( v20 )
          {
            v18[3] = 0;
            qfree(v20);
          }
          ++v17;
          cleanup_argloc(v18);
          v15 = v39;
        }
        while ( v16 != v17 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v15);
    }
LABEL_25:
    v21 = sub_1108E0(*(_QWORD *)(a2 + 784), 0);
    v22 = v21;
    if ( !v21 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      BUG();
    }
    ++*(_DWORD *)(v21 + 24);
    v23 = (_QWORD *)a1[3];
    v24 = *(unsigned __int64 **)v21;
    v25 = v23[1];
    if ( v25 )
    {
      v30 = sub_19D0B0((__int64)a1, a2, v24, *(_DWORD *)(*v23 + 4 * v25 - 4));
      v26 = (_QWORD *)a1[10];
      v31 = v30;
      v27 = v26[1];
      if ( !v27 )
        goto LABEL_32;
    }
    else
    {
      v26 = (_QWORD *)a1[10];
      v27 = v26[1];
      if ( !v27 )
      {
LABEL_28:
        v28 = 0;
LABEL_29:
        sub_104E10(v22);
        return v28;
      }
      v31 = 0;
    }
    v32 = sub_19D0B0((__int64)a1, a2, v24, *(_DWORD *)(*v26 + 4 * v27 - 4));
    if ( v32 )
    {
      if ( !v31 )
        v31 = v32;
      goto LABEL_34;
    }
LABEL_32:
    if ( !v31 )
      goto LABEL_28;
    v32 = v31;
LABEL_34:
    if ( v31 >= *(_DWORD *)(a2 + 64) )
      sub_195140();
    a1[4] = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * v31);
    if ( v32 >= *(_DWORD *)(a2 + 64) )
      sub_195140();
    a1[11] = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * v32);
    sub_19D2A0(a1);
    sub_19D2A0(a1 + 7);
    v28 = 1;
    if ( !a1[1] )
      LOBYTE(v28) = a1[8] != 0;
    goto LABEL_29;
  }
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v39 + 80 * v7;
    if ( *(_DWORD *)v8 == 2 )
    {
      v9 = *(int ***)(v8 + 8);
      v10 = *v9;
      v11 = (__int64)&(*v9)[6 * (_QWORD)v9[1]];
      if ( *v9 != (int *)v11 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          while ( 1 )
          {
            v14 = *v10;
            if ( (unsigned int)(*v10 - 3) <= 1 )
              break;
            v10 += 6;
            v12 |= v14 == 1;
            if ( (int *)v11 == v10 )
              goto LABEL_11;
          }
          v10 += 6;
          v13 = tinfo_details;
        }
        while ( (int *)v11 != v10 );
LABEL_11:
        if ( v13 && v12 )
          break;
      }
    }
    v7 = ++v6;
    if ( v6 >= (unsigned __int64)v40 )
      goto LABEL_14;
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  cleanup_argloc(&v43);
  clear_tinfo_t(&v42);
  v33 = v39;
  if ( v39 )
  {
    v34 = v40;
    if ( (_QWORD)v40 )
    {
      v35 = 0;
      do
      {
        v36 = (_QWORD *)(v33 + 80 * v35);
        clear_tinfo_t(v36 + 8);
        v37 = v36[5];
        if ( v37 )
        {
          v36[6] = 0;
          qfree(v37);
        }
        v38 = v36[2];
        if ( v38 )
        {
          v36[3] = 0;
          qfree(v38);
        }
        ++v35;
        cleanup_argloc(v36);
        v33 = v39;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v33);
  }
  return 0;
}
