__int64 __fastcall sub_36DE00(__int64 *a1, _QWORD *a2)
{
  char **v2; // rbp
  char **exception; // rbp
  unsigned int v5; // ebp
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // r14d
  int v14; // r15d
  char v15; // si
  __int64 v16; // r8
  _QWORD *v17; // rdx
  unsigned int v18; // edi
  __int64 v19; // rsi
  unsigned int v21; // r9d
  _QWORD *v22; // r13
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r13
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  unsigned int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 *v34; // rcx
  __int64 v35; // r13
  __int64 v36; // rsi
  unsigned int v37; // r9d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // edi
  unsigned __int64 v42; // rdx
  _QWORD *v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rsi
  unsigned int v48; // r15d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  unsigned int v54; // [rsp+0h] [rbp-88h]
  __int64 *v55; // [rsp+0h] [rbp-88h]
  unsigned int v56; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v57; // [rsp+10h] [rbp-78h]
  __int64 v58; // [rsp+10h] [rbp-78h]
  __int64 v59; // [rsp+10h] [rbp-78h]
  __int64 v60; // [rsp+18h] [rbp-70h]
  __int64 v61[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  v56 = 0;
LABEL_2:
  if ( (unsigned __int8)sub_18290A0(*a1) )
  {
    while ( 1 )
    {
      v7 = a1[7];
      if ( !v7 || v5 >= *(_DWORD *)(v7 - 4) )
        return v56;
      v8 = a2;
      v9 = (__int64)a1;
      v10 = 8LL * v5;
      v11 = sub_36D730(a1, a2, *(_QWORD *)(v7 + v10));
      if ( v11 == -1 )
      {
        v24 = sub_15E1A70(*a1);
        v25 = v24;
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        v26 = (_QWORD *)a1[5];
        if ( v26 )
        {
          v27 = *((_DWORD *)v26 - 1);
          if ( v27 == *((_DWORD *)v26 - 2) )
          {
            v48 = (3 * v27 + 1) >> 1;
            v49 = 8 * v48 + 8;
            if ( 8 * v27 + 8 >= (unsigned int)v49 || v27 >= v48 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v61, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v50 = (unsigned int *)sub_186B300(v26 - 1, v49);
            v51 = v50[1];
            v26 = v50 + 2;
            *v50 = v48;
            a1[5] = (__int64)(v50 + 2);
            LODWORD(v50) = v51;
            v30 = &v26[v51];
            v29 = (_DWORD)v50 + 1;
          }
          else
          {
            v28 = v27;
            v29 = v27 + 1;
            v30 = &v26[v28];
          }
        }
        else
        {
          v53 = (_QWORD *)sub_186B270(0x18u);
          v26 = v53 + 1;
          *v53 = 2;
          v29 = 1;
          a1[5] = (__int64)v26;
          v30 = v26;
        }
        *v30 = v25;
        v31 = v5 + 1;
        *((_DWORD *)v26 - 1) = v29;
        v32 = a1[7];
        if ( !v32 )
LABEL_42:
          BUG();
        while ( v31 < *(_DWORD *)(v32 - 4) )
        {
          v33 = a1[6];
          v34 = (__int64 *)(v32 + v10);
          v35 = *(_QWORD *)(v32 + 8LL * v31);
          if ( v35 )
            ++*(_DWORD *)(v35 + 8);
          v36 = *v34;
          if ( *v34 )
          {
            v23 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v23 )
            {
              v55 = (__int64 *)(v32 + v10);
              sub_15D7BC0(v33, v36);
              v32 = a1[7];
              v34 = v55;
            }
          }
          *v34 = v35;
          ++v31;
          v10 += 8;
          if ( !v32 )
            goto LABEL_42;
        }
        v45 = a1[6];
        v46 = (unsigned int)(*(_DWORD *)(v32 - 4) - 1);
        v47 = *(_QWORD *)(v32 + 8 * v46);
        *(_DWORD *)(v32 - 4) = v46;
        if ( v47 )
        {
          v23 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v45, v47);
        }
        goto LABEL_2;
      }
      if ( v11 == 1 )
        break;
LABEL_21:
      ++v5;
      if ( !(unsigned __int8)sub_18290A0(*a1) )
        return v56;
    }
    v12 = a1[7];
    if ( !v12 )
      goto LABEL_19;
    v54 = 0;
    v13 = 0;
    v14 = 0;
    while ( v13 < *(_DWORD *)(v12 - 4) )
    {
      v15 = sub_1374270(*a2, *(_QWORD *)(v12 + 8LL * v13));
      v12 = a1[7];
      v16 = *(_QWORD *)(v12 + 8LL * v13);
      if ( v15 )
      {
        v14 -= (v5 < v13) - 1;
        ++*((_DWORD *)a1 + 17);
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v17 = (_QWORD *)a1[5];
        if ( v17 )
        {
          v18 = *((_DWORD *)v17 - 1);
          if ( v18 == *((_DWORD *)v17 - 2) )
          {
            v37 = (3 * v18 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v18 + 8 >= (unsigned int)v38 || v18 >= v37 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v61, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v60 = v16;
            v39 = (unsigned int *)sub_186B300(v17 - 1, v38);
            v16 = v60;
            v17 = v39 + 2;
            *v39 = (3 * v18 + 1) >> 1;
            v40 = v39[1];
            a1[5] = (__int64)v17;
            v41 = v40;
            v8 = &v17[v40];
            v12 = a1[7];
            v9 = (unsigned int)(v41 + 1);
          }
          else
          {
            v19 = v18;
            v9 = v18 + 1;
            v8 = &v17[v19];
          }
        }
        else
        {
          v59 = v16;
          v52 = (_QWORD *)sub_186B270(0x18u);
          v16 = v59;
          v9 = 1;
          v17 = v52 + 1;
          *v52 = 2;
          v12 = a1[7];
          a1[5] = (__int64)v17;
          v8 = v17;
        }
        ++v56;
        *v8 = v16;
        *((_DWORD *)v17 - 1) = v9;
      }
      else
      {
        v9 = a1[6];
        v21 = v54 + 1;
        v22 = (_QWORD *)(v12 + 8LL * v54);
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v8 = (_QWORD *)*v22;
        if ( *v22 )
        {
          v23 = (*((_DWORD *)v8 + 2))-- == 1;
          if ( v23 )
          {
            v58 = v16;
            sub_15D7BC0(v9, v8);
            v12 = a1[7];
            v16 = v58;
            v21 = v54 + 1;
          }
        }
        *v22 = v16;
        v54 = v21;
      }
      ++v13;
      if ( !v12 )
      {
        v5 -= v14;
        goto LABEL_19;
      }
    }
    v5 -= v14;
    v42 = v12 + 8LL * *(unsigned int *)(v12 - 4);
    v43 = (_QWORD *)(v12 + 8LL * v54);
    if ( (unsigned __int64)v43 < v42 )
    {
      do
      {
        while ( 1 )
        {
          v8 = (_QWORD *)*v43;
          if ( *v43 )
          {
            v9 = a1[6];
            v23 = (*((_DWORD *)v8 + 2))-- == 1;
            if ( v23 )
              break;
          }
          if ( (unsigned __int64)++v43 >= v42 )
            goto LABEL_52;
        }
        v57 = v42;
        ++v43;
        sub_15D7BC0(v9, v8);
        v42 = v57;
      }
      while ( (unsigned __int64)v43 < v57 );
LABEL_52:
      v12 = a1[7];
    }
    if ( v12 )
    {
      *(_DWORD *)(v12 - 4) = v54;
      if ( (unsigned int)sub_180B130(v9) )
      {
LABEL_55:
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          sub_180B150(v9, v8);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v44 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v44, ")\n");
        }
        else
        {
          sub_180B150(v9, v8);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
    }
    else
    {
LABEL_19:
      if ( (unsigned int)sub_180B130(v9) )
        goto LABEL_55;
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1[2] + 16LL))(a1[2], a2);
    goto LABEL_21;
  }
  return v56;
}

