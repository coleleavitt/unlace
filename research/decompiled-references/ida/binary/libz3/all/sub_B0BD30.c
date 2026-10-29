__int64 __fastcall sub_B0BD30(_QWORD *a1, int a2)
{
  char **exception; // rbp
  __int64 v4; // rax
  int v5; // r15d
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  void *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r14
  void *v16; // r13
  __int64 v17; // rsi
  _DWORD *v18; // rcx
  __int64 v19; // rbx
  unsigned int v20; // ebp
  size_t v21; // rsi
  unsigned int *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rbx
  _DWORD *v25; // rdi
  char *v26; // rdx
  __int64 result; // rax
  int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebp
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  void *v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rbp
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int v41; // edx
  __int64 v42; // rbp
  __int64 v43; // rdx
  void *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // [rsp+Ch] [rbp-6Ch]
  unsigned int v48; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+18h] [rbp-60h]
  __int64 v51[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1[87];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v47 = v5 - a2;
  v50 = 4LL * (unsigned int)(v5 - a2);
  v48 = *(_DWORD *)(v4 + v50);
  v6 = a1[86];
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 - 4);
      if ( v48 >= v7 )
        break;
      v8 = 48LL * *(unsigned int *)(v6 + 4LL * (v7 - 1));
      v9 = *(_QWORD **)(a1[8] + v8 + 16);
      sub_B058D0((__int64)a1, (__int64)v9);
      *(_QWORD *)(a1[8] + v8 + 16) = 0;
      v6 = a1[86];
      --*(_DWORD *)(v6 - 4);
      if ( v9 )
      {
        v10 = v9 + 10;
        sub_182EF00(v9[23], v9 + 24);
        sub_182EF00(v9[20], v9 + 21);
        sub_182EF00(v9[16], v9 + 17);
        sub_182EF00(v9[12], v9 + 13);
        do
        {
          v11 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v10 - 2);
          sub_182CBA0(v11, v10);
          v12 = *(v10 - 3);
          v13 = v12;
          if ( v12 )
          {
            v14 = *(unsigned int *)(v12 - 4);
            if ( (_DWORD)v14 )
            {
              v15 = v12 + 40 * v14;
              do
              {
                v16 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v12 + 8);
                v17 = v12 + 24;
                v12 += 40;
                sub_182CBA0(v16, v17);
              }
              while ( v12 != v15 );
              v13 = *(v10 - 3);
            }
            sub_186B220((void *)(v13 - 8));
          }
          v10 -= 5;
        }
        while ( v10 != v9 );
        sub_186B220(v10);
        v6 = a1[86];
        if ( !v6 )
          break;
      }
    }
  }
  v18 = (_DWORD *)a1[87];
  if ( v18 )
  {
    v19 = (unsigned int)*(v18 - 1);
    if ( (unsigned int)v19 >= v47 )
    {
      *(v18 - 1) = v47;
      result = a1[103];
      if ( !result )
        goto LABEL_41;
LABEL_25:
      v28 = *(_DWORD *)(result - 4);
      goto LABEL_26;
    }
    while ( 1 )
    {
      v23 = *(v18 - 2);
      if ( v23 >= v47 )
        break;
LABEL_18:
      v20 = (3 * v23 + 1) >> 1;
      v21 = 4 * v20 + 8;
      if ( 4 * v23 + 8 >= (unsigned int)v21 || v23 >= v20 )
      {
LABEL_49:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0(v51, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v51);
        sub_233E40((__int64)v51);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v18 - 2, v21);
      v18 = v22 + 2;
      *v22 = v20;
      a1[87] = v22 + 2;
    }
    *(v18 - 1) = v47;
    v24 = 4 * v19;
    v25 = &v18[(unsigned __int64)v24 / 4];
    v26 = (char *)&v18[(unsigned __int64)v50 / 4];
    if ( v50 != v24 )
      goto LABEL_23;
  }
  else if ( v47 )
  {
    v19 = 0;
    v45 = sub_186B270(0x10u);
    v23 = 2;
    v18 = (_DWORD *)(v45 + 8);
    *(_QWORD *)v45 = 2;
    a1[87] = v45 + 8;
    if ( v47 > 2 )
      goto LABEL_18;
    *(_DWORD *)(v45 + 4) = v47;
    v25 = (_DWORD *)(v45 + 8);
    v26 = (char *)&v18[(unsigned __int64)v50 / 4];
LABEL_23:
    memset(v25, 0, v26 - (char *)v25);
  }
  result = a1[103];
  if ( result )
    goto LABEL_25;
LABEL_41:
  v28 = 0;
LABEL_26:
  v29 = v28 - a2;
  v30 = *(_DWORD *)(result + 4LL * v29);
  v31 = 4LL * v29;
  v32 = a1[102];
  if ( v32 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v32 - 4);
      if ( v30 >= (unsigned int)result )
        break;
      v33 = (unsigned int)(result - 1);
      v34 = *(unsigned int *)(v32 + 4 * v33);
      *(_DWORD *)(v32 - 4) = v33;
      if ( (_DWORD)v34 != 0x7FFFFFFF )
      {
        v35 = a1[8] + 48 * v34;
        v36 = *(void **)(v35 + 40);
        sub_B05780((__int64)a1, (__int64)v36);
        *(_QWORD *)(v35 + 40) = 0;
        result = sub_B15570(v36);
        v32 = a1[102];
        if ( !v32 )
          break;
      }
    }
  }
  v37 = a1[103];
  if ( v37 )
  {
    v38 = *(unsigned int *)(v37 - 4);
    if ( (unsigned int)v38 >= v29 )
    {
      *(_DWORD *)(v37 - 4) = v29;
      return result;
    }
    while ( 1 )
    {
      v41 = *(_DWORD *)(v37 - 8);
      if ( v41 >= v29 )
        break;
LABEL_33:
      v39 = (3 * v41 + 1) >> 1;
      v40 = 4 * v39 + 8;
      if ( 4 * v41 + 8 >= (unsigned int)v40 || v41 >= v39 )
        goto LABEL_49;
      result = sub_186B300((void *)(v37 - 8), v40);
      v37 = result + 8;
      *(_DWORD *)result = v39;
      a1[103] = result + 8;
    }
    v42 = 4 * v38;
    *(_DWORD *)(v37 - 4) = v29;
    v43 = v37 + v31;
    v44 = (void *)(v37 + v42);
    if ( v31 != v42 )
      return (__int64)memset(v44, 0, v43 - (_QWORD)v44);
  }
  else if ( v29 )
  {
    v38 = 0;
    v46 = sub_186B270(0x10u);
    v41 = 2;
    v37 = v46 + 8;
    *(_QWORD *)v46 = 2;
    a1[103] = v46 + 8;
    if ( v29 > 2 )
      goto LABEL_33;
    *(_DWORD *)(v46 + 4) = v29;
    v43 = v37 + v31;
    v44 = (void *)(v46 + 8);
    return (__int64)memset(v44, 0, v43 - (_QWORD)v44);
  }
  return result;
}

