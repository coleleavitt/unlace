__m128i *__fastcall sub_110F110(__m128i *a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // r14
  __int64 v8; // r15
  char *v9; // rax
  char *v10; // rbp
  char *v11; // rax
  __int64 v13; // rdx
  char v14; // bp
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  _BYTE *v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  size_t v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rdi
  size_t v23; // rax
  char *v24; // rax
  size_t n; // [rsp+10h] [rbp-D8h]
  char v26; // [rsp+1Fh] [rbp-C9h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v29[8]; // [rsp+38h] [rbp-B0h] BYREF
  void *v30; // [rsp+40h] [rbp-A8h] BYREF
  signed __int64 v31; // [rsp+48h] [rbp-A0h]
  __m128i v32; // [rsp+50h] [rbp-98h] BYREF
  void *p_ptr; // [rsp+60h] [rbp-88h] BYREF
  size_t v34; // [rsp+68h] [rbp-80h]
  __int64 v35; // [rsp+70h] [rbp-78h] BYREF
  __int16 v36; // [rsp+80h] [rbp-68h]

  if ( a3 )
    *a3 = 0;
  v5 = sub_10B8FF0(*(_QWORD *)(a2 + 72), 0x77Cu);
  v6 = v5;
  if ( v5 )
  {
    v7 = **(char ***)(v5 + 48);
    if ( !v7 )
    {
      n = 0;
      v8 = sub_10B8FF0(*(_QWORD *)(a2 + 72), 0x88Du);
      if ( !v8 )
      {
LABEL_6:
        v9 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 264LL))(a2);
        v36 = 257;
        v10 = v9;
        if ( *v9 )
        {
          p_ptr = v9;
          LOBYTE(v36) = 3;
        }
        if ( (unsigned __int8)sub_22672E0(&p_ptr, 0) )
          sub_1107FF0(a1, v10);
        else
          sub_11097F0(a1, a2, v10);
        return a1;
      }
      goto LABEL_12;
    }
  }
  else
  {
    v7 = (char *)&byte_22CD811;
  }
  n = j__strlen(v7);
  v8 = sub_10B8FF0(*(_QWORD *)(a2 + 72), 0x88Du);
  if ( v8 )
  {
LABEL_12:
    sub_1107FF0(&ptr, **(char ***)(v8 + 48));
    if ( !si128.m128i_i64[0] )
      goto LABEL_13;
    sub_2266770(ptr, si128.m128i_i64[0], 0);
    if ( !v13 )
    {
      sub_11097F0(&p_ptr, a2, **(char ***)(v8 + 48));
      sub_9E6D90((__int64)&ptr, &p_ptr);
      if ( p_ptr != &v35 )
        operator delete(p_ptr);
    }
    v36 = 260;
    p_ptr = &ptr;
    v14 = sub_2268580(&p_ptr);
    if ( v14 )
    {
      if ( a3 )
      {
        if ( j__strlen("lld") == n )
        {
          if ( n )
            v14 = memcmp(v7, "lld", n) == 0;
        }
        else
        {
          v14 = 0;
        }
        *a3 = v14;
      }
      v15 = ptr;
      v16 = si128.m128i_i64[0];
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      sub_11078F0(a1, v15, (__int64)&v15[v16]);
    }
    else
    {
LABEL_13:
      sub_FA3370((__int64)&p_ptr, **(_QWORD **)(a2 + 8), 0, 383);
      sub_21922B0(&v30, v8, *(_QWORD *)(a2 + 72));
      sub_AC84E0((unsigned __int8 **)&p_ptr, v30, v31);
      if ( v30 != &v32 )
        operator delete(v30);
      sub_AC6300((__int64)&p_ptr);
      v11 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 264LL))(a2);
      sub_11097F0(a1, a2, v11);
    }
    if ( ptr != &si128.m128i_u64[1] )
      operator delete(ptr);
    return a1;
  }
  if ( !n || n == j__strlen("ld") && !memcmp(v7, "ld", n) )
    goto LABEL_6;
  v17 = memchr(v7, 47, n);
  if ( v17 && v17 - v7 != -1 )
  {
    sub_FA3370((__int64)&p_ptr, **(_QWORD **)(a2 + 8), 0, 556);
    sub_AC6300((__int64)&p_ptr);
  }
  v36 = 261;
  p_ptr = v7;
  v34 = n;
  v26 = sub_22672E0(&p_ptr, 0);
  if ( v26 )
  {
    p_ptr = v7;
    v36 = 261;
    v34 = n;
    if ( (unsigned __int8)sub_2268580(&p_ptr) )
    {
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      sub_1107830(a1, v7, (__int64)&v7[n]);
      return a1;
    }
  }
  else
  {
    ptr = v29;
    v18 = *(unsigned int *)(a2 + 60);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384E70);
    if ( (unsigned int)v18 <= 0x1F && (v19 = 4160750114LL, _bittest64(&v19, v18)) )
    {
      v20 = j__strlen("ld64.");
      sub_9FC110(&ptr, "ld64.", &aLd64[v20]);
    }
    else
    {
      v23 = j__strlen("ld.");
      sub_9FC110(&ptr, "ld.", &aOptLd[v23 + 5]);
    }
    sub_9FC110(&ptr, v7, &v7[n]);
    v21 = si128.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      sub_22130D0(&ptr, v29, si128.m128i_i64[0] + 1, 1);
      v21 = si128.m128i_i64[0];
    }
    *((_BYTE *)ptr + v21) = 0;
    sub_11097F0(&v30, a2, (char *)ptr);
    p_ptr = &v30;
    v36 = 260;
    if ( (unsigned __int8)sub_2268580(&p_ptr) )
    {
      if ( a3 )
      {
        if ( n == j__strlen("lld") )
          v26 = memcmp(v7, "lld", n) == 0;
        *a3 = v26;
      }
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( v30 == &v32 )
      {
        a1[1] = _mm_load_si128(&v32);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v30;
        a1[1].m128i_i64[0] = v32.m128i_i64[0];
      }
      v22 = ptr;
      a1->m128i_i64[1] = v31;
      if ( v22 != v29 )
        free(v22);
      return a1;
    }
    if ( v30 != &v32 )
      operator delete(v30);
    if ( ptr != v29 )
      free(ptr);
  }
  if ( v6 )
  {
    sub_FA3370((__int64)&p_ptr, **(_QWORD **)(a2 + 8), 0, 383);
    sub_21922B0(&v30, v6, *(_QWORD *)(a2 + 72));
    sub_AC84E0((unsigned __int8 **)&p_ptr, v30, v31);
    if ( v30 != &v32 )
      operator delete(v30);
    sub_AC6300((__int64)&p_ptr);
  }
  v24 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 264LL))(a2);
  sub_11097F0(a1, a2, v24);
  return a1;
}

