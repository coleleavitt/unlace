__int64 __fastcall sub_52E440(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  int v4; // r12d
  int v5; // r9d
  _QWORD *v6; // r14
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // r12
  __int64 v12; // r13
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rsi
  void *v20; // rdi
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rbp
  __int64 *v25; // rbx
  unsigned __int64 v26; // r15
  __int64 v27; // rsi
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  unsigned int v32; // r15d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  char **v37; // r12
  char **exception; // r12
  int v39; // [rsp+0h] [rbp-98h]
  int v40; // [rsp+0h] [rbp-98h]
  __int64 v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+10h] [rbp-88h] BYREF
  int v44[2]; // [rsp+18h] [rbp-80h]
  int v45[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v46; // [rsp+28h] [rbp-70h]
  int v47[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v48; // [rsp+38h] [rbp-60h]
  __int64 v49[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a2;
  v4 = a3;
  sub_52D980(&v43, a1, a2, a3);
  v6 = *(_QWORD **)v44;
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)v44 )
  {
    sub_157BE40(
      (int)v45,
      v7,
      v3,
      *(_DWORD *)(*(_QWORD *)v44 - 4LL),
      v44[0],
      v5,
      v39,
      v41,
      v43,
      v44[0],
      v45[0],
      v46,
      *(__int64 *)v47,
      v48);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *((_DWORD *)v6 - 1);
  }
  else
  {
    sub_157BE40((int)v45, v7, v3, 0, 0, v5, v39, v41, v43, 0, v45[0], v46, *(__int64 *)v47, v48);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = 0;
  }
  sub_157BE40((int)v47, v9, v4, v10, (int)v6, v8, v40, v42, v43, v44[0], v45[0], v46, *(__int64 *)v47, v48);
  v11 = *(_QWORD *)v45;
  v12 = *(_QWORD *)v47;
  if ( **(_DWORD **)v47 >= **(_DWORD **)v45 )
  {
    v12 = *(_QWORD *)v45;
    v11 = *(_QWORD *)v47;
  }
  v13 = *(_QWORD **)(a1 + 136);
  ++*(_DWORD *)(v12 + 8);
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v32 = (3 * v14 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v33 || v14 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300(v13 - 1, v33);
      v35 = v34[1];
      v13 = v34 + 2;
      *v34 = v32;
      *(_QWORD *)(a1 + 136) = v34 + 2;
      LODWORD(v34) = v35;
      v17 = &v13[v35];
      v16 = (_DWORD)v34 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v36 = (_QWORD *)sub_186B270(0x18u);
    v13 = v36 + 1;
    *v36 = 2;
    v16 = 1;
    *(_QWORD *)(a1 + 136) = v13;
    v17 = v13;
  }
  *v17 = v12;
  *((_DWORD *)v13 - 1) = v16;
  ++*(_DWORD *)(v11 + 8);
  v18 = *((_DWORD *)v13 - 1);
  if ( v18 == *((_DWORD *)v13 - 2) )
  {
    v29 = (3 * v18 + 1) >> 1;
    v30 = 8 * v29 + 8;
    if ( 8 * v18 + 8 >= (unsigned int)v30 || v18 >= v29 )
    {
      v37 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v49, "Overflow encountered when expanding vector");
      *v37 = (char *)off_1C63128;
      sub_2333C0(v37 + 1, v49);
      sub_233E40((__int64)v49);
      __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v31 = (unsigned int *)sub_186B300(v13 - 1, v30);
    v13 = v31 + 2;
    *v31 = v29;
    v18 = v31[1];
    *(_QWORD *)(a1 + 136) = v13;
  }
  v19 = *(_QWORD *)v47;
  v13[v18] = v11;
  *((_DWORD *)v13 - 1) = v18 + 1;
  if ( v19 )
  {
    v20 = v48;
    v21 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v20, v19);
  }
  v22 = *(_QWORD *)v45;
  if ( *(_QWORD *)v45 )
  {
    v23 = v46;
    v21 = (*(_DWORD *)(*(_QWORD *)v45 + 8LL))-- == 1;
    if ( v21 )
      sub_15D7BC0(v23, v22);
  }
  if ( v6 )
  {
    v24 = v43;
    v25 = v6;
    v26 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v26 )
    {
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v21 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( (unsigned __int64)++v25 >= v26 )
            goto LABEL_22;
        }
        ++v25;
        sub_15D7BC0(v24, v27);
      }
      while ( (unsigned __int64)v25 < v26 );
    }
LABEL_22:
    sub_186B220(v6 - 1);
  }
  return v12;
}

