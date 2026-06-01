__int64 __fastcall sub_3B3120(__int64 a1, double a2)
{
  _QWORD *v3; // rax
  _OWORD *v4; // r12
  unsigned int v5; // r15d
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  unsigned int v8; // edx
  unsigned int v9; // r13d
  size_t v10; // rsi
  unsigned int *v11; // rax
  char *v12; // rdx
  char *v13; // rdi
  _OWORD *v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r14
  _BYTE *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rsi
  unsigned int v35; // r12d
  unsigned int v36; // eax
  unsigned int v37; // r12d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // r15
  __int64 v46; // r13
  char *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // r14
  __int64 v50; // rax
  _QWORD *v51; // r15
  __int64 v52; // rax
  unsigned int j; // r13d
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // rsi
  __int64 v57; // r15
  __int64 v58; // r13
  __int64 v59; // r14
  __int64 v60; // rax
  _QWORD *v61; // r15
  __int64 v62; // rax
  unsigned int m; // r13d
  char **v64; // r12
  __int64 v65; // rdx
  char **exception; // r12
  __int64 v67; // rdx
  unsigned int v68; // [rsp+0h] [rbp-68h]
  __int64 v69; // [rsp+0h] [rbp-68h]
  unsigned int i; // [rsp+0h] [rbp-68h]
  unsigned int k; // [rsp+0h] [rbp-68h]
  __int64 v72; // [rsp+8h] [rbp-60h]
  __int64 v73[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (_QWORD *)sub_186B270(0x18u);
  v4 = *(_OWORD **)(a1 + 640);
  v5 = *(_DWORD *)(a1 + 628);
  v6 = v3;
  v7 = v3 + 1;
  v3[1] = *(_QWORD *)a1;
  *v3 = 0x100000002LL;
  if ( v4 )
  {
    v68 = *((_DWORD *)v4 - 1);
    if ( v68 >= v5 )
    {
      *((_DWORD *)v4 - 1) = v5;
      if ( !v5 )
        goto LABEL_23;
      goto LABEL_9;
    }
    v8 = *((_DWORD *)v4 - 2);
    if ( v8 < v5 )
    {
      do
      {
LABEL_4:
        v9 = (3 * v8 + 1) >> 1;
        v10 = v9 + 8;
        if ( v8 + 8 >= (unsigned int)v10 || v8 >= v9 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C7E7E(v73, "Overflow encountered when expanding vector", v67);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = (unsigned int *)sub_186B300((char *)v4 - 8, v10);
        v4 = v11 + 2;
        *v11 = v9;
        v8 = v9;
        *(_QWORD *)(a1 + 640) = v11 + 2;
      }
      while ( v9 < v5 );
      v11[1] = v5;
      v12 = (char *)v4 + v5;
      v13 = (char *)v4 + v68;
      if ( v68 == v5 )
        goto LABEL_9;
      goto LABEL_8;
    }
    *((_DWORD *)v4 - 1) = v5;
    v12 = (char *)v4 + v5;
    v13 = (char *)v4 + v68;
  }
  else
  {
    if ( !v5 )
      goto LABEL_23;
    v41 = sub_186B270(0xAu);
    v4 = (_OWORD *)(v41 + 8);
    v8 = 2;
    *(_QWORD *)v41 = 2;
    *(_QWORD *)(a1 + 640) = v41 + 8;
    if ( v5 > 2 )
    {
      v68 = 0;
      goto LABEL_4;
    }
    *(_DWORD *)(v41 + 4) = v5;
    v13 = (char *)(v41 + 8);
    v12 = (char *)v4 + v5;
  }
LABEL_8:
  memset(v13, 0, v12 - v13);
LABEL_9:
  if ( v5 - 1 <= 0xE )
  {
    v17 = 0;
  }
  else
  {
    v14 = v4;
    a2 = 0.0;
    v15 = v5 >> 4;
    v16 = &v4[v15];
    if ( ((v15 * 16) & 0x10) == 0 || (v14 = v4 + 1, *v4 = 0, v4 + 1 != v16) )
    {
      do
      {
        *v14 = 0;
        v14 += 2;
        *(v14 - 1) = 0;
      }
      while ( v14 != v16 );
    }
    v17 = v5 & 0xFFFFFFF0;
    if ( (v5 & 0xF) == 0 )
      goto LABEL_23;
  }
  v18 = v5 - v17;
  if ( v5 - v17 - 1 <= 6 || (*(_QWORD *)((char *)v4 + v17) = 0, v17 += v18 & 0xFFFFFFF8, (v18 & 7) != 0) )
  {
    *((_BYTE *)v4 + v17) = 0;
    v19 = v17 + 1;
    if ( (unsigned int)v19 < v5 )
    {
      *((_BYTE *)v4 + v19) = 0;
      v20 = v17 + 2;
      if ( (unsigned int)v20 < v5 )
      {
        *((_BYTE *)v4 + v20) = 0;
        v21 = v17 + 3;
        if ( (unsigned int)v21 < v5 )
        {
          *((_BYTE *)v4 + v21) = 0;
          v22 = v17 + 4;
          if ( (unsigned int)v22 < v5 )
          {
            *((_BYTE *)v4 + v22) = 0;
            v23 = v17 + 5;
            if ( (unsigned int)v23 < v5 )
            {
              v24 = v17 + 6;
              *((_BYTE *)v4 + v23) = 0;
              if ( (unsigned int)v24 < v5 )
                *((_BYTE *)v4 + v24) = 0;
            }
          }
        }
      }
    }
  }
LABEL_23:
  v25 = *((_DWORD *)v6 + 1);
  while ( 1 )
  {
LABEL_24:
    if ( !v25 )
    {
      v35 = 1;
      goto LABEL_39;
    }
    v26 = v25 - 1;
    v27 = v7[v26];
    --v25;
    *((_DWORD *)v7 - 1) = v26;
    v28 = (_BYTE *)(*(_QWORD *)(a1 + 640) + *(unsigned int *)(v27 + 36));
    if ( !*v28 )
    {
      *v28 = 1;
      v29 = *(_QWORD *)(v27 + 24);
      if ( v29 )
      {
        v30 = *(unsigned int *)(v29 - 4);
        if ( (_DWORD)v30 )
          break;
      }
    }
  }
  v31 = 0;
  v72 = 8 * v30;
  v69 = a1 + 32;
  while ( 1 )
  {
    v33 = *(_QWORD *)(v29 + v31);
    v34 = *(_QWORD *)(v27 + 8);
    v35 = sub_182A680(v69, v34, *(_QWORD *)(v33 + 8), a2);
    if ( !(_BYTE)v35 )
      break;
    v36 = *((_DWORD *)v7 - 1);
    if ( v36 == *((_DWORD *)v7 - 2) )
    {
      v37 = (3 * v36 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
      {
        v64 = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(v73, "Overflow encountered when expanding vector", v65);
        *v64 = (char *)off_1C63128;
        sub_2333C0(v64 + 1, v73);
        sub_233E40((__int64)v73);
        __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v7 - 1, v38);
      *v39 = v37;
      v7 = v39 + 2;
      v36 = v39[1];
    }
    v32 = v36;
    v25 = v36 + 1;
    v31 += 8;
    v7[v32] = v33;
    *((_DWORD *)v7 - 1) = v25;
    if ( v72 == v31 )
      goto LABEL_24;
    v29 = *(_QWORD *)(v27 + 24);
  }
  sub_180B130(v69);
  if ( (unsigned __int8)sub_186A530() )
  {
    sub_186A4C0();
    v42 = *(_QWORD *)(v27 + 8);
    v43 = sub_180B150(v69, v34);
    std::__ostream_insert<char,std::char_traits<char>>();
    v44 = v43;
    sub_182A9A0(v69, v43, v42);
    v45 = *(_QWORD *)(v33 + 8);
    v46 = sub_180B150(v69, v44);
    std::__ostream_insert<char,std::char_traits<char>>();
    v47 = (char *)v46;
    v48 = a1 + 32;
    sub_182A9A0(v69, v46, v45);
    v49 = sub_180B150(v69, v46);
    v50 = *(_QWORD *)(a1 + 16);
    for ( i = 0; v50; ++i )
    {
      if ( i >= *(_DWORD *)(v50 - 4) )
        break;
      v51 = *(_QWORD **)(v50 + 8LL * i);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_182A9A0(*v51, v49, v51[1]);
      v52 = v51[3];
      for ( j = 0; v52; ++j )
      {
        if ( j >= *(_DWORD *)(v52 - 4) )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        v52 = v51[3];
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v47 = "\n";
      v48 = v49;
      std::__ostream_insert<char,std::char_traits<char>>();
      v50 = *(_QWORD *)(a1 + 16);
    }
    sub_186A500(v48, v47);
  }
  else
  {
    v54 = *(_QWORD *)(v27 + 8);
    v55 = sub_180B150(v69, v34);
    std::__ostream_insert<char,std::char_traits<char>>();
    v56 = v55;
    sub_182A9A0(v69, v55, v54);
    v57 = *(_QWORD *)(v33 + 8);
    v58 = sub_180B150(v69, v56);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_182A9A0(v69, v58, v57);
    v59 = sub_180B150(v69, v58);
    v60 = *(_QWORD *)(a1 + 16);
    for ( k = 0; v60; ++k )
    {
      if ( k >= *(_DWORD *)(v60 - 4) )
        break;
      v61 = *(_QWORD **)(v60 + 8LL * k);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_182A9A0(*v61, v59, v61[1]);
      v62 = v61[3];
      for ( m = 0; v62; ++m )
      {
        if ( m >= *(_DWORD *)(v62 - 4) )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        v62 = v61[3];
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v60 = *(_QWORD *)(a1 + 16);
    }
  }
LABEL_39:
  sub_186B220(v7 - 1);
  return v35;
}

