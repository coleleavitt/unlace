__int64 __fastcall sub_B74FA0(_QWORD *a1)
{
  _QWORD *exception; // rbp
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // r14
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebp
  _QWORD *v12; // rax
  _DWORD *i; // rbx
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r13
  _QWORD *v19; // rsi
  _QWORD *j; // rdi
  unsigned int *v21; // rdx
  __int64 v22; // rax
  unsigned int *v23; // rcx
  unsigned int v24; // eax
  _QWORD *v25; // rsi
  _QWORD *k; // rdi
  unsigned int *v27; // rdx
  __int64 v28; // rax
  unsigned int *v29; // rcx
  unsigned int v30; // eax
  unsigned int *v31; // r14
  _QWORD *v32; // rbp
  unsigned int v33; // r12d
  unsigned int v34; // edx
  size_t v35; // rsi
  unsigned int v36; // r15d
  unsigned int *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r15
  _QWORD *v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 result; // rax
  unsigned int v45; // [rsp+0h] [rbp-88h]
  unsigned int v46; // [rsp+Ch] [rbp-7Ch]
  _QWORD *v47; // [rsp+30h] [rbp-58h] BYREF
  __int64 v48; // [rsp+38h] [rbp-50h]
  _QWORD v49[9]; // [rsp+40h] [rbp-48h] BYREF

  v10 = a1[1070];
  if ( v10 && (v11 = *(_DWORD *)(v10 - 4)) != 0 )
  {
    v12 = (_QWORD *)sub_186B270(0x10u);
    *v12 = 2;
    for ( i = v12 + 1; ; i = v16 + 2 )
    {
      v17 = *(i - 2);
      if ( v17 >= v11 )
        break;
      v14 = (3 * v17 + 1) >> 1;
      v15 = 4 * v14 + 8;
      if ( 4 * v17 + 8 >= (unsigned int)v15 || v17 >= v14 )
      {
        exception = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v47, "Overflow encountered when expanding vector");
        v2 = v47;
        exception[1] = exception + 3;
        v3 = v48;
        *exception = off_1C63128;
        if ( v2 == v49 )
        {
          qmemcpy(exception + 3, v49, (unsigned int)(v3 + 1));
        }
        else
        {
          v4 = v49[0];
          exception[1] = v2;
          exception[3] = v4;
        }
        exception[2] = v3;
        v47 = v49;
        v48 = 0;
        LOBYTE(v49[0]) = 0;
        sub_233E40((__int64)&v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(i - 2, v15);
      *v16 = v14;
    }
    *(i - 1) = v11;
    v18 = v11;
    memset(i, 0, 4LL * v11);
    v19 = (_QWORD *)a1[1111];
    if ( !v19 )
    {
      v25 = (_QWORD *)a1[1112];
      if ( !v25 )
        goto LABEL_19;
      k = &v25[*((unsigned int *)v25 - 1)];
      if ( v25 == k )
        goto LABEL_19;
      goto LABEL_15;
    }
  }
  else
  {
    v19 = (_QWORD *)a1[1111];
    v11 = 0;
    i = nullptr;
    if ( !v19 )
    {
      v25 = (_QWORD *)a1[1112];
      if ( !v25 )
        goto LABEL_45;
      k = &v25[*((unsigned int *)v25 - 1)];
      if ( k == v25 )
        goto LABEL_45;
      goto LABEL_15;
    }
  }
  for ( j = &v19[*((unsigned int *)v19 - 1)]; j != v19; ++v19 )
  {
    v21 = (unsigned int *)(*v19 + 8LL);
    v22 = *(unsigned int *)*v19;
    v23 = &v21[v22];
    if ( v22 * 4 )
    {
      do
      {
        v24 = *v21++;
        ++i[v24 >> 1];
      }
      while ( v23 != v21 );
    }
  }
  v25 = (_QWORD *)a1[1112];
  if ( v25 )
  {
    for ( k = &v25[*((unsigned int *)v25 - 1)]; k != v25; ++v25 )
    {
LABEL_15:
      v27 = (unsigned int *)(*v25 + 8LL);
      v28 = *(unsigned int *)*v25;
      v29 = &v27[v28];
      if ( v28 * 4 )
      {
        do
        {
          v30 = *v27++;
          ++i[v30 >> 1];
        }
        while ( v27 != v29 );
      }
    }
  }
  v18 = v11;
  if ( !v11 )
  {
LABEL_45:
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_46;
  }
LABEL_19:
  v31 = i;
  v32 = nullptr;
  do
  {
    v45 = *v31;
    v33 = *v31 + 1;
    if ( v32 )
    {
      v46 = *((_DWORD *)v32 - 1);
      if ( v46 >= v33 )
        goto LABEL_20;
    }
    else
    {
      if ( *v31 == -1 )
        goto LABEL_20;
      v41 = (_QWORD *)sub_186B270(0x10u);
      v46 = 0;
      v32 = v41 + 1;
      *v41 = 2;
    }
    while ( 1 )
    {
      v38 = *((_DWORD *)v32 - 2);
      if ( v38 >= v33 )
        break;
      v34 = (3 * v38 + 1) >> 1;
      v35 = 4 * v34 + 8;
      v36 = v34;
      if ( 4 * v38 + 8 >= (unsigned int)v35 || v38 >= v34 )
      {
        v5 = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v47, "Overflow encountered when expanding vector");
        v6 = v47;
        v5[1] = v5 + 3;
        v7 = v48;
        *v5 = off_1C63128;
        if ( v6 == v49 )
        {
          qmemcpy(v5 + 3, v49, (unsigned int)(v7 + 1));
        }
        else
        {
          v8 = v49[0];
          v5[1] = v6;
          v5[3] = v8;
        }
        v5[2] = v7;
        v48 = 0;
        v47 = v49;
        LOBYTE(v49[0]) = 0;
        sub_233E40((__int64)&v47);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int *)sub_186B300(v32 - 1, v35);
      *v37 = v36;
      v32 = v37 + 2;
    }
    *((_DWORD *)v32 - 1) = v33;
    v39 = 4LL * v33;
    v40 = 4LL * v46;
    if ( v40 != v39 )
      memset((char *)v32 + v40, 0, v39 - v40);
LABEL_20:
    ++v31;
    ++*((_DWORD *)v32 + v45);
  }
  while ( v31 != &i[v18] );
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( !v32 )
  {
LABEL_46:
    result = std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_39;
  }
  v42 = *((unsigned int *)v32 - 1);
  v43 = 1;
  if ( (unsigned int)v42 > 1 )
  {
    do
    {
      while ( !*((_DWORD *)v32 + v43) )
      {
        if ( ++v43 == v42 )
          goto LABEL_38;
      }
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v43;
    }
    while ( v43 != v42 );
  }
LABEL_38:
  std::__ostream_insert<char,std::char_traits<char>>();
  result = sub_186B220(v32 - 1);
LABEL_39:
  if ( i )
    return sub_186B220(i - 2);
  return result;
}

