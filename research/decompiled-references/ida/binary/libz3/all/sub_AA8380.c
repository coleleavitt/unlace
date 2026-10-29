__int64 __fastcall sub_AA8380(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // rbx
  char **v5; // r13
  unsigned int v6; // r14d
  unsigned int *v9; // r15
  unsigned int *v10; // rbp
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  unsigned int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r15
  unsigned int *v22; // rdi
  __int64 *v23; // rbx
  unsigned int *v24; // r15
  double v25; // r14
  unsigned int v26; // eax
  __int64 v27; // rbp
  unsigned int v28; // edx
  __int64 *v29; // rax
  unsigned int v30; // ecx
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // zf
  double v38; // r14
  __int64 *v39; // rbp
  unsigned __int64 v40; // r13
  __int64 v41; // rsi
  unsigned int *v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  unsigned int v46; // [rsp+10h] [rbp-88h]
  double v47[2]; // [rsp+18h] [rbp-80h] BYREF
  double v48; // [rsp+30h] [rbp-68h]
  __m128 v49; // [rsp+40h] [rbp-58h] BYREF

  v6 = a3;
  if ( a3 )
  {
    v9 = a4;
    v45 = a3;
    v10 = &a4[a3];
    v11 = (unsigned int *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v11 - 1) = 2;
    v12 = v11;
    while ( 1 )
    {
      v13 = *v9++;
      *v11 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( v10 == v9 )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 4 * v17 + 8;
        if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v49, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v49);
          sub_233E40((__int64)&v49);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v12 - 2, v18);
        v12 = v19 + 2;
        *v19 = v17;
        v11 = &v19[v19[1] + 2];
      }
      else
      {
        v11 = &v12[v15];
      }
    }
    v20 = (unsigned int)v15;
    v21 = 0;
    if ( v14 == -1 )
    {
LABEL_16:
      std::__ostream_insert<char,std::char_traits<char>>();
      v22 = v12 - 2;
      v23 = nullptr;
      sub_186B220(v22);
      v24 = a4;
      v25 = *(double *)(a1 + 104);
      v44 = &a4[v45];
      v26 = *v24;
      v47[0] = v25;
      v48 = v25;
      if ( dword_1C7ECE4 != v26 )
        goto LABEL_17;
      v27 = *(_QWORD *)(*(_QWORD *)&v25 + 856LL);
      v23 = nullptr;
      if ( v27 )
        goto LABEL_20;
LABEL_33:
      while ( 2 )
      {
        v29 = (__int64 *)(sub_186B270(0x18u) + 8);
        v6 = 1;
        *(v29 - 1) = 2;
        v23 = v29;
        while ( 1 )
        {
          while ( 1 )
          {
            *v29 = v27;
            ++v24;
            *((_DWORD *)v23 - 1) = v6;
            if ( v44 == v24 )
              goto LABEL_37;
            v26 = *v24;
            v25 = *(double *)(a1 + 104);
            if ( *v24 != dword_1C7ECE4 )
              break;
            v27 = *(_QWORD *)(*(_QWORD *)&v25 + 856LL);
            if ( v27 )
              goto LABEL_20;
            v28 = *((_DWORD *)v23 - 1);
            if ( v28 == *((_DWORD *)v23 - 2) )
              goto LABEL_28;
LABEL_23:
            v6 = v28 + 1;
            v29 = &v23[v28];
          }
LABEL_17:
          if ( v26 != dword_1C7ECE0 )
            break;
          v27 = *(_QWORD *)(*(_QWORD *)&v25 + 864LL);
          if ( v27 )
            goto LABEL_20;
          if ( !v23 )
            goto LABEL_33;
LABEL_22:
          v28 = *((_DWORD *)v23 - 1);
          if ( v28 != *((_DWORD *)v23 - 2) )
            goto LABEL_23;
LABEL_28:
          v30 = (3 * v28 + 1) >> 1;
          v31 = 8 * v30 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v31 || v28 >= v30 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v49, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v49);
            sub_233E40((__int64)&v49);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = (3 * v28 + 1) >> 1;
          v32 = (unsigned int *)sub_186B300(v23 - 1, v31);
          v23 = (__int64 *)(v32 + 2);
          *v32 = v46;
          v33 = v32[1];
          v29 = (__int64 *)&v32[2 * v33 + 2];
          v6 = v33 + 1;
        }
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v26 >> 1));
        if ( (v26 & 1) != 0 )
        {
          v27 = sub_15E1A70(SLODWORD(v25));
          if ( !v27 )
          {
LABEL_21:
            if ( !v23 )
              continue;
            goto LABEL_22;
          }
        }
        else if ( !v27 )
        {
          goto LABEL_21;
        }
        break;
      }
LABEL_20:
      ++*(_DWORD *)(v27 + 8);
      goto LABEL_21;
    }
    while ( 1 )
    {
      if ( v21 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v12[v21] == -2 )
          goto LABEL_15;
LABEL_12:
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        if ( ++v21 == v20 )
          goto LABEL_16;
      }
      else
      {
        if ( *v12 != -2 )
          goto LABEL_12;
LABEL_15:
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( ++v21 == v20 )
          goto LABEL_16;
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v23 = nullptr;
  v47[0] = *(double *)(a1 + 104);
  v48 = v47[0];
LABEL_37:
  v34 = sub_15EC240(*(_QWORD *)&v47[0], v6);
  v49 = _mm_loadh_ps(v47);
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  sub_160EBE0(a2, &v49);
  std::__ostream_insert<char,std::char_traits<char>>();
  v35 = v49.m128_u64[0];
  if ( v49.m128_u64[0] )
  {
    v36 = v49.m128_i64[1];
    v37 = (*(_DWORD *)(v49.m128_u64[0] + 8))-- == 1;
    if ( v37 )
      sub_15D7BC0(v36, v35);
  }
  if ( v23 )
  {
    v38 = v47[0];
    v39 = v23;
    v40 = (unsigned __int64)&v23[*((unsigned int *)v23 - 1)];
    if ( (unsigned __int64)v23 < v40 )
    {
      do
      {
        while ( 1 )
        {
          v41 = *v39;
          if ( *v39 )
          {
            v37 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v37 )
              break;
          }
          if ( (unsigned __int64)++v39 >= v40 )
            goto LABEL_49;
        }
        ++v39;
        sub_15D7BC0(*(_QWORD *)&v38, v41);
      }
      while ( (unsigned __int64)v39 < v40 );
    }
LABEL_49:
    sub_186B220(v23 - 1);
  }
  return a2;
}

