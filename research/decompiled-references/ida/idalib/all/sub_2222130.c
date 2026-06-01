void __fastcall sub_2222130(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  void *v7; // r15
  size_t v8; // rdx
  size_t v9; // r14
  unsigned int v10; // eax
  int v11; // eax
  __int64 *v12; // rsi
  __int64 v13; // rdi
  const void *v14; // r14
  size_t v15; // r12
  _BYTE *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  char *v25; // rdx
  char *v26; // rcx
  char v27; // si
  const void *v28; // rsi
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // r8
  __int64 *v34; // rax
  _QWORD *v35; // r14
  _BYTE *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r9d
  __int64 *v40; // r8
  __int64 v41; // rcx
  unsigned int v42; // eax
  size_t v43; // rdx
  void *v44; // [rsp+8h] [rbp-240h]
  unsigned int v45; // [rsp+8h] [rbp-240h]
  __int64 v46; // [rsp+10h] [rbp-238h]
  __int64 v47; // [rsp+18h] [rbp-230h]
  __int64 *v48; // [rsp+20h] [rbp-228h]
  __int64 v49; // [rsp+28h] [rbp-220h]
  _QWORD v50[4]; // [rsp+30h] [rbp-218h] BYREF
  __int16 v51; // [rsp+50h] [rbp-1F8h]
  char v52[32]; // [rsp+60h] [rbp-1E8h] BYREF
  __int16 v53; // [rsp+80h] [rbp-1C8h]
  __int64 *v54[4]; // [rsp+90h] [rbp-1B8h] BYREF
  __int16 v55; // [rsp+B0h] [rbp-198h]
  void *src; // [rsp+C0h] [rbp-188h] BYREF
  size_t n; // [rsp+C8h] [rbp-180h]
  _QWORD v58[2]; // [rsp+D0h] [rbp-178h] BYREF
  __int16 v59; // [rsp+E0h] [rbp-168h]
  _BYTE *v60; // [rsp+F0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-150h]
  _BYTE v62[320]; // [rsp+108h] [rbp-140h] BYREF

  v3 = a2[1];
  v4 = *a2;
  v5 = sub_228AA60(*a2, v3, 0);
  v47 = v6;
  v46 = v5;
  v7 = (void *)sub_228A4B0(v4, v3, 0);
  v9 = v8;
  v60 = v62;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v10 = sub_2244B30(v7, v8);
  v11 = sub_2244E60(a1, v7, v9, v10);
  if ( v11 == -1 )
    v12 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  else
    v12 = (__int64 *)(*(_QWORD *)a1 + 8LL * v11);
  sub_11727E0((__int64 **)&src, v12, 1);
  v44 = src;
  sub_11727E0((__int64 **)&src, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  if ( src != v44 )
  {
    v13 = 0;
    v14 = *(const void **)(*(_QWORD *)v44 + 8LL);
    v15 = *(_QWORD *)(*(_QWORD *)v44 + 16LL);
    si128.m128i_i64[0] = 0;
    if ( v15 > si128.m128i_i64[1] )
    {
      sub_2236E10(&v60, v62, v15, 1);
      v13 = si128.m128i_i64[0];
      if ( !v15 )
        goto LABEL_7;
    }
    else if ( !v15 )
    {
LABEL_7:
      si128.m128i_i64[0] = v13 + v15;
      goto LABEL_8;
    }
    memcpy(&v60[v13], v14, v15);
    v13 = si128.m128i_i64[0];
    goto LABEL_7;
  }
  src = v7;
  v59 = 261;
  n = v9;
  if ( !(unsigned int)sub_228E700(&src, &v60, 0) )
  {
    src = v58;
    sub_2221F90(&src, v60, (__int64)&v60[si128.m128i_i64[0]]);
    v30 = sub_2244B30(v7, v9);
    v31 = (unsigned int)sub_2244CB0(a1, v7, v9, v30);
    v33 = (__int64 *)(*(_QWORD *)a1 + 8 * v31);
    if ( *v33 )
    {
      if ( *v33 != -8 )
      {
        sub_11727E0(v54, v33, 0);
        v34 = v54[0];
        goto LABEL_43;
      }
      --*(_DWORD *)(a1 + 16);
    }
    v48 = v33;
    v45 = v31;
    v38 = sub_22300B0(v9 + 41, 8, v31, v32, v33, v31);
    v39 = v45;
    v40 = v48;
    v41 = v38;
    if ( v9 )
    {
      v49 = v38;
      memcpy((void *)(v38 + 40), v7, v9);
      v41 = v49;
      v40 = v48;
      v39 = v45;
    }
    *(_BYTE *)(v41 + v9 + 40) = 0;
    *(_QWORD *)v41 = v9;
    *(_QWORD *)(v41 + 8) = v41 + 24;
    *(_QWORD *)(v41 + 16) = 0;
    *(_BYTE *)(v41 + 24) = 0;
    *v40 = v41;
    ++*(_DWORD *)(a1 + 12);
    v42 = sub_22450D0(a1, v39);
    sub_11727E0(v54, (__int64 *)(*(_QWORD *)a1 + 8LL * v42), 0);
    v34 = v54[0];
LABEL_43:
    v35 = (_QWORD *)*v34;
    v36 = *(_BYTE **)(*v34 + 8);
    if ( src == v58 )
    {
      v43 = n;
      if ( n )
      {
        if ( n == 1 )
          *v36 = v58[0];
        else
          memcpy(v36, src, n);
        v43 = n;
        v36 = (_BYTE *)v35[1];
      }
      v35[2] = v43;
      v36[v43] = 0;
      v36 = src;
      goto LABEL_47;
    }
    if ( v36 == (_BYTE *)(v35 + 3) )
    {
      v35[1] = src;
      v35[2] = n;
      v35[3] = v58[0];
    }
    else
    {
      v35[1] = src;
      v37 = v35[3];
      v35[2] = n;
      v35[3] = v58[0];
      if ( v36 )
      {
        src = v36;
        v58[0] = v37;
        goto LABEL_47;
      }
    }
    v36 = v58;
    src = v58;
LABEL_47:
    n = 0;
    *v36 = 0;
    if ( src != v58 )
      operator delete(src);
LABEL_8:
    v59 = 257;
    v55 = 257;
    v50[0] = v46;
    v53 = 257;
    v51 = 261;
    v50[1] = v47;
    sub_228A3B0(&v60, v50, v52, v54, &src);
    v16 = (_BYTE *)*a2;
    if ( (_QWORD *)*a2 == a2 + 3 )
    {
      v17 = si128.m128i_i64[0];
      v18 = a2[2];
    }
    else
    {
      v17 = si128.m128i_i64[0];
      v18 = a2[2];
      if ( v60 != v62 )
      {
        *a2 = v60;
        v19 = a2[1];
        v60 = v16;
        si128.m128i_i64[0] = v19;
        v20 = si128.m128i_i64[1];
        a2[1] = v17;
        a2[2] = v20;
        goto LABEL_11;
      }
    }
    if ( v17 > v18 )
    {
      sub_2236E10(a2, a2 + 3, v17, 1);
      v21 = a2[1];
      if ( v21 <= si128.m128i_i64[1] )
        goto LABEL_17;
    }
    else
    {
      v21 = a2[1];
      if ( v21 <= si128.m128i_i64[1] )
      {
LABEL_17:
        v22 = si128.m128i_i64[0];
        v23 = si128.m128i_i64[0];
        if ( v21 <= si128.m128i_i64[0] )
          v23 = v21;
        if ( v23 )
        {
          v24 = 0;
          do
          {
            v25 = &v60[v24];
            v26 = (char *)(v24 + *a2);
            ++v24;
            v27 = *v26;
            *v26 = *v25;
            *v25 = v27;
          }
          while ( v23 != v24 );
          v21 = a2[1];
          v22 = si128.m128i_i64[0];
        }
        v16 = v60;
        if ( v22 >= v21 )
        {
          if ( v22 > v21 )
          {
            v29 = v21;
            if ( &v60[v23] != &v60[v22] )
            {
              memcpy((void *)(v21 + *a2), &v60[v23], v22 - v23);
              v29 = a2[1];
              v16 = v60;
            }
            a2[1] = v29 + v22 - v21;
          }
        }
        else
        {
          v28 = (const void *)(*a2 + v23);
          if ( v28 != (const void *)(v21 + *a2) )
          {
            memcpy(&v60[v22], v28, v21 - v23);
            v16 = v60;
          }
          a2[1] = v23;
        }
LABEL_11:
        if ( v16 == v62 )
          return;
        goto LABEL_12;
      }
    }
    sub_2236E10(&v60, v62, v21, 1);
    v21 = a2[1];
    goto LABEL_17;
  }
  v16 = v60;
  if ( v60 != v62 )
LABEL_12:
    free(v16);
}
