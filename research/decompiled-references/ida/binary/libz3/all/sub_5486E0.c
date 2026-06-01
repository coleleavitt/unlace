__int64 __fastcall sub_5486E0(__int64 a1, __int64 a2, unsigned int a3)
{
  char **exception; // r12
  char **v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r14
  int v12; // edx
  __int64 *v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 *v25; // rbp
  unsigned __int64 v26; // r13
  __int64 v27; // rsi
  unsigned int v30; // r9d
  size_t v31; // rsi
  unsigned int v32; // r12d
  unsigned int *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  unsigned int v36; // r15d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rax
  int v41; // [rsp+0h] [rbp-98h]
  int v42[2]; // [rsp+8h] [rbp-90h]
  int v43[2]; // [rsp+8h] [rbp-90h]
  int v44[2]; // [rsp+10h] [rbp-88h]
  int v45; // [rsp+18h] [rbp-80h]
  int v47; // [rsp+20h] [rbp-78h]
  char v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+38h] [rbp-60h]
  __int64 v50[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a2;
  *(_QWORD *)v42 = *(_QWORD *)(a1 + 24);
  v6 = sub_5480C0(a1, *(_QWORD *)(a2 + 16));
  v7 = *(unsigned int *)(a2 + 24);
  *(_QWORD *)v44 = v6;
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD *)(a2 + 32);
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    v9 = (_QWORD *)sub_186B270(0x18u);
    *v9 = 2;
    v10 = v9 + 1;
    v11 = a2 + 8 * v7;
    v12 = 1;
    v13 = v10;
    while ( 1 )
    {
      v5 += 8;
      *v10 = v8;
      *((_DWORD *)v13 - 1) = v12;
      if ( v11 == v5 )
        break;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v5 + 32);
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        v14 = *((_DWORD *)v13 - 1);
        if ( v14 == *((_DWORD *)v13 - 2) )
          break;
        v5 += 8;
        v13[v14] = v8;
        *((_DWORD *)v13 - 1) = v14 + 1;
        if ( v11 == v5 )
          goto LABEL_10;
      }
      v30 = (3 * v14 + 1) >> 1;
      v31 = 8 * v30 + 8;
      v32 = v30;
      if ( 8 * v14 + 8 >= (unsigned int)v31 || v14 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v13 - 1, v31);
      v13 = (__int64 *)(v33 + 2);
      *v33 = v32;
      v34 = v33[1];
      v35 = v34;
      v10 = &v13[v34];
      v12 = v35 + 1;
    }
  }
  else
  {
    v13 = nullptr;
  }
LABEL_10:
  v15 = sub_15DB5C0(*(_QWORD *)(a1 + 24), a3, *(_QWORD *)(a1 + 80));
  v18 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( v13 )
  {
    v19 = *((_DWORD *)v13 - 1);
    if ( v19 == *((_DWORD *)v13 - 2) )
    {
      v36 = (3 * v19 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v37 || v19 >= v36 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300(v13 - 1, v37);
      v39 = v38[1];
      v13 = (__int64 *)(v38 + 2);
      *v38 = v36;
      LODWORD(v38) = v39;
      v22 = &v13[v39];
      v21 = (_DWORD)v38 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v13[v20];
    }
  }
  else
  {
    v40 = (_QWORD *)sub_186B270(0x18u);
    v22 = v40 + 1;
    *v40 = 2;
    v21 = 1;
    v13 = v22;
  }
  v23 = *(_QWORD *)(a1 + 24);
  *v22 = v18;
  *((_DWORD *)v13 - 1) = v21;
  v24 = sub_15DC610(
          v23,
          v44[0],
          *(_DWORD *)(*(_QWORD *)v44 + 32LL),
          (int)v13,
          v16,
          v17,
          v41,
          v42[0],
          v44[0],
          v45,
          v47,
          v48,
          v42[0],
          v49,
          v50[0],
          (void *)v50[1]);
  v25 = v13;
  v26 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
  if ( (unsigned __int64)v13 < v26 )
  {
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          if ( (*(_DWORD *)(v27 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v25 >= v26 )
          goto LABEL_21;
      }
      ++v25;
      sub_15D7BC0(*(_QWORD *)v43, v27);
    }
    while ( (unsigned __int64)v25 < v26 );
  }
LABEL_21:
  sub_186B220(v13 - 1);
  return v24;
}

