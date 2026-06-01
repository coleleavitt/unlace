__int64 __fastcall sub_6870C0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rbp
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 *v16; // rdx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  __int64 *v21; // rsi
  _QWORD *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // r10d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rsi
  unsigned int i; // r12d
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  char **v40; // r13
  __int64 v41; // rdx
  char **v42; // r14
  __int64 v43; // rdx
  char **exception; // r14
  __int64 v45; // rdx
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+8h] [rbp-70h]
  unsigned int v51; // [rsp+14h] [rbp-64h]
  unsigned int v52; // [rsp+14h] [rbp-64h]
  __int64 v53; // [rsp+18h] [rbp-60h]
  __m128i v54[5]; // [rsp+20h] [rbp-58h] BYREF

  v3 = sub_679460((__int64)a1, a2);
  v53 = v3;
  if ( !*(_DWORD *)(v3 + 12) )
  {
    v54[0] = (__m128i)*(unsigned __int64 *)(a1[1] + 856LL);
    sub_686B20(v3, v54);
  }
  v4 = *(_QWORD **)v53;
  v5 = *(_QWORD *)v53 + 16LL * *(unsigned int *)(v53 + 8);
  if ( *(_QWORD *)v53 == v5 )
    goto LABEL_4;
  while ( *v4 <= 1u )
  {
    v4 += 2;
    if ( (_QWORD *)v5 == v4 )
      goto LABEL_4;
  }
  if ( v4 == (_QWORD *)v5 )
  {
LABEL_4:
    sub_1376FA0(*(_QWORD *)(a1[3] + 64LL), a2, 0, 0);
    return v53;
  }
  v6 = (_QWORD *)v4[1];
  if ( v6 )
    return v53;
  v7 = (_QWORD *)sub_186B270(0x18u);
  v8 = v7 + 1;
  v9 = v7 + 1;
  *v7 = 2;
  v10 = 1;
  while ( 1 )
  {
    v11 = a1[1];
    *v8 = *v4;
    *((_DWORD *)v9 - 1) = v10;
    if ( v6 )
    {
      v12 = sub_15E1890(v11);
      v13 = *((_DWORD *)v6 - 1);
      if ( v13 == *((_DWORD *)v6 - 2) )
      {
        v35 = (3 * v13 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v36 || v13 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_107EF6(v54[0].m128i_i64, "Overflow encountered when expanding vector", v45);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v54);
          sub_233E40((__int64)v54);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = (3 * v13 + 1) >> 1;
        v48 = v12;
        v37 = (unsigned int *)sub_186B300(v6 - 1, v36);
        v6 = v37 + 2;
        v12 = v48;
        *v37 = v52;
        LODWORD(v37) = v37[1];
        v16 = &v6[(unsigned int)v37];
        v15 = (_DWORD)v37 + 1;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v6[v14];
      }
    }
    else
    {
      v49 = sub_15E1890(v11);
      v38 = (_QWORD *)sub_186B270(0x18u);
      v16 = v38 + 1;
      v12 = v49;
      v6 = v38 + 1;
      *v38 = 2;
      v15 = 1;
    }
    *v16 = v12;
    *((_DWORD *)v6 - 1) = v15;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v17 = (_QWORD *)a1[7];
    if ( !v17 )
    {
      v50 = v12;
      v39 = (_QWORD *)sub_186B270(0x18u);
      v17 = v39 + 1;
      v12 = v50;
      a1[7] = v39 + 1;
      v21 = v39 + 1;
      *v39 = 2;
      v20 = 1;
      goto LABEL_18;
    }
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 != *((_DWORD *)v17 - 2) )
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v17[v19];
LABEL_18:
      *v21 = v12;
      *((_DWORD *)v17 - 1) = v20;
      v22 = v4 + 2;
      if ( (_QWORD *)v5 != v4 + 2 )
        goto LABEL_21;
LABEL_29:
      sub_1376FA0(*(_QWORD *)(a1[3] + 64LL), a2, *((unsigned int *)v6 - 1), v6);
      for ( i = 0; i < *((_DWORD *)v9 - 1); ++i )
      {
        v54[0] = (__m128i)_mm_loadh_ps((const double *)&v6[i]);
        sub_686B20(v53, v54);
      }
      sub_186B220(v6 - 1);
      sub_186B220(v9 - 1);
      return v53;
    }
    v25 = (3 * v18 + 1) >> 1;
    v26 = 8 * v25 + 8;
    if ( 8 * v18 + 8 >= (unsigned int)v26 || v18 >= v25 )
    {
      v42 = (char **)__cxa_allocate_exception(0x28u);
      sub_107EF6(v54[0].m128i_i64, "Overflow encountered when expanding vector", v43);
      *v42 = (char *)off_1C63128;
      sub_2333C0(v42 + 1, v54);
      sub_233E40((__int64)v54);
      __cxa_throw(v42, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v51 = (3 * v18 + 1) >> 1;
    v47 = v12;
    v27 = (unsigned int *)sub_186B300(v17 - 1, v26);
    v28 = v27[1];
    a1[7] = v27 + 2;
    *v27 = v51;
    *(_QWORD *)&v27[2 * v28 + 2] = v47;
    v27[1] = v28 + 1;
    v22 = v4 + 2;
    if ( (_QWORD *)v5 == v4 + 2 )
      goto LABEL_29;
LABEL_21:
    while ( 1 )
    {
      v4 = v22;
      if ( *v22 > 1u )
        break;
      v22 += 2;
      if ( (_QWORD *)v5 == v22 )
        goto LABEL_29;
    }
    if ( (_QWORD *)v5 == v22 )
      goto LABEL_29;
    if ( v22[1] )
      break;
    v23 = *((_DWORD *)v9 - 1);
    if ( v23 == *((_DWORD *)v9 - 2) )
    {
      v31 = (3 * v23 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v32 || v23 >= v31 )
      {
        v40 = (char **)__cxa_allocate_exception(0x28u);
        sub_107EF6(v54[0].m128i_i64, "Overflow encountered when expanding vector", v41);
        *v40 = (char *)off_1C63128;
        sub_2333C0(v40 + 1, v54);
        sub_233E40((__int64)v54);
        __cxa_throw(v40, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v9 - 1, v32);
      v34 = v33[1];
      v9 = v33 + 2;
      *v33 = v31;
      LODWORD(v33) = v34;
      v8 = &v9[v34];
      v10 = (_DWORD)v33 + 1;
    }
    else
    {
      v24 = v23;
      v10 = v23 + 1;
      v8 = &v9[v24];
    }
  }
  if ( !v6 )
  {
    if ( !v9 )
      return v53;
    goto LABEL_43;
  }
  sub_186B220(v6 - 1);
  if ( v9 )
LABEL_43:
    sub_186B220(v9 - 1);
  return v53;
}

