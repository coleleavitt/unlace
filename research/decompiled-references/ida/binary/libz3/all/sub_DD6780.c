__int64 __fastcall sub_DD6780(_QWORD *a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int32 v9; // r13d
  __int64 v10; // rax
  _QWORD *v11; // rdx
  int v12; // r14d
  __int64 v13; // rax
  _DWORD *v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 *v18; // r15
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 i; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 *v33; // rax
  __int64 v34; // rax
  unsigned int v36; // r15d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 v44; // r12
  __int64 v45; // rax
  char **v46; // rbp
  char **v47; // rbp
  char **exception; // rbp
  unsigned int v49; // [rsp+8h] [rbp-240h]
  __int64 v51; // [rsp+20h] [rbp-228h]
  int v52; // [rsp+2Ch] [rbp-21Ch]
  _BYTE v53[16]; // [rsp+30h] [rbp-218h] BYREF
  _BYTE v54[32]; // [rsp+40h] [rbp-208h] BYREF
  _QWORD v55[2]; // [rsp+60h] [rbp-1E8h] BYREF
  _BYTE v56[32]; // [rsp+70h] [rbp-1D8h] BYREF
  __m128i v57[27]; // [rsp+90h] [rbp-1B8h] BYREF

  v6 = *a1;
  sub_DFBCB0(*a1);
  v51 = *(_QWORD *)(v6 + 296);
  v7 = a1[206];
  if ( v7 )
  {
    v52 = *(_DWORD *)(v7 - 4);
    v8 = *(_QWORD *)(a3 + 8);
    if ( v8 )
    {
LABEL_3:
      v9 = *(_DWORD *)(v8 - 4);
      goto LABEL_4;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 8);
    v52 = 0;
    if ( v8 )
      goto LABEL_3;
  }
  v9 = 0;
LABEL_4:
  v10 = a1[187];
  if ( v10 )
  {
    v11 = (_QWORD *)a1[188];
    v12 = *(_DWORD *)(v10 - 4);
    if ( v11 )
      goto LABEL_6;
LABEL_33:
    v40 = (_QWORD *)sub_186B270(0x10u);
    v11 = v40 + 1;
    *v40 = 2;
    a1[188] = v40 + 1;
    v14 = v40 + 1;
    goto LABEL_8;
  }
  v11 = (_QWORD *)a1[188];
  v12 = 0;
  if ( !v11 )
    goto LABEL_33;
LABEL_6:
  v13 = *((unsigned int *)v11 - 1);
  if ( (_DWORD)v13 == *((_DWORD *)v11 - 2) )
  {
    v36 = (unsigned int)(3 * v13 + 1) >> 1;
    v37 = 4 * v36 + 8;
    if ( 4 * (int)v13 + 8 >= (unsigned int)v37 || (unsigned int)v13 >= v36 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DBF430(v57[0].m128i_i64, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v57);
      sub_233E40((__int64)v57);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v38 = (unsigned int *)sub_186B300(v11 - 1, v37);
    v11 = v38 + 2;
    *v38 = v36;
    v39 = v38[1];
    a1[188] = v11;
    v14 = (_DWORD *)v11 + v39;
  }
  else
  {
    v14 = (_DWORD *)v11 + v13;
  }
LABEL_8:
  *v14 = v12;
  v15 = *a4;
  ++*((_DWORD *)v11 - 1);
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = (_QWORD *)a1[206];
      v18 = &v15[v16];
      if ( v17 )
        goto LABEL_14;
      v19 = (_QWORD *)sub_186B270(0x18u);
      v17 = v19 + 1;
      *v19 = 2;
      v20 = 1;
      a1[206] = v17;
      v21 = v17;
      while ( 1 )
      {
        v23 = *v15++;
        *v21 = v23;
        *((_DWORD *)v17 - 1) = v20;
        if ( v18 == v15 )
          break;
LABEL_14:
        v24 = *((_DWORD *)v17 - 1);
        if ( v24 == *((_DWORD *)v17 - 2) )
        {
          v25 = (3 * v24 + 1) >> 1;
          v26 = 8 * v25 + 8;
          if ( 8 * v24 + 8 >= (unsigned int)v26 || v24 >= v25 )
          {
            v47 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v57[0].m128i_i64, "Overflow encountered when expanding vector");
            *v47 = (char *)off_1C63128;
            sub_2333C0(v47 + 1, v57);
            sub_233E40((__int64)v57);
            __cxa_throw(v47, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v49 = (3 * v24 + 1) >> 1;
          v27 = (unsigned int *)sub_186B300(v17 - 1, v26);
          v17 = v27 + 2;
          a1[206] = v27 + 2;
          *v27 = v49;
          LODWORD(v27) = v27[1];
          v21 = &v17[(unsigned int)v27];
          v20 = (_DWORD)v27 + 1;
        }
        else
        {
          v22 = v24;
          v20 = v24 + 1;
          v21 = &v17[v22];
        }
      }
    }
  }
  *((_DWORD *)a1 + 378) = v9;
  if ( v9 )
  {
    for ( i = 0; i != v9; ++i )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + i * 8);
      v57[0].m128i_i32[2] = v9;
      v57[0].m128i_i64[0] = v29;
      sub_DCE310((__int64)(a1 + 184), (*a4)[i], v57);
    }
  }
  sub_DD2CA0(a1);
  v30 = sub_DC2710(a1)[1];
  v31 = 0x7FFFFFFF8LL;
  if ( v30 )
    v31 = 8LL * (unsigned int)(*(_DWORD *)(v30 - 4) - 1);
  v32 = *(_QWORD *)(v30 + v31);
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v33 = sub_DC2710(a1);
  sub_39BF70(v33);
  v34 = a1[206];
  if ( v34 )
    *(_DWORD *)(v34 - 4) = v52;
  sub_DCF8B0((__int64)(a1 + 184));
  *((_DWORD *)a1 + 378) = 0;
  if ( *(_QWORD *)(a2 + 40) != sub_15D1F10(v32) )
  {
    std::ostringstream::basic_ostringstream(v57);
    std::__ostream_insert<char,std::char_traits<char>>();
    v41 = *a1;
    sub_DFBCB0(*a1);
    sub_1606360(v53, *(_QWORD *)(a2 + 40), *(_QWORD *)(v41 + 296), 0, 0, 0);
    v42 = sub_160E8B0(v57, v53);
    std::__ostream_insert<char,std::char_traits<char>>();
    v43 = *a1;
    sub_DFBCB0(*a1);
    v44 = *(_QWORD *)(v43 + 296);
    v45 = sub_15D1F10(v32);
    sub_1606360(v55, v45, v44, 0, 0, 0);
    sub_160E8B0(v42, v55);
    sub_18572D0(v56);
    sub_18572D0(v54);
    v46 = (char **)__cxa_allocate_exception(0x30u);
    std::stringbuf::str(v55, &v57[0].m128i_u64[1]);
    *v46 = (char *)off_1C63128;
    sub_2333C0(v46 + 1, v55);
    v46[5] = (char *)-1LL;
    *v46 = (char *)off_1C64218;
    sub_233E40((__int64)v55);
    __cxa_throw(v46, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_E03C40(*a1, a2, a3, a4, v32);
  return sub_DBF390(v32, v51);
}

