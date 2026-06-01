__int64 __fastcall sub_5AC420(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  _QWORD *v8; // rax
  unsigned int *v9; // rax
  unsigned int *v10; // r14
  unsigned int *v11; // rdx
  unsigned int v12; // ecx
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned int *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r14d
  __int64 v26; // rdx
  int v27; // r9d
  unsigned int *v28; // rax
  __int64 v29; // rsi
  _BYTE *v30; // rdx
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // rsi
  int v34; // eax
  bool *v35; // rsi
  bool v36; // r13
  unsigned int v37; // eax
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int v40; // r14d
  unsigned int *v41; // rax
  __int64 v42; // rsi
  unsigned int *v43; // rax
  unsigned int v44; // ecx
  unsigned int v45; // r13d
  __int64 v46; // rdx
  __int64 result; // rax
  _QWORD *v48; // rax
  void (***v49)(void); // rdi
  __int64 v50; // rbp
  _QWORD *v51; // rdi
  _QWORD *v52; // rsi
  char **exception; // r12
  char **v54; // r12
  unsigned int v55; // [rsp+0h] [rbp-88h]
  __int64 v56; // [rsp+8h] [rbp-80h]
  char v57; // [rsp+1Eh] [rbp-6Ah] BYREF
  __int64 v58; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v59; // [rsp+28h] [rbp-60h] BYREF
  __int64 v60[11]; // [rsp+30h] [rbp-58h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = qword_1C66768;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !a3 )
  {
    v51 = (_QWORD *)(a1 + 8);
    v52 = a2 + 2;
    if ( v52 != v51 )
    {
      if ( !a2[2] )
      {
        *(_QWORD *)a1 = &off_1C52198;
        v56 = a1 + 48;
        *(_OWORD *)(a1 + 24) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        v58 = 0;
        sub_647A70(0, 0, &v58);
        v25 = 0;
        goto LABEL_24;
      }
      sub_52CD90(v51, v52);
    }
    v20 = a2[2];
    goto LABEL_18;
  }
  v8 = (_QWORD *)sub_186B270(0x10u);
  *v8 = 2;
  v9 = (unsigned int *)(v8 + 1);
  v10 = a4;
  *(_QWORD *)(a1 + 16) = v9;
  v11 = v9;
  while ( 1 )
  {
    v12 = *v10++;
    *v9 = v12;
    v13 = *(v11 - 1);
    v14 = (unsigned int)(v13 + 1);
    *(v11 - 1) = v14;
    if ( &a4[a3] == v10 )
      break;
    v15 = *(v11 - 2);
    if ( v15 == (_DWORD)v14 )
    {
      v16 = (3 * v15 + 1) >> 1;
      v17 = 4 * v16 + 8;
      if ( 4 * v13 + 12 >= (unsigned int)v17 || v15 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v60, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v60);
        sub_233E40((__int64)v60);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v55 = (3 * v15 + 1) >> 1;
      v18 = (unsigned int *)sub_186B300(v11 - 2, v17);
      v11 = v18 + 2;
      *(_QWORD *)(a1 + 16) = v18 + 2;
      *v18 = v55;
      v9 = &v18[v18[1] + 2];
    }
    else
    {
      v9 = &v11[v14];
    }
  }
  if ( (_QWORD *)(a1 + 8) != a2 + 2 )
  {
    v19 = *(_QWORD *)(a1 + 8);
    if ( v19 )
      sub_186B220((void *)(v19 - 8));
    v20 = a2[2];
    if ( !v20 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( a3 == 1 )
      {
        v25 = 0;
        *(_QWORD *)a1 = &off_1C52198;
        v56 = a1 + 48;
        *(_OWORD *)(a1 + 24) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        goto LABEL_20;
      }
      goto LABEL_15;
    }
    sub_52CD90((_QWORD *)(a1 + 8), a2 + 2);
  }
  v20 = a2[2];
  if ( a3 != 1 )
  {
LABEL_15:
    v21 = *(_QWORD *)(a1 + 8);
    v22 = *(_QWORD *)(v21 + 8LL * *a4);
    v23 = a4;
    do
    {
      v24 = v23[1];
      *(_QWORD *)(v21 + 8LL * *v23++) = *(_QWORD *)(v21 + 8 * v24);
    }
    while ( v23 != &a4[a3 - 1] );
    *(_QWORD *)(v21 + 8LL * a4[a3 - 1]) = v22;
  }
LABEL_18:
  *(_QWORD *)a1 = &off_1C52198;
  v56 = a1 + 48;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  if ( v20 )
    v25 = *(_DWORD *)(v20 - 4);
  else
    v25 = 0;
LABEL_20:
  v58 = 0;
  sub_647A70(0, v25, &v58);
  if ( a3 > 1 )
  {
    v26 = v58;
    v27 = *(_DWORD *)(v58 + 4LL * *a4);
    v28 = a4;
    do
    {
      v29 = v28[1];
      *(_DWORD *)(v26 + 4LL * *v28++) = *(_DWORD *)(v26 + 4 * v29);
    }
    while ( &a4[a3 - 1] != v28 );
    *(_DWORD *)(v26 + 4LL * a4[a3 - 1]) = v27;
  }
LABEL_24:
  v59 = nullptr;
  v57 = 1;
  *(_BYTE *)(a1 + 40) = 1;
  if ( v25 )
  {
    v30 = *(_BYTE **)(a1 + 56);
    v31 = 0;
    v32 = 4LL * v25;
    while ( 1 )
    {
      v36 = *(_DWORD *)(a2[7] + 4LL * *(unsigned int *)(v58 + v31)) != -1;
      if ( !v30 )
        break;
      v37 = *((_DWORD *)v30 - 1);
      if ( v37 == *((_DWORD *)v30 - 2) )
      {
        v38 = (3 * v37 + 1) >> 1;
        v39 = v38 + 8;
        v40 = v38;
        if ( v37 + 8 >= (unsigned int)v39 || v37 >= v38 )
        {
          v54 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *v54 = (char *)off_1C63128;
          sub_2333C0(v54 + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(v54, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v30 - 8, v39);
        v42 = v41[1];
        v30 = v41 + 2;
        *v41 = v40;
        v31 += 4;
        *(_QWORD *)(a1 + 56) = v41 + 2;
        *((_BYTE *)v41 + v42 + 8) = v36;
        v41[1] = v42 + 1;
        if ( v31 == v32 )
          goto LABEL_33;
      }
      else
      {
        v33 = v37;
        v34 = v37 + 1;
        v35 = &v30[v33];
LABEL_27:
        v31 += 4;
        *v35 = v36;
        *((_DWORD *)v30 - 1) = v34;
        if ( v31 == v32 )
          goto LABEL_33;
      }
    }
    v48 = (_QWORD *)sub_186B270(0xAu);
    v30 = v48 + 1;
    *v48 = 2;
    v34 = 1;
    *(_QWORD *)(a1 + 56) = v30;
    v35 = v30;
    goto LABEL_27;
  }
LABEL_33:
  sub_647FC0(&v58, a2 + 7, &v59, &v57);
  v43 = v59;
  if ( !v59 )
  {
    v45 = 0;
    goto LABEL_45;
  }
  v44 = *(v59 - 1);
  v45 = *(v59 - 2);
  v46 = v44;
  if ( v44 == v45 )
  {
LABEL_45:
    sub_2FD3F0(&v59);
    v43 = v59;
    v44 = v45;
    v46 = *(v59 - 1);
  }
  v43[v46] = v44;
  ++*(v43 - 1);
  result = sub_647FC0(&v58, a2 + 10, v56, a1 + 40);
  if ( !v57 )
  {
    result = sub_4C5840(*(_QWORD *)(a2[1] + 24LL), a2[13], v59);
    v49 = *(void (****)(void))(a1 + 24);
    v50 = result;
    if ( (void (***)(void))result != v49 )
    {
      result = sub_4CFE00(v49);
      *(_QWORD *)(a1 + 24) = v50;
    }
  }
  if ( v59 )
    result = sub_186B220(v59 - 2);
  if ( v58 )
    return sub_186B220((void *)(v58 - 8));
  return result;
}

