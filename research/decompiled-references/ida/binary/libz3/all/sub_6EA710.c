__int64 __fastcall sub_6EA710(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rsi
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _DWORD *v17; // rsi
  __int64 v18; // r12
  unsigned int v19; // eax
  unsigned int v20; // r9d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rax
  unsigned int v25; // r9d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rsi
  unsigned int i; // r15d
  _DWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rsi
  int v33; // eax
  _DWORD *v34; // rsi
  __int64 v35; // r13
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  char **v45; // r15
  char **exception; // r15
  char **v47; // r15
  unsigned int v48; // [rsp+4h] [rbp-A4h]
  unsigned int v49; // [rsp+4h] [rbp-A4h]
  unsigned int v50; // [rsp+4h] [rbp-A4h]
  __int64 v51; // [rsp+8h] [rbp-A0h]
  __int64 v52; // [rsp+10h] [rbp-98h]
  __int64 v53; // [rsp+20h] [rbp-88h] BYREF
  unsigned int *v54; // [rsp+28h] [rbp-80h]
  unsigned int *v55; // [rsp+30h] [rbp-78h] BYREF
  __int64 v56; // [rsp+38h] [rbp-70h]
  _QWORD v57[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v58[11]; // [rsp+50h] [rbp-58h] BYREF

  v55 = (unsigned int *)*a1;
  v54 = v55;
  if ( a3 )
  {
    v57[0] = off_1C533D8;
    v57[1] = a1;
    v53 = 0;
    v56 = 0;
    sub_6EA3C0(a1, v57, a2, &v53, &v55);
  }
  else
  {
    v58[0] = (__int64)off_1C53398;
    v58[1] = (__int64)a1;
    v53 = 0;
    v56 = 0;
    sub_6EA3C0(a1, v58, a2, &v53, &v55);
  }
  v4 = v56;
  v51 = v53;
  v52 = (__int64)v54;
  v5 = sub_186B270(0x30u);
  v6 = *a1;
  *(_QWORD *)v5 = &off_1C53418;
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 8) = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  *(_QWORD *)(v5 + 24) = v6;
  v7 = a2[6];
  v8 = nullptr;
  v9 = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v9 >= *(_DWORD *)(v7 - 4) )
        goto LABEL_24;
      v18 = *(_QWORD *)(v7 + 8LL * v9);
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      if ( !v8 )
        break;
      v19 = *((_DWORD *)v8 - 1);
      if ( v19 != *((_DWORD *)v8 - 2) )
      {
        v10 = v19;
        v11 = v19 + 1;
        v12 = &v8[v10];
        goto LABEL_8;
      }
      v20 = (3 * v19 + 1) >> 1;
      v21 = 8 * v20 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v58, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v58);
        sub_233E40((__int64)v58);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (3 * v19 + 1) >> 1;
      v22 = (unsigned int *)sub_186B300(v8 - 1, v21);
      v23 = v22[1];
      v8 = v22 + 2;
      v13 = *(_DWORD **)(v5 + 40);
      *(_QWORD *)(v5 + 32) = v22 + 2;
      *v22 = v48;
      *(_QWORD *)&v22[2 * v23 + 2] = v18;
      v22[1] = v23 + 1;
      if ( v13 )
      {
LABEL_9:
        v14 = *(v13 - 1);
        if ( v14 == *(v13 - 2) )
        {
          v25 = (3 * v14 + 1) >> 1;
          v26 = 4 * v25 + 8;
          if ( 4 * v14 + 8 >= (unsigned int)v26 || v14 >= v25 )
          {
            v45 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v58, "Overflow encountered when expanding vector");
            *v45 = (char *)off_1C63128;
            sub_2333C0(v45 + 1, v58);
            sub_233E40((__int64)v58);
            __cxa_throw(v45, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v49 = (3 * v14 + 1) >> 1;
          v27 = (unsigned int *)sub_186B300(v13 - 2, v26);
          v28 = v27[1];
          v13 = v27 + 2;
          *(_QWORD *)(v5 + 40) = v27 + 2;
          *v27 = v49;
          LODWORD(v27) = v28;
          v17 = &v13[v28];
          v16 = (_DWORD)v27 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v13[v15];
        }
        goto LABEL_11;
      }
LABEL_20:
      v24 = (_QWORD *)sub_186B270(0x10u);
      v13 = v24 + 1;
      *v24 = 2;
      v16 = 1;
      *(_QWORD *)(v5 + 40) = v13;
      v17 = v13;
LABEL_11:
      *v17 = 1;
      ++v9;
      *(v13 - 1) = v16;
      v7 = a2[6];
      if ( !v7 )
        goto LABEL_24;
    }
    v43 = (_QWORD *)sub_186B270(0x18u);
    v8 = v43 + 1;
    *v43 = 2;
    v11 = 1;
    *(_QWORD *)(v5 + 32) = v8;
    v12 = v8;
LABEL_8:
    v13 = *(_DWORD **)(v5 + 40);
    *v12 = v18;
    *((_DWORD *)v8 - 1) = v11;
    if ( v13 )
      goto LABEL_9;
    goto LABEL_20;
  }
LABEL_24:
  if ( v4 )
  {
    for ( i = 0; i < *(_DWORD *)(v4 - 4); ++i )
    {
      v35 = *(_QWORD *)(v4 + 8LL * i);
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      v36 = *(_QWORD *)(v5 + 32);
      if ( !v36 || (v37 = *(_DWORD *)(v36 - 4), v37 == *(_DWORD *)(v36 - 8)) )
      {
        sub_3A6B20((unsigned int **)(v5 + 32));
        v36 = *(_QWORD *)(v5 + 32);
        v37 = *(_DWORD *)(v36 - 4);
      }
      *(_QWORD *)(v36 + 8LL * v37) = v35;
      *(_DWORD *)(v36 - 4) = v37 + 1;
      v30 = *(_DWORD **)(v5 + 40);
      if ( v30 )
      {
        v31 = *(v30 - 1);
        if ( v31 == *(v30 - 2) )
        {
          v38 = (3 * v31 + 1) >> 1;
          v39 = 4 * v38 + 8;
          if ( 4 * v31 + 8 >= (unsigned int)v39 || v31 >= v38 )
          {
            v47 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v58, "Overflow encountered when expanding vector");
            *v47 = (char *)off_1C63128;
            sub_2333C0(v47 + 1, v58);
            sub_233E40((__int64)v58);
            __cxa_throw(v47, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v50 = (3 * v31 + 1) >> 1;
          v40 = (unsigned int *)sub_186B300(v30 - 2, v39);
          v41 = v40[1];
          v30 = v40 + 2;
          *(_QWORD *)(v5 + 40) = v40 + 2;
          *v40 = v50;
          LODWORD(v40) = v41;
          v34 = &v30[v41];
          v33 = (_DWORD)v40 + 1;
        }
        else
        {
          v32 = v31;
          v33 = v31 + 1;
          v34 = &v30[v32];
        }
      }
      else
      {
        v44 = (_QWORD *)sub_186B270(0x10u);
        v30 = v44 + 1;
        *v44 = 2;
        v33 = 1;
        *(_QWORD *)(v5 + 40) = v30;
        v34 = v30;
      }
      *v34 = 0;
      *(v30 - 1) = v33;
    }
  }
  v56 = v4;
  sub_2B4F40((__int64 *)&v55);
  sub_6DE2A0(v51, v52);
  return v5;
}

