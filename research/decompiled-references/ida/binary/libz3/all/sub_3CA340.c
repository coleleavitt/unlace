__int64 __fastcall sub_3CA340(_QWORD *a1, size_t a2, __int64 a3, __m128 a4)
{
  int v4; // r12d
  __int64 v6; // rax
  int v7; // edx
  unsigned int *v8; // rdi
  unsigned int v9; // r13d
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ebp
  _QWORD *v18; // r15
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // r14d
  unsigned int *v22; // rdx
  unsigned int v23; // edx
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r15
  unsigned __int64 v31; // r15
  size_t *v32; // r14
  __int64 v33; // rdi
  int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // rax
  char **exception; // rbx
  __int64 v41; // [rsp+0h] [rbp-B8h]
  __int64 v42; // [rsp+8h] [rbp-B0h]
  _BYTE v44[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v45[32]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v46[2]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v47[88]; // [rsp+60h] [rbp-58h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(a3 + 24);
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  if ( (_DWORD)a2 == v7 )
    return sub_3C9480(a1, a3);
  v8 = (unsigned int *)*a1;
  v9 = 0;
  v42 = *(_QWORD *)(v6 + 8LL * (unsigned int)a2);
  for ( result = sub_18290A0(v8); (_BYTE)result; result = sub_18290A0(*a1) )
  {
    v11 = a1[2];
    if ( !v11 || v9 >= *(_DWORD *)(v11 - 4) )
      return 0;
    v41 = *(_QWORD *)(v11 + 8LL * v9);
    v12 = a1[25];
    if ( v12 )
      v13 = *(_DWORD *)(v12 - 4);
    else
      v13 = 0;
    v14 = a1[28];
    if ( !v14 || (v15 = *(unsigned int *)(v14 - 4), (_DWORD)v15 == *(_DWORD *)(v14 - 8)) )
    {
      v8 = (unsigned int *)(a1 + 28);
      sub_2FD3F0((unsigned int **)a1 + 28);
      v26 = a1[28];
      *(_DWORD *)(v26 + 4LL * (unsigned int)(*(_DWORD *)(v26 - 4))++) = v13;
      v16 = a1[8];
      if ( !v16 )
      {
LABEL_28:
        v17 = 0;
        if ( (unsigned int)sub_180B130(v8) <= 1 )
          goto LABEL_13;
        goto LABEL_29;
      }
    }
    else
    {
      *(_DWORD *)(v14 + 4 * v15) = v13;
      ++*(_DWORD *)(v14 - 4);
      v16 = a1[8];
      if ( !v16 )
        goto LABEL_28;
    }
    v17 = *(_DWORD *)(v16 - 4);
    if ( (unsigned int)sub_180B130(v8) <= 1 )
      goto LABEL_13;
LABEL_29:
    if ( (unsigned __int8)sub_186A530(*(double *)a4.m128_u64) )
    {
      sub_186A4C0(*(double *)a4.m128_u64);
      v35 = 0;
      if ( v4 )
      {
        do
        {
          v36 = sub_180B150(v8, a2);
          ++v35;
          a2 = (size_t)" ";
          v8 = (unsigned int *)v36;
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v4 != v35 );
      }
      v37 = sub_180B150(v8, a2);
      sub_1606360(v44, v42, *a1, 0, 0, 0);
      v38 = sub_160E8B0(v37, v44);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v46, v41, *a1, 0, 0, 0);
      v39 = sub_160E8B0(v38, v46);
      sub_3BCC00(v39, "\n");
      sub_18572D0(v47);
      sub_18572D0(v45);
      sub_186A500(v45, "\n");
    }
    else
    {
      v27 = 0;
      if ( v4 )
      {
        do
        {
          v28 = sub_180B150(v8, a2);
          ++v27;
          a2 = (size_t)" ";
          v8 = (unsigned int *)v28;
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v4 != v27 );
      }
      v29 = sub_180B150(v8, a2);
      sub_1606360(v44, v42, *a1, 0, 0, 0);
      v30 = sub_160E8B0(v29, v44);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v46, v41, *a1, 0, 0, 0);
      sub_160E8B0(v30, v46);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v47);
      sub_18572D0(v45);
    }
LABEL_13:
    if ( *(_QWORD *)(v41 + 16) == *(_QWORD *)(v42 + 16) )
    {
      v18 = a1 + 21;
      if ( (unsigned __int8)sub_3C4E80((__m128 *)(a1 + 11), v42, v41, (__int64)(a1 + 21), (__int64)(a1 + 7), a4) )
      {
        result = sub_3CA340(a1, (unsigned int)(v4 + 1), a3);
        if ( (_BYTE)result )
          return result;
      }
    }
    else
    {
      v18 = a1 + 21;
    }
    a2 = 1;
    sub_FA3D10(v18, 1);
    v19 = a1[8];
    if ( v19 )
    {
      v20 = *(unsigned int *)(v19 - 4);
      if ( v17 >= (unsigned int)v20 )
      {
        if ( (unsigned int)v20 < v17 )
          goto LABEL_22;
LABEL_45:
        *(_DWORD *)(v19 - 4) = v17;
        goto LABEL_25;
      }
      v31 = v19 + 8 * v20;
      v32 = (size_t *)(v19 + 8LL * v17);
      if ( (unsigned __int64)v32 >= v31 )
        goto LABEL_45;
      do
      {
        while ( 1 )
        {
          a2 = *v32;
          if ( *v32 )
          {
            v33 = a1[7];
            if ( (*(_DWORD *)(a2 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v32 >= v31 )
            goto LABEL_43;
        }
        sub_15D7BC0(v33, a2);
        ++v32;
      }
      while ( (unsigned __int64)v32 < v31 );
LABEL_43:
      v19 = a1[8];
      if ( v19 )
      {
        v20 = *(unsigned int *)(v19 - 4);
        if ( (unsigned int)v20 < v17 )
          goto LABEL_22;
        goto LABEL_45;
      }
    }
    if ( v17 )
    {
      v20 = 0;
      v19 = sub_186B270(0x18u) + 8;
      *(_QWORD *)(v19 - 8) = 2;
      a1[8] = v19;
LABEL_22:
      while ( 1 )
      {
        v23 = *(_DWORD *)(v19 - 8);
        if ( v23 >= v17 )
          break;
        v21 = (3 * v23 + 1) >> 1;
        a2 = 8 * v21 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)a2 || v23 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3BCB70(v46, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v46);
          sub_233E40((__int64)v46);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300((void *)(v19 - 8), a2);
        v19 = (__int64)(v22 + 2);
        a1[8] = v22 + 2;
        *v22 = v21;
      }
      v24 = 8 * v20;
      *(_DWORD *)(v19 - 4) = v17;
      v25 = 8LL * v17;
      if ( v24 != v25 )
      {
        a2 = 0;
        memset((void *)(v19 + v24), 0, v25 - v24);
      }
    }
LABEL_25:
    v8 = (unsigned int *)*a1;
    ++v9;
  }
  return result;
}

