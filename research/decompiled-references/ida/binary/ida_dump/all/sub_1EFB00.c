__int64 __fastcall sub_1EFB00(__int64 a1, __int64 *a2, int *a3, int *a4, int a5, char a6)
{
  int v6; // eax
  bool v7; // zf
  __int64 v8; // r13
  int *v9; // r12
  int v10; // eax
  int *v11; // rdi
  int v12; // ebp
  int v13; // r10d
  int v14; // r14d
  int v15; // edx
  int v16; // esi
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rcx
  int *v20; // rdx
  int *v21; // rax
  int *v22; // rcx
  int v23; // r14d
  int v24; // ebp
  __int64 v25; // rax
  int v27; // r14d
  __int64 v28; // rax
  int *v29; // rbp
  int v30; // r15d
  __int64 range; // rax
  int v32; // eax
  int v33; // edi
  int *v34; // rax
  int v35; // r15d
  bool v36; // r15
  int tinfo_property; // eax
  int v38; // [rsp+Ch] [rbp-BCh]
  int v39; // [rsp+Ch] [rbp-BCh]
  int *v40; // [rsp+10h] [rbp-B8h]
  int v43; // [rsp+28h] [rbp-A0h]
  int v44; // [rsp+28h] [rbp-A0h]
  int *v47; // [rsp+40h] [rbp-88h] BYREF
  __int128 v48; // [rsp+48h] [rbp-80h]
  __int64 v49; // [rsp+60h] [rbp-68h]
  __int128 v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+78h] [rbp-50h]
  int v52; // [rsp+80h] [rbp-48h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v6 = a3[22];
  v7 = *a3 == 2;
  v53 = __readfsqword(0x28u);
  v8 = *a2;
  v38 = v6;
  v40 = a3;
  if ( v7 && v8 > 0 )
  {
    v34 = (int *)qalloc_or_throw();
    *v34 = 0;
    v9 = v34;
    copy_argloc();
    if ( (unsigned __int8)sub_1C55E0(v9, a1, v8, v38, 1) )
    {
      v35 = v38 - v8;
      v40 = v9;
      v8 = 0;
      v38 = v35;
    }
  }
  else
  {
    v9 = nullptr;
  }
  v47 = nullptr;
  v48 = 0;
  v10 = sub_1C37C0(a4, (__int64 *)&v47, a5, (__int64)v40, v38, 1);
  v11 = v47;
  if ( !v10 )
  {
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
    goto LABEL_46;
  }
  if ( v38 != *v47 )
  {
    v49 = 0;
    v51 = 0;
    v52 = -1;
    v50 = 0;
    if ( (unsigned __int8)calc_tinfo_gaps() && (_QWORD)v50 && (_QWORD)v48 )
    {
      v27 = 0;
      v28 = 0;
      do
      {
        v29 = &v47[6 * v28];
        v30 = v29[5] + *v29;
        range = rangeset_t_find_range();
        if ( range )
        {
          v32 = *(_QWORD *)(range + 8) - v30;
          v33 = a5 - (*v29 + v29[4]);
          if ( v33 < 0 )
          {
            if ( !under_debugger )
              sub_383060(51634);
LABEL_67:
            BUG();
          }
          if ( v32 > v33 )
            v32 = a5 - (*v29 + v29[4]);
          *v29 += v32;
        }
        v28 = ++v27;
      }
      while ( v27 < (unsigned __int64)v48 );
    }
    sub_1C36C0(&v47);
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
    }
    v11 = v47;
  }
  v12 = v11[4];
  v13 = v11[5];
  if ( !(_QWORD)v48 )
  {
    if ( !under_debugger )
      sub_383060(51835);
    goto LABEL_67;
  }
  v14 = *v11;
  if ( (_QWORD)v48 != 1 )
  {
    v15 = *v11;
    v16 = v11[4];
    v17 = 0;
    v18 = 1;
    v19 = 0;
    while ( 1 )
    {
      v21 = &v11[6 * v18];
      v22 = &v11[6 * v19];
      if ( v15 + v16 != v21[4] )
        break;
      if ( v22[5] + v15 != v21[5] )
        break;
      v14 += *v21;
      LODWORD(v18) = v17 + 2;
      ++v17;
      v18 = (int)v18;
      if ( (int)v18 >= (unsigned __int64)v48 )
        break;
      v19 = v17;
      v20 = &v11[6 * v17];
      v16 = v20[4];
      v15 = *v20;
    }
  }
  if ( v11 )
  {
    v43 = v11[5];
    *(_QWORD *)&v48 = 0;
    qfree();
    v13 = v43;
  }
  if ( v14 == -1 )
  {
    if ( v9 )
    {
      cleanup_argloc();
      qfree();
    }
    return 0;
  }
  if ( !v14 )
  {
LABEL_46:
    if ( !under_debugger )
      sub_383060(51158);
    goto LABEL_67;
  }
  if ( a6 )
  {
    v25 = v12 - v13 + v8;
  }
  else
  {
    v23 = v12 + v14;
    if ( v23 < v38 )
    {
      v36 = *a4 == 2;
      if ( *v40 == 2 && *a4 == 2 )
      {
        if ( !under_debugger )
          sub_383060(51156);
        goto LABEL_67;
      }
      v39 = v13;
      v44 = *v40;
      tinfo_property = get_tinfo_property();
      v13 = v39;
      if ( v23 < tinfo_property )
      {
        if ( v44 != 2 || v36 )
        {
          if ( !under_debugger )
            sub_383060(51159);
          goto LABEL_67;
        }
        return 0;
      }
    }
    v24 = v12 - v13;
    if ( v8 < 0 )
    {
      if ( !under_debugger )
        sub_383060(51416);
      goto LABEL_67;
    }
    v25 = v8 + v24;
    if ( v8 > v25 != v24 < 0 )
    {
      if ( !under_debugger )
        sub_383060(51160);
      goto LABEL_67;
    }
    if ( v25 < 0 )
    {
      if ( !under_debugger )
        sub_383060(51221);
      goto LABEL_67;
    }
  }
  *a2 = v25;
  if ( v9 )
  {
    cleanup_argloc();
    qfree();
  }
  return 1;
}
