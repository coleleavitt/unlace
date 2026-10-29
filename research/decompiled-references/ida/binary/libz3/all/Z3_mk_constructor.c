_QWORD *__fastcall Z3_mk_constructor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        __int64 *a6,
        int *a7)
{
  char **v7; // r14
  char **exception; // r15
  char **v9; // r14
  __int64 *v12; // rbx
  char v13; // al
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  int *v16; // r15
  _QWORD *v17; // rdx
  __int64 *v18; // r14
  __int64 v19; // rsi
  int v20; // eax
  _QWORD *v21; // rsi
  __int64 v22; // r13
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rsi
  int v26; // eax
  _QWORD *v27; // rsi
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rsi
  int v31; // eax
  __int64 v32; // r13
  unsigned int v33; // eax
  unsigned int v34; // r9d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int v40; // r13d
  unsigned int *v41; // rax
  __int64 v42; // rax
  unsigned int v43; // r9d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rsi
  _QWORD *v47; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  char v51; // [rsp+7h] [rbp-69h]
  __int64 v52; // [rsp+10h] [rbp-60h]
  unsigned int v53; // [rsp+10h] [rbp-60h]
  unsigned int v54; // [rsp+10h] [rbp-60h]
  __int64 *v55; // [rsp+18h] [rbp-58h]
  char *v56[10]; // [rsp+20h] [rbp-50h] BYREF

  v12 = a5;
  v55 = a6;
  v13 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v51 = v13;
  if ( v13 )
    sub_295570(a1, a2, a3, a4, a5, a6, a7);
  *(_DWORD *)(a1 + 1520) = 0;
  v52 = *(_QWORD *)(a1 + 232);
  v14 = (_QWORD *)sub_186B270(0x40u);
  v14[2] = 0;
  v15 = v14;
  v14[4] = 0;
  v14[3] = v52;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = v52;
  *v14 = a2;
  v14[1] = a3;
  if ( a4 )
  {
    v16 = a7;
    v17 = nullptr;
    v18 = &v12[a4];
    while ( 1 )
    {
      v32 = *v12;
      if ( v17 )
      {
        v33 = *((_DWORD *)v17 - 1);
        if ( v33 == *((_DWORD *)v17 - 2) )
        {
          v34 = (3 * v33 + 1) >> 1;
          v35 = 8 * v34 + 8;
          if ( 8 * v33 + 8 >= (unsigned int)v35 || v33 >= v34 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_A64A2(v56);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v56);
            sub_233E40((__int64)v56);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v53 = (3 * v33 + 1) >> 1;
          v36 = (unsigned int *)sub_186B300(v17 - 1, v35);
          v37 = v36[1];
          v17 = v36 + 2;
          v15[2] = v36 + 2;
          *v36 = v53;
          LODWORD(v36) = v37;
          v21 = &v17[v37];
          v20 = (_DWORD)v36 + 1;
        }
        else
        {
          v19 = v33;
          v20 = v33 + 1;
          v21 = &v17[v19];
        }
      }
      else
      {
        v49 = (_QWORD *)sub_186B270(0x18u);
        v17 = v49 + 1;
        *v49 = 2;
        v20 = 1;
        v15[2] = v17;
        v21 = v17;
      }
      *v21 = v32;
      *((_DWORD *)v17 - 1) = v20;
      v22 = *v55;
      if ( *v55 )
        ++*(_DWORD *)(v22 + 8);
      v23 = (_QWORD *)v15[4];
      if ( !v23 )
        break;
      v24 = *((_DWORD *)v23 - 1);
      if ( v24 != *((_DWORD *)v23 - 2) )
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v23[v25];
        goto LABEL_11;
      }
      v43 = (3 * v24 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v24 + 8 >= (unsigned int)v44 || v24 >= v43 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_A64A2(v56);
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v56);
        sub_233E40((__int64)v56);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v54 = (3 * v24 + 1) >> 1;
      v45 = (unsigned int *)sub_186B300(v23 - 1, v44);
      v46 = v45[1];
      v15[4] = v45 + 2;
      *v45 = v54;
      *(_QWORD *)&v45[2 * v46 + 2] = v22;
      v45[1] = v46 + 1;
      v28 = (_QWORD *)v15[5];
      if ( !v28 )
      {
LABEL_26:
        v47 = (_QWORD *)sub_186B270(0x10u);
        v28 = v47 + 1;
        *v47 = 2;
        v15[5] = v47 + 1;
        v30 = v47 + 1;
        goto LABEL_13;
      }
LABEL_12:
      v29 = *((unsigned int *)v28 - 1);
      v30 = (_DWORD *)v28 + v29;
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v38 = (unsigned int)(3 * v29 + 1) >> 1;
        v39 = 4 * v38 + 8;
        v40 = v38;
        if ( 4 * (int)v29 + 8 >= (unsigned int)v39 || (unsigned int)v29 >= v38 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_A64A2(v56);
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v56);
          sub_233E40((__int64)v56);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v28 - 1, v39);
        v28 = v41 + 2;
        *v41 = v40;
        v42 = v41[1];
        v15[5] = v28;
        v30 = (_DWORD *)v28 + v42;
      }
LABEL_13:
      v31 = *v16;
      ++v12;
      ++v55;
      ++v16;
      *v30 = v31;
      ++*((_DWORD *)v28 - 1);
      if ( v12 == v18 )
        goto LABEL_27;
      v17 = (_QWORD *)v15[2];
    }
    v50 = (_QWORD *)sub_186B270(0x18u);
    v23 = v50 + 1;
    *v50 = 2;
    v26 = 1;
    v15[4] = v23;
    v27 = v23;
LABEL_11:
    *v27 = v22;
    *((_DWORD *)v23 - 1) = v26;
    v28 = (_QWORD *)v15[5];
    if ( !v28 )
      goto LABEL_26;
    goto LABEL_12;
  }
LABEL_27:
  if ( v51 )
  {
    sub_2BB620(v15);
    byte_1C7EBA0 = 1;
  }
  return v15;
}

