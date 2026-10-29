__int64 __fastcall sub_D045A0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 *a4, int a5)
{
  int v7; // r13d
  _DWORD *v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  _DWORD *v15; // rdx
  _QWORD *v16; // rax
  int v17; // r9d
  _QWORD *v18; // rdx
  __int64 *v19; // r8
  unsigned int v20; // eax
  _DWORD *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 result; // rax
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r15
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // zf
  _DWORD *v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  char **exception; // rbx
  int v47; // [rsp+0h] [rbp-98h]
  int v48; // [rsp+0h] [rbp-98h]
  __int64 *v50; // [rsp+8h] [rbp-90h]
  unsigned int v51; // [rsp+8h] [rbp-90h]
  __int64 *v52; // [rsp+8h] [rbp-90h]
  int v53; // [rsp+10h] [rbp-88h]
  int v54; // [rsp+10h] [rbp-88h]
  unsigned int v55; // [rsp+14h] [rbp-84h]
  __int64 *v56; // [rsp+18h] [rbp-80h]
  int v57; // [rsp+18h] [rbp-80h]
  int v58[2]; // [rsp+20h] [rbp-78h]
  int v59[2]; // [rsp+20h] [rbp-78h]
  char v60[8]; // [rsp+28h] [rbp-70h]
  char v61[8]; // [rsp+28h] [rbp-70h]
  int v62[2]; // [rsp+30h] [rbp-68h]
  int v63[2]; // [rsp+30h] [rbp-68h]
  int v64[2]; // [rsp+38h] [rbp-60h]
  int v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+40h] [rbp-58h] BYREF
  void *v67; // [rsp+48h] [rbp-50h]

  v7 = a2;
  v9 = *(_DWORD **)(a2 + 24);
  if ( v9 && !*v9 && v9[1] == 4 )
    return 5;
  v10 = *((_DWORD *)a1 + 6);
  if ( v10 != -1 )
  {
    v11 = *((_DWORD *)a1 + 7);
    if ( v11 )
    {
      if ( (unsigned int)(v11 * v10) < *((_DWORD *)a1 + 4) )
        return 5;
    }
  }
  v12 = 0;
  v13 = 8LL * a3;
  if ( !a3 )
    return 5;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_15D2CB0(*a1, a4[v12 / 8]) )
    {
      v14 = a4[v12 / 8];
      if ( !*(_WORD *)(v14 + 4) )
      {
        v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
        if ( v15 )
        {
          if ( !*v15 && v15[1] == 4 )
            break;
        }
      }
    }
    v12 += 8LL;
    if ( v13 == v12 )
      return 5;
  }
  *(_QWORD *)v64 = *(_QWORD *)(v14 + 32);
  *(_QWORD *)v58 = *(_QWORD *)(v14 + 40);
  *(_QWORD *)v60 = *(_QWORD *)(v14 + 48);
  *(_QWORD *)v62 = *a1;
  v16 = (_QWORD *)sub_186B270(0x18u);
  v18 = v16 + 1;
  *v16 = 2;
  v19 = &a4[(unsigned __int64)v13 / 8];
  v20 = 1;
  v21 = v18;
  while ( 1 )
  {
    v22 = *a4++;
    *v18 = v22;
    *(v21 - 1) = v20;
    if ( v19 == a4 )
      break;
    if ( v20 == *(v21 - 2) )
    {
      v25 = (3 * v20 + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v26 || v20 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D03640(&v66, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v66);
        sub_233E40((__int64)&v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v56 = v19;
      v55 = (3 * v20 + 1) >> 1;
      v27 = (unsigned int *)sub_186B300(v21 - 2, v26);
      v28 = v27[1];
      v21 = v27 + 2;
      v19 = v56;
      *v27 = v55;
      LODWORD(v27) = v28;
      v18 = &v21[2 * v28];
      v20 = (_DWORD)v27 + 1;
    }
    else
    {
      v23 = v20++;
      v18 = &v21[2 * v23];
    }
  }
  v29 = &v21[v12 / 4];
  v30 = *a1;
  *v29 = *(_QWORD *)v58;
  v31 = sub_15DC610(
          v30,
          v7,
          a3,
          (int)v21,
          (int)v19,
          v17,
          v47,
          a5,
          v53,
          (int)v56,
          v58[0],
          v60[0],
          v62[0],
          v64[0],
          v66,
          v67);
  v32 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  if ( !(unsigned __int8)sub_15D2760(*a1, *(_QWORD *)v59, *(_QWORD *)v61) )
  {
    v39 = *a1;
    *v29 = *(_QWORD *)v61;
    v40 = sub_15DC610(v39, v7, a3, (int)v21, v33, v34, v48, (int)v50, v54, v57, v59[0], v61[0], v63[0], v65, v66, v67);
    v41 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    v42 = sub_15E1BF0(*a1);
    v43 = v42;
    if ( v42 )
      ++*(_DWORD *)(v42 + 8);
    v44 = *v52;
    if ( *v52 )
    {
      v45 = v52[1];
      v37 = (*(_DWORD *)(v44 + 8))-- == 1;
      if ( v37 )
        sub_15D7BC0(v45, v44);
    }
    *v52 = v43;
    ++*((_DWORD *)a1 + 4);
    sub_186B220(v21 - 2);
    if ( v41 )
    {
      v37 = (*(_DWORD *)(v41 + 8))-- == 1;
      if ( v37 )
        sub_15D7BC0(*(_QWORD *)v63, v41);
    }
    result = 2;
LABEL_35:
    if ( !v32 )
      return result;
    goto LABEL_36;
  }
  v35 = *v50;
  if ( v32 == *v50 )
  {
    sub_186B220(v21 - 2);
    result = 0;
    goto LABEL_35;
  }
  if ( v35 )
  {
    v36 = v50[1];
    v37 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v37 )
      sub_15D7BC0(v36, v35);
  }
  v38 = v21 - 2;
  *v50 = v32;
  if ( !v32 )
  {
    sub_186B220(v38);
    return 0;
  }
  ++*(_DWORD *)(v32 + 8);
  sub_186B220(v38);
  result = 0;
LABEL_36:
  v37 = (*(_DWORD *)(v32 + 8))-- == 1;
  if ( v37 )
  {
    v51 = result;
    sub_15D7BC0(*(_QWORD *)v63, v32);
    return v51;
  }
  return result;
}

