__int64 __fastcall sub_3628B0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  char **v3; // r12
  _QWORD *v5; // rcx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // r13
  __int64 *v10; // r15
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdx
  size_t v23; // rdx
  void *v24; // r14
  _QWORD *v25; // r15
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rdx
  void *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rdx
  void *v32; // rbx
  unsigned int v34; // r14d
  size_t v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rsi
  _QWORD *i; // rax
  __int64 v43; // rcx
  char v44; // di
  __int64 v45; // rcx
  char v46; // di
  __int64 v47; // rcx
  __int64 v48; // rax
  void *v49; // r13
  void *v50; // rdi
  _QWORD *v51; // rax
  __int64 v52; // rdi
  _QWORD *v53; // [rsp+8h] [rbp-D0h]
  _DWORD *v54; // [rsp+10h] [rbp-C8h]
  unsigned int v55; // [rsp+1Ch] [rbp-BCh]
  int v56; // [rsp+30h] [rbp-A8h] BYREF
  char v57; // [rsp+34h] [rbp-A4h]
  int v58; // [rsp+40h] [rbp-98h] BYREF
  char v59; // [rsp+44h] [rbp-94h]
  __int64 v60[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v61; // [rsp+70h] [rbp-68h] BYREF
  __int64 v62; // [rsp+78h] [rbp-60h] BYREF
  __int64 v63; // [rsp+80h] [rbp-58h]
  __int64 v64; // [rsp+88h] [rbp-50h] BYREF
  __int64 v65; // [rsp+90h] [rbp-48h]

  if ( (unsigned int)sub_180B130(a1) > 2 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v52 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v52, ")\n");
      v5 = *(_QWORD **)(a2 + 8);
      if ( v5 )
        goto LABEL_3;
LABEL_45:
      v6 = 0;
      goto LABEL_4;
    }
    sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v5 = *(_QWORD **)(a2 + 8);
  if ( !v5 )
    goto LABEL_45;
LABEL_3:
  v6 = *((_DWORD *)v5 - 1);
LABEL_4:
  sub_361840((__int64)&v56, a1, v6, v5);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 && (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8) )
  {
    v9 = *(__int64 **)(a2 + 8);
    v10 = (__int64 *)(v7 + 8 * v8);
    v11 = (_QWORD *)(sub_186B270(0x18u) + 8);
    *(v11 - 1) = 2;
    v12 = 2;
    v13 = 1;
    v14 = v11;
    while ( 1 )
    {
      v15 = *v9++;
      *v11 = v15;
      *((_DWORD *)v14 - 1) = v13;
      if ( v10 == v9 )
        break;
      v12 = *((_DWORD *)v14 - 2);
      if ( v12 == v13 )
      {
        v12 = (3 * v12 + 1) >> 1;
        v17 = 8 * v12 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v17 || v13 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v61, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v61);
          sub_233E40((__int64)&v61);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v14 - 1, v17);
        v14 = v18 + 2;
        *v18 = v12;
        v19 = v18[1];
        v20 = v19;
        v11 = &v14[v19];
        v13 = v20 + 1;
      }
      else
      {
        v16 = v13++;
        v11 = &v14[v16];
      }
    }
    v61 = 0;
    v21 = sub_186B270(8LL * v12 + 8);
    v22 = *((unsigned int *)v14 - 1);
    *(_DWORD *)v21 = v12;
    *(_DWORD *)(v21 + 4) = v13;
    v23 = 8 * v22;
    v61 = v21 + 8;
    if ( v23 <= 8 )
    {
      if ( v23 == 8 )
        *(_QWORD *)(v21 + 8) = *v14;
    }
    else
    {
      memcpy((void *)(v21 + 8), v14, v23);
    }
  }
  else
  {
    v61 = 0;
    v14 = nullptr;
  }
  v62 = 0;
  v63 = 0;
  v64 = 1;
  v24 = qword_1C7F2C0;
  v65 = 0;
  if ( (v57 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v62, &v56);
  else
    LODWORD(v62) = v56;
  if ( (v59 & 1) == 0 )
  {
    v25 = *(_QWORD **)(a1 + 64);
    BYTE4(v64) &= ~1u;
    LODWORD(v64) = v58;
    if ( v25 )
      goto LABEL_19;
LABEL_41:
    v51 = (_QWORD *)sub_186B270(0x58u);
    v25 = v51 + 1;
    *v51 = 2;
    *(_QWORD *)(a1 + 64) = v51 + 1;
    v27 = v51 + 1;
    goto LABEL_21;
  }
  sub_182C690(v24, &v64, &v58);
  v25 = *(_QWORD **)(a1 + 64);
  if ( !v25 )
    goto LABEL_41;
LABEL_19:
  v26 = *((unsigned int *)v25 - 1);
  if ( (_DWORD)v26 == *((_DWORD *)v25 - 2) )
  {
    v34 = (unsigned int)(3 * v26 + 1) >> 1;
    v55 = v34;
    v35 = 40 * v34 + 8;
    if ( 40 * (int)v26 + 8 >= (unsigned int)v35 || (unsigned int)v26 >= v34 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v60, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v60);
      sub_233E40((__int64)v60);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v36 = sub_186B270(v35);
    v37 = *(_QWORD **)(a1 + 64);
    v54 = (_DWORD *)v36;
    v38 = v36;
    v25 = (_QWORD *)(v36 + 8);
    if ( v37 )
    {
      v39 = *((unsigned int *)v37 - 1);
      v40 = v25;
      *(_DWORD *)(v38 + 4) = v39;
      v41 = &v37[5 * v39];
      for ( i = v37; v41 != i; *(v40 - 1) = v47 )
      {
        v43 = *i;
        v44 = *((_BYTE *)i + 12);
        i += 5;
        v40 += 5;
        *(i - 5) = 0;
        *(v40 - 5) = v43;
        *((_DWORD *)v40 - 8) = *((_DWORD *)i - 8);
        *((_BYTE *)v40 - 28) = v44 & 3 | *((_BYTE *)v40 - 28) & 0xFC;
        v45 = *(i - 3);
        *(i - 3) = 0;
        *(v40 - 3) = v45;
        v46 = *((_BYTE *)i - 12);
        *((_DWORD *)v40 - 4) = *((_DWORD *)i - 4);
        *((_BYTE *)v40 - 12) = v46 & 3 | *((_BYTE *)v40 - 12) & 0xFC;
        v47 = *(i - 1);
        *(i - 1) = 0;
      }
      v48 = *((unsigned int *)v37 - 1);
      if ( (_DWORD)v48 )
      {
        v53 = &v37[5 * v48];
        do
        {
          while ( 1 )
          {
            v49 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v37 + 1);
            sub_182CBA0(v49, v37 + 3);
            if ( !*v37 )
              break;
            v50 = (void *)(*v37 - 8LL);
            v37 += 5;
            sub_186B220(v50);
            if ( v53 == v37 )
              goto LABEL_35;
          }
          v37 += 5;
        }
        while ( v53 != v37 );
LABEL_35:
        v37 = *(_QWORD **)(a1 + 64);
      }
      sub_186B220(v37 - 1);
      v27 = &v25[5 * (unsigned int)v54[1]];
    }
    else
    {
      *(_DWORD *)(v36 + 4) = 0;
      v27 = (__int64 *)(v36 + 8);
    }
    *(_QWORD *)(a1 + 64) = v25;
    *v54 = v55;
  }
  else
  {
    v27 = &v25[5 * v26];
  }
LABEL_21:
  v28 = v61;
  v29 = qword_1C7F2C0;
  v61 = 0;
  *v27 = v28;
  *((_DWORD *)v27 + 2) = v62;
  *((_BYTE *)v27 + 12) = BYTE4(v62) & 3 | *((_BYTE *)v27 + 12) & 0xFC;
  v30 = v63;
  v63 = 0;
  v27[2] = v30;
  *((_DWORD *)v27 + 6) = v64;
  *((_BYTE *)v27 + 28) = BYTE4(v64) & 3 | *((_BYTE *)v27 + 28) & 0xFC;
  v31 = v65;
  v65 = 0;
  v27[4] = v31;
  ++*((_DWORD *)v25 - 1);
  sub_182CBA0(v29, &v62);
  sub_182CBA0(v29, &v64);
  if ( v61 )
    sub_186B220((void *)(v61 - 8));
  if ( v14 )
    sub_186B220(v14 - 1);
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v56);
  return sub_182CBA0(v32, &v58);
}

