__int64 __fastcall sub_1EB280(__int64 a1, __int64 *a2, __int64 a3, int *a4, int a5, char a6)
{
  int v7; // eax
  bool v8; // zf
  __int64 v9; // r13
  int *v10; // r12
  int v11; // eax
  int *v12; // rdi
  int v13; // ebp
  int v14; // r10d
  int v15; // r14d
  int v16; // edx
  int v17; // esi
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rcx
  int *v21; // rdx
  int *v22; // rax
  int *v23; // rcx
  int v24; // r14d
  int v25; // ebp
  __int64 v26; // rax
  __int64 v28; // rsi
  int v29; // r14d
  __int64 v30; // rax
  int *v31; // rbp
  int v32; // r15d
  __int64 range; // rax
  int v34; // eax
  int v35; // edi
  int *v36; // rax
  int v37; // r15d
  bool v38; // r15
  int tinfo_property; // eax
  int v40; // [rsp+Ch] [rbp-BCh]
  int v41; // [rsp+Ch] [rbp-BCh]
  int *v42; // [rsp+10h] [rbp-B8h]
  int v45; // [rsp+28h] [rbp-A0h]
  int v46; // [rsp+28h] [rbp-A0h]
  int *v49; // [rsp+40h] [rbp-88h] BYREF
  __int128 v50; // [rsp+48h] [rbp-80h]
  __int64 v51; // [rsp+60h] [rbp-68h] BYREF
  __int128 v52; // [rsp+68h] [rbp-60h]
  __int64 v53; // [rsp+78h] [rbp-50h]
  int v54; // [rsp+80h] [rbp-48h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 88);
  v8 = *(_DWORD *)a3 == 2;
  v55 = __readfsqword(0x28u);
  v9 = *a2;
  v40 = v7;
  v42 = (int *)a3;
  if ( v8 && v9 > 0 )
  {
    v36 = (int *)qalloc_or_throw(16);
    *v36 = 0;
    v10 = v36;
    copy_argloc(v36, a3);
    if ( (unsigned __int8)sub_1C1220(v10, a1, v9, v40, 1) )
    {
      v37 = v40 - v9;
      v42 = v10;
      v9 = 0;
      v40 = v37;
    }
  }
  else
  {
    v10 = nullptr;
  }
  v49 = nullptr;
  v50 = 0;
  v11 = sub_1BF400(a4, (__int64 *)&v49, a5, (__int64)v42, v40, 1);
  v12 = v49;
  if ( !v11 )
  {
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    goto LABEL_46;
  }
  if ( v40 != *v49 )
  {
    v28 = *(_QWORD *)(a3 + 80);
    v51 = 0;
    v53 = 0;
    v54 = -1;
    v52 = 0;
    if ( (unsigned __int8)calc_tinfo_gaps(&v51, v28) && (_QWORD)v52 && (_QWORD)v50 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = &v49[6 * v30];
        v32 = v31[5] + *v31;
        range = rangeset_t_find_range(&v51, v32);
        if ( range )
        {
          v34 = *(_QWORD *)(range + 8) - v32;
          v35 = a5 - (*v31 + v31[4]);
          if ( v35 < 0 )
          {
            if ( !under_debugger )
              sub_37E160(51634);
LABEL_67:
            BUG();
          }
          if ( v34 > v35 )
            v34 = a5 - (*v31 + v31[4]);
          *v31 += v34;
        }
        v30 = ++v29;
      }
      while ( v29 < (unsigned __int64)v50 );
    }
    sub_1BF300(&v49);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    v12 = v49;
  }
  v13 = v12[4];
  v14 = v12[5];
  if ( !(_QWORD)v50 )
  {
    if ( !under_debugger )
      sub_37E160(51835);
    goto LABEL_67;
  }
  v15 = *v12;
  if ( (_QWORD)v50 != 1 )
  {
    v16 = *v12;
    v17 = v12[4];
    v18 = 0;
    v19 = 1;
    v20 = 0;
    while ( 1 )
    {
      v22 = &v12[6 * v19];
      v23 = &v12[6 * v20];
      if ( v16 + v17 != v22[4] )
        break;
      if ( v23[5] + v16 != v22[5] )
        break;
      v15 += *v22;
      LODWORD(v19) = v18 + 2;
      ++v18;
      v19 = (int)v19;
      if ( (int)v19 >= (unsigned __int64)v50 )
        break;
      v20 = v18;
      v21 = &v12[6 * v18];
      v17 = v21[4];
      v16 = *v21;
    }
  }
  if ( v12 )
  {
    v45 = v12[5];
    *(_QWORD *)&v50 = 0;
    qfree(v12);
    v14 = v45;
  }
  if ( v15 == -1 )
  {
    if ( v10 )
    {
      cleanup_argloc(v10);
      qfree(v10);
    }
    return 0;
  }
  if ( !v15 )
  {
LABEL_46:
    if ( !under_debugger )
      sub_37E160(51158);
    goto LABEL_67;
  }
  if ( a6 )
  {
    v26 = v13 - v14 + v9;
  }
  else
  {
    v24 = v13 + v15;
    if ( v24 < v40 )
    {
      v38 = *a4 == 2;
      if ( *v42 == 2 && *a4 == 2 )
      {
        if ( !under_debugger )
          sub_37E160(51156);
        goto LABEL_67;
      }
      v41 = v14;
      v46 = *v42;
      tinfo_property = get_tinfo_property(*(_QWORD *)(a3 + 80), 15);
      v14 = v41;
      if ( v24 < tinfo_property )
      {
        if ( v46 != 2 || v38 )
        {
          if ( !under_debugger )
            sub_37E160(51159);
          goto LABEL_67;
        }
        return 0;
      }
    }
    v25 = v13 - v14;
    if ( v9 < 0 )
    {
      if ( !under_debugger )
        sub_37E160(51416);
      goto LABEL_67;
    }
    v26 = v9 + v25;
    if ( v9 > v26 != v25 < 0 )
    {
      if ( !under_debugger )
        sub_37E160(51160);
      goto LABEL_67;
    }
    if ( v26 < 0 )
    {
      if ( !under_debugger )
        sub_37E160(51221);
      goto LABEL_67;
    }
  }
  *a2 = v26;
  if ( v10 )
  {
    cleanup_argloc(v10);
    qfree(v10);
  }
  return 1;
}
