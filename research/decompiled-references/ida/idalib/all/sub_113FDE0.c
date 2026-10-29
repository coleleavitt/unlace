void **__fastcall sub_113FDE0(void **a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _BYTE *v6; // rbp
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  void *v9; // rdx
  size_t v10; // rax
  size_t v11; // rsi
  size_t v12; // rdi
  _BYTE *v13; // rdi
  void *v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  size_t v20; // rdx
  size_t v21; // rdx
  unsigned int v22; // eax
  _BYTE *v23; // rax
  __int64 v24; // rdx
  size_t v25; // r10
  size_t v26; // r11
  char *v27; // rax
  __m128i *v28; // rax
  _BYTE *v29; // rdi
  void *v30; // rdx
  size_t v31; // rdx
  void **v32; // [rsp+8h] [rbp-D0h] BYREF
  size_t v33; // [rsp+10h] [rbp-C8h] BYREF
  size_t v34; // [rsp+18h] [rbp-C0h]
  void *v35[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-A8h] BYREF
  void *v37; // [rsp+40h] [rbp-98h] BYREF
  size_t v38; // [rsp+48h] [rbp-90h]
  char v39[16]; // [rsp+50h] [rbp-88h] BYREF
  void *v40; // [rsp+60h] [rbp-78h] BYREF
  size_t v41; // [rsp+68h] [rbp-70h]
  char *v42; // [rsp+70h] [rbp-68h] BYREF
  size_t v43; // [rsp+78h] [rbp-60h]
  void *src; // [rsp+80h] [rbp-58h] BYREF
  size_t n; // [rsp+88h] [rbp-50h]
  _OWORD v46[4]; // [rsp+90h] [rbp-48h] BYREF

  v6 = a1 + 2;
  *a1 = a1 + 2;
  a1[1] = nullptr;
  *((_BYTE *)a1 + 16) = 0;
  if ( a3 )
  {
    v7 = (__int64)&a2[a3];
    src = v46;
  }
  else
  {
    v16 = sub_22B7480(a4);
    src = v46;
    v7 = v16 + v17;
    a2 = (_BYTE *)v16;
  }
  sub_113C3F0(&src, a2, v7);
  v8 = *a1;
  if ( src == v46 )
  {
    v20 = n;
    if ( n )
    {
      if ( n == 1 )
        *v8 = v46[0];
      else
        memcpy(v8, src, n);
      v20 = n;
      v8 = *a1;
    }
    a1[1] = (void *)v20;
    v8[v20] = 0;
    v8 = src;
  }
  else
  {
    if ( v6 == v8 )
    {
      v32 = *(void ***)&v46[0];
      *a1 = src;
      *(__m128 *)(a1 + 1) = _mm_loadh_ps((const double *)&v32);
    }
    else
    {
      v32 = *(void ***)&v46[0];
      v9 = a1[2];
      *a1 = src;
      *(__m128 *)(a1 + 1) = _mm_loadh_ps((const double *)&v32);
      if ( v8 )
      {
        src = v8;
        *(_QWORD *)&v46[0] = v9;
        goto LABEL_7;
      }
    }
    v8 = v46;
    src = v46;
  }
LABEL_7:
  n = 0;
  *v8 = 0;
  if ( src != v46 )
    operator delete(src);
  v37 = *a1;
  v38 = (size_t)a1[1];
  v10 = sub_2246AB0(&v37, "+", 1, 0);
  if ( v10 == -1 )
  {
    v42 = nullptr;
    v43 = 0;
    v40 = v37;
    v41 = v38;
  }
  else
  {
    v11 = v10 + 1;
    if ( v10 + 1 > v38 )
    {
      v11 = v38;
      v12 = 0;
    }
    else
    {
      v12 = v38 - v11;
    }
    v43 = v12;
    if ( v10 > v38 )
      v10 = v38;
    v40 = v37;
    v41 = v10;
    v42 = (char *)v37 + v11;
  }
  sub_2246450(&src, &v40);
  v13 = *a1;
  if ( src == v46 )
  {
    v21 = n;
    if ( n )
    {
      if ( n == 1 )
        *v13 = v46[0];
      else
        memcpy(v13, src, n);
      v21 = n;
      v13 = *a1;
    }
    a1[1] = (void *)v21;
    v13[v21] = 0;
    v13 = src;
  }
  else
  {
    if ( v6 == v13 )
    {
      v32 = *(void ***)&v46[0];
      *a1 = src;
      *(__m128 *)(a1 + 1) = _mm_loadh_ps((const double *)&v32);
    }
    else
    {
      v32 = *(void ***)&v46[0];
      v14 = a1[2];
      *a1 = src;
      *(__m128 *)(a1 + 1) = _mm_loadh_ps((const double *)&v32);
      if ( v13 )
      {
        src = v13;
        *(_QWORD *)&v46[0] = v14;
        goto LABEL_19;
      }
    }
    v13 = v46;
    src = v46;
  }
LABEL_19:
  n = 0;
  *v13 = 0;
  if ( src != v46 )
    operator delete(src);
  if ( !sub_9B4AA0((__int64)a1, "native") )
  {
    v18 = (_BYTE *)sub_22A33B0();
    v32 = v35;
    v35[0] = &v36;
    sub_113C3F0(v35, v18, (__int64)&v18[v19]);
    if ( !sub_9B4AA0((__int64)v32, "generic") )
      goto LABEL_28;
    v22 = sub_1140500(v35[0], v35[1], *a1, a1[1], a4);
    if ( !v22 || (v23 = (_BYTE *)sub_229FBC0(v22), !v24) )
    {
      sub_99BDC0(a1, 0, (unsigned __int64)a1[1], &byte_22F0C30, 0);
LABEL_28:
      if ( v35[0] != v32 + 2 )
        operator delete(v35[0]);
      return a1;
    }
    if ( v23 )
    {
      v40 = &v42;
      sub_113C3F0(&v40, v23, (__int64)&v23[v24]);
    }
    else
    {
      LOBYTE(v42) = 0;
      v40 = &v42;
      v41 = 0;
    }
    v25 = v41;
    v37 = v39;
    v26 = v41 + 3;
    strcpy(v39, "arm");
    v38 = 3;
    if ( v41 + 3 <= 0xF )
    {
      v27 = v39;
      if ( v41 )
      {
        if ( v41 == 1 )
        {
          v39[3] = *(_BYTE *)v40;
          v27 = v39;
        }
        else
        {
          v34 = v41 + 3;
          v33 = v41;
          memcpy(&v39[3], v40, v41);
          v27 = v39;
          v26 = v34;
          v25 = v33;
        }
      }
    }
    else
    {
      if ( v40 != &v42 && v26 <= (unsigned __int64)v42 )
      {
        v28 = (__m128i *)sub_99BDC0(&v40, 0, 0, v39, 3u);
LABEL_53:
        src = v46;
        if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
        {
          v46[0] = _mm_loadu_si128(v28 + 1);
        }
        else
        {
          src = (void *)v28->m128i_i64[0];
          *(_QWORD *)&v46[0] = v28[1].m128i_i64[0];
        }
        n = v28->m128i_u64[1];
        v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
        v28->m128i_i64[1] = 0;
        v28[1].m128i_i8[0] = 0;
        v29 = *a1;
        if ( src == v46 )
        {
          v31 = n;
          if ( n )
          {
            if ( n == 1 )
              *v29 = v46[0];
            else
              memcpy(v29, src, n);
            v31 = n;
            v29 = *a1;
          }
          a1[1] = (void *)v31;
          v29[v31] = 0;
          v29 = src;
          goto LABEL_59;
        }
        if ( v6 == v29 )
        {
          v33 = *(_QWORD *)&v46[0];
          *a1 = src;
          *(__m128 *)(a1 + 1) = _mm_loadh_ps((const double *)&v33);
        }
        else
        {
          v33 = *(_QWORD *)&v46[0];
          v30 = a1[2];
          *a1 = src;
          *(__m128 *)(a1 + 1) = _mm_loadh_ps((const double *)&v33);
          if ( v29 )
          {
            src = v29;
            *(_QWORD *)&v46[0] = v30;
LABEL_59:
            n = 0;
            *v29 = 0;
            if ( src != v46 )
              operator delete(src);
            if ( v37 != v39 )
              operator delete(v37);
            if ( v40 != &v42 )
              operator delete(v40);
            goto LABEL_28;
          }
        }
        v29 = v46;
        src = v46;
        goto LABEL_59;
      }
      v34 = v41 + 3;
      v33 = v41;
      sub_998B30((__int64)&v37, 3u, 0, v40, v41);
      v27 = (char *)v37;
      v25 = v33;
      v26 = v34;
    }
    v38 = v26;
    v27[v25 + 3] = 0;
    v28 = (__m128i *)&v37;
    goto LABEL_53;
  }
  return a1;
}
