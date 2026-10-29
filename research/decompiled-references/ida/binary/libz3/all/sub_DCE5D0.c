__int64 __fastcall sub_DCE5D0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // ebx
  __int64 v7; // rax
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  size_t v15; // rsi
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  int v18; // esi
  unsigned int *v19; // rdx
  __int64 v20; // rdi
  unsigned int *v21; // r8
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rdx
  _QWORD *v25; // r12
  unsigned int v26; // ebp
  __int64 v27; // rsi
  int v28; // eax
  __int64 *v29; // rsi
  __int64 v30; // rsi
  __int32 v31; // eax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 *v34; // r9
  __int64 v35; // r14
  __int64 *v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // r10d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  __int64 *v42; // rdi
  __int64 v43; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // ebp
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  char **exception; // rbx
  _QWORD *v53; // rbx
  int v54; // [rsp+0h] [rbp-78h]
  unsigned int v55; // [rsp+8h] [rbp-70h]
  unsigned int ptr; // [rsp+10h] [rbp-68h]
  __int64 *ptra; // [rsp+10h] [rbp-68h]
  _QWORD *ptrb; // [rsp+10h] [rbp-68h]
  __int64 *ptrc; // [rsp+10h] [rbp-68h]
  __int64 v60; // [rsp+18h] [rbp-60h]
  unsigned int v61; // [rsp+18h] [rbp-60h]
  __int64 *v62; // [rsp+18h] [rbp-60h]
  __m128i v63[5]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1[206];
  if ( v2 )
    ptr = *(_DWORD *)(v2 - 4);
  else
    ptr = 0;
  v3 = sub_DC07A0(a1)[1];
  if ( v3 )
    v55 = *(_DWORD *)(v3 - 4);
  else
    v55 = 0;
  sub_DBF660((__int64)a1, "invalid list of sorted variables, '(' expected");
  v4 = a1[187];
  if ( v4 )
  {
    v5 = (_QWORD *)a1[188];
    v6 = *(_DWORD *)(v4 - 4);
    if ( v5 )
      goto LABEL_7;
  }
  else
  {
    v5 = (_QWORD *)a1[188];
    v6 = 0;
    if ( v5 )
    {
LABEL_7:
      v7 = *((unsigned int *)v5 - 1);
      if ( (_DWORD)v7 == *((_DWORD *)v5 - 2) )
      {
        v47 = (unsigned int)(3 * v7 + 1) >> 1;
        v48 = 4 * v47 + 8;
        if ( 4 * (int)v7 + 8 >= (unsigned int)v48 || (unsigned int)v7 >= v47 )
        {
LABEL_57:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_DBF430(v63[0].m128i_i64, "Overflow encountered when expanding vector");
          goto LABEL_58;
        }
        v49 = (unsigned int *)sub_186B300(v5 - 1, v48);
        v5 = v49 + 2;
        *v49 = v47;
        v50 = v49[1];
        a1[188] = v5;
        v8 = (_DWORD *)v5 + v50;
      }
      else
      {
        v8 = (_DWORD *)v5 + v7;
      }
      goto LABEL_9;
    }
  }
  v51 = (_QWORD *)sub_186B270(0x10u);
  v5 = v51 + 1;
  *v51 = 2;
  a1[188] = v51 + 1;
  v8 = v51 + 1;
LABEL_9:
  *v8 = v6;
  ++*((_DWORD *)v5 - 1);
  if ( *((_DWORD *)a1 + 356) == 2 )
  {
    v9 = 0;
    sub_DC0980(a1);
    sub_DC07A0(a1);
    return v9;
  }
  v9 = 0;
  v54 = (_DWORD)a1 + 16;
  do
  {
    sub_DBF660((__int64)a1, "invalid sorted variable, '(' expected");
    if ( *((_DWORD *)a1 + 356) != 4 )
    {
      v53 = __cxa_allocate_exception(0x30u);
      sub_305660(v53, "invalid sorted variable, symbol expected");
      __cxa_throw(v53, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v12 = a1[206];
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 - 4);
      if ( v13 != *(_DWORD *)(v12 - 8) )
      {
        *(_QWORD *)(v12 + 8LL * v13) = a1[6];
        *(_DWORD *)(v12 - 4) = v13 + 1;
        goto LABEL_12;
      }
      v14 = (3 * v13 + 1) >> 1;
      v15 = 8 * v14 + 8;
      v16 = v14;
      if ( 8 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
        goto LABEL_57;
      v17 = (unsigned int *)sub_186B300((void *)(v12 - 8), v15);
      v18 = *((_DWORD *)a1 + 356);
      v19 = v17 + 2;
      v20 = v17[1];
      *v17 = v16;
      a1[206] = v17 + 2;
      v21 = &v17[2 * v20 + 2];
      v22 = v20 + 1;
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x18u);
      v18 = *((_DWORD *)a1 + 356);
      v19 = (unsigned int *)(v46 + 1);
      *v46 = 2;
      v22 = 1;
      a1[206] = v19;
      v21 = v19;
    }
    *(_QWORD *)v21 = a1[6];
    *(v19 - 1) = v22;
    if ( v18 != 9 )
    {
      if ( v18 == 1 )
      {
        ++*((_DWORD *)a1 + 524);
      }
      else if ( v18 == 2 )
      {
        v10 = a1[176];
        --*((_DWORD *)a1 + 524);
        if ( !v10 )
        {
LABEL_26:
          v11 = 0;
          goto LABEL_14;
        }
LABEL_13:
        v11 = *(_DWORD *)(v10 - 4);
LABEL_14:
        *((_DWORD *)a1 + 517) = v11;
        *((_DWORD *)a1 + 356) = sub_DDB0A0(v54, v54, v55, ptr, v60);
        goto LABEL_15;
      }
LABEL_12:
      v10 = a1[176];
      if ( !v10 )
        goto LABEL_26;
      goto LABEL_13;
    }
LABEL_15:
    ++v9;
    sub_DC3500(a1, "invalid sorted variables");
    sub_DBF8C0((__int64)a1, "invalid sorted variable, ')' expected");
  }
  while ( *((_DWORD *)a1 + 356) != 2 );
  sub_DC0980(a1);
  v23 = a1[206] + 8LL * ptr;
  v24 = sub_DC07A0(a1)[1];
  *((_DWORD *)a1 + 378) += v9;
  v25 = (_QWORD *)(v24 + 8LL * v55);
  if ( v9 )
  {
    v26 = v9;
    do
    {
      v32 = *a1;
      --v26;
      sub_DFBCB0(*a1);
      v33 = sub_15DB5C0(*(_QWORD *)(v32 + 296), v26, *v25);
      v34 = (__int64 *)a1[202];
      v35 = v33;
      if ( v34 )
      {
        v36 = (__int64 *)v34[1];
      }
      else
      {
        v62 = (__int64 *)sub_186B270(0x10u);
        ptrb = (_QWORD *)*a1;
        sub_DFBCB0(*a1);
        v34 = v62;
        v36 = nullptr;
        v42 = (__int64 *)a1[202];
        v43 = ptrb[37];
        v62[1] = 0;
        *v62 = v43;
        if ( v62 != v42 )
        {
          if ( !v42 )
          {
            a1[202] = v62;
            if ( v35 )
              ++*(_DWORD *)(v35 + 8);
LABEL_48:
            ptrc = v34;
            v45 = (_QWORD *)sub_186B270(0x18u);
            v36 = v45 + 1;
            *v45 = 2;
            v28 = 1;
            ptrc[1] = (__int64)v36;
            v29 = v36;
            goto LABEL_31;
          }
          sub_2334C0(v42);
          sub_186B220(v42);
          v34 = v62;
          a1[202] = v62;
          v36 = (__int64 *)v62[1];
        }
      }
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      if ( !v36 )
        goto LABEL_48;
      v37 = *((_DWORD *)v36 - 1);
      if ( v37 == *((_DWORD *)v36 - 2) )
      {
        v38 = (3 * v37 + 1) >> 1;
        v39 = 8 * v38 + 8;
        if ( 8 * v37 + 8 >= (unsigned int)v39 || v37 >= v38 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_DBF430(v63[0].m128i_i64, "Overflow encountered when expanding vector");
LABEL_58:
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v63);
          sub_233E40((__int64)v63);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (3 * v37 + 1) >> 1;
        ptra = v34;
        v40 = (unsigned int *)sub_186B300(v36 - 1, v39);
        v41 = v40[1];
        v36 = (__int64 *)(v40 + 2);
        ptra[1] = (__int64)(v40 + 2);
        *v40 = v61;
        LODWORD(v40) = v41;
        v29 = &v36[v41];
        v28 = (_DWORD)v40 + 1;
      }
      else
      {
        v27 = v37;
        v28 = v37 + 1;
        v29 = &v36[v27];
      }
LABEL_31:
      *v29 = v35;
      ++v25;
      v23 += 8;
      *((_DWORD *)v36 - 1) = v28;
      v30 = *(_QWORD *)(v23 - 8);
      v31 = *((_DWORD *)a1 + 378);
      v63[0].m128i_i64[0] = v35;
      v63[0].m128i_i32[2] = v31;
      sub_DCE310((__int64)(a1 + 184), v30, v63);
    }
    while ( v26 );
  }
  return v9;
}

