__m128 *__fastcall sub_528E40(
        _QWORD *a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __int64 a8)
{
  char **exception; // r12
  __m128 *v11; // rax
  __int64 v12; // r15
  __m128 *v13; // rbp
  size_t v14; // r15
  __m128 *v15; // rax
  __m128 *v16; // rdx
  __m128 *v17; // r14
  __m128 *v18; // rcx
  const __m128i *v19; // rbx
  __int64 v20; // r8
  const __m128i *v21; // r10
  __int64 v22; // r9
  size_t v23; // r12
  __m128 *v24; // r15
  __int64 v25; // rax
  __m128 *v26; // rax
  int v27; // eax
  size_t v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // r14
  _QWORD *v32; // rdx
  const __m128i *v33; // r15
  const __m128i *v34; // r8
  _QWORD *v35; // rsi
  int v36; // eax
  const __m128i *v37; // r14
  __int64 v38; // r15
  _QWORD *v39; // rax
  int *v40; // rax
  int *v41; // rbx
  const __m128i *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r9d
  size_t v45; // rsi
  unsigned int *v46; // rax
  int v47; // edi
  __int64 v48; // rax
  __m128 *result; // rax
  unsigned int v51; // [rsp+8h] [rbp-F0h]
  int v53; // [rsp+20h] [rbp-D8h]
  __m128 *v54; // [rsp+20h] [rbp-D8h]
  int v55; // [rsp+28h] [rbp-D0h]
  void *v56; // [rsp+28h] [rbp-D0h]
  __m128 *v58; // [rsp+60h] [rbp-98h] BYREF
  int v59; // [rsp+68h] [rbp-90h]
  int v60; // [rsp+6Ch] [rbp-8Ch]
  int v61; // [rsp+70h] [rbp-88h]
  void *v62; // [rsp+80h] [rbp-78h] BYREF
  int v63; // [rsp+88h] [rbp-70h]
  int v64; // [rsp+8Ch] [rbp-6Ch]
  int v65; // [rsp+90h] [rbp-68h]
  __int64 v66[11]; // [rsp+A0h] [rbp-58h] BYREF

  v11 = (__m128 *)sub_186B270(0x10u);
  v12 = *(unsigned int *)(a4 + 8);
  v11->m128_u64[0] = 0;
  v13 = v11;
  v11->m128_u64[1] = (unsigned __int64)(a1 + 16);
  v59 = v12;
  v53 = v12;
  v14 = 16 * v12;
  v15 = (__m128 *)sub_186B270(v14);
  v17 = v15;
  v18 = &v15[v14 / 0x10];
  if ( v53 )
  {
    do
    {
      v15->m128_u64[0] = 0;
      ++v15;
      v15[-1].m128_i32[2] = 0;
    }
    while ( v18 != v15 );
  }
  v19 = *(const __m128i **)a4;
  v20 = (unsigned int)(v53 - 1);
  v21 = (const __m128i *)(*(_QWORD *)a4 + v14);
  if ( *(const __m128i **)a4 != v21 )
  {
    v22 = a5;
    v23 = v14;
    v20 = a4;
    v24 = v18;
    v18 = v13;
    do
    {
      while ( v19->m128i_i64[0] <= 1uLL )
      {
        if ( v21 == ++v19 )
          goto LABEL_12;
      }
      v25 = 16LL * (*(_DWORD *)(v19->m128i_i64[0] + 12) & (unsigned int)(v53 - 1));
      v16 = &v17[(unsigned __int64)v25 / 0x10];
      if ( v23 == v25 )
      {
LABEL_37:
        if ( v17 == v16 )
        {
LABEL_59:
          sub_1872CE0("");
          sub_1873130(114, 181);
        }
        v26 = v17;
        while ( v26->m128_u64[0] )
        {
          if ( v16 == ++v26 )
            goto LABEL_59;
        }
      }
      else
      {
        v26 = &v17[(unsigned __int64)v25 / 0x10];
        while ( v26->m128_u64[0] )
        {
          if ( v24 == ++v26 )
            goto LABEL_37;
        }
      }
      a7 = (__m128)_mm_loadu_si128(v19++);
      *v26 = a7;
    }
    while ( v21 != v19 );
LABEL_12:
    a5 = v22;
  }
  v27 = *(_DWORD *)(a4 + 12);
  v58 = v17;
  v61 = 0;
  v60 = v27;
  sub_52C2E0(&v58, a6, v16, v18, v20);
  v54 = v58;
  v28 = 2LL * *(unsigned int *)(a5 + 8);
  v63 = *(_DWORD *)(a5 + 8);
  v55 = v63;
  v29 = (_QWORD *)sub_186B270(v28 * 8);
  v31 = v29;
  v32 = &v29[v28];
  if ( v55 )
  {
    do
    {
      *v29 = 0;
      v29 += 2;
      *((_DWORD *)v29 - 2) = 0;
    }
    while ( v29 != v32 );
  }
  v33 = *(const __m128i **)a5;
  v34 = (const __m128i *)(*(_QWORD *)a5 + v28 * 8);
  if ( *(const __m128i **)a5 != v34 )
  {
    do
    {
      while ( 1 )
      {
        v32 = (_QWORD *)v33->m128i_i64[0];
        if ( v33->m128i_i64[0] > 1uLL )
          break;
        if ( v34 == ++v33 )
          goto LABEL_24;
      }
      v30 = *((_DWORD *)v32 + 3) & (unsigned int)(v55 - 1);
      v35 = &v31[2 * v30];
      if ( v28 == 2 * v30 )
      {
LABEL_42:
        if ( v31 == v35 )
        {
LABEL_58:
          sub_1872CE0("");
          sub_1873130(114, 181);
        }
        v32 = v31;
        while ( *v32 )
        {
          v32 += 2;
          if ( v35 == v32 )
            goto LABEL_58;
        }
      }
      else
      {
        v32 = &v31[2 * v30];
        while ( *v32 )
        {
          v32 += 2;
          if ( &v31[v28] == v32 )
            goto LABEL_42;
        }
      }
      a7 = (__m128)_mm_loadu_si128(v33++);
      *(__m128 *)v32 = a7;
    }
    while ( v34 != v33 );
  }
LABEL_24:
  v36 = *(_DWORD *)(a5 + 12);
  v65 = 0;
  v62 = v31;
  v64 = v36;
  *(double *)a7.m128_u64 = sub_52C2E0(&v62, a6, v32, v30, v34);
  v56 = v62;
  sub_528C00(a1, a2, a3, (__int64)&v62, (__int64)&v58, (__int64)v13, a7);
  v37 = *(const __m128i **)a5;
  v38 = *(_QWORD *)a5 + 16LL * *(unsigned int *)(a5 + 8);
  if ( *(_QWORD *)a5 == v38 )
    goto LABEL_60;
  while ( v37->m128i_i64[0] <= 1uLL )
  {
    if ( (const __m128i *)v38 == ++v37 )
      goto LABEL_60;
  }
  if ( (const __m128i *)v38 == v37 )
  {
LABEL_60:
    sub_51DA70((__int64)a1, a4, a5, a6, v13);
    v13->m128_u64[1] = 0;
    v41 = nullptr;
    v47 = 0;
  }
  else
  {
    v39 = (_QWORD *)sub_186B270(0x10u);
    *v39 = 2;
    v40 = (int *)(v39 + 1);
    v41 = v40;
    while ( 1 )
    {
      *v40 = v37->m128i_i32[2];
      v42 = v37 + 1;
      ++*(v41 - 1);
      if ( (const __m128i *)v38 == &v37[1] )
        break;
      while ( 1 )
      {
        v37 = v42;
        if ( v42->m128i_i64[0] > 1uLL )
          break;
        if ( (const __m128i *)v38 == ++v42 )
          goto LABEL_50;
      }
      if ( (const __m128i *)v38 == v42 )
        break;
      v43 = (unsigned int)*(v41 - 1);
      if ( (_DWORD)v43 == *(v41 - 2) )
      {
        v44 = (unsigned int)(3 * v43 + 1) >> 1;
        v45 = 4 * v44 + 8;
        if ( 4 * (int)v43 + 8 >= (unsigned int)v45 || (unsigned int)v43 >= v44 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v66, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v66);
          sub_233E40((__int64)v66);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v51 = (unsigned int)(3 * v43 + 1) >> 1;
        v46 = (unsigned int *)sub_186B300(v41 - 2, v45);
        v41 = (int *)(v46 + 2);
        *v46 = v51;
        v40 = (int *)&v46[v46[1] + 2];
      }
      else
      {
        v40 = &v41[v43];
      }
    }
LABEL_50:
    sub_51DA70((__int64)a1, a4, a5, a6, v13);
    v13->m128_u64[1] = 0;
    v47 = *(v41 - 1);
  }
  v48 = sub_4DB9C0(v47, v41, (__int64)v13);
  sub_52C6B0(a8, v48);
  if ( v41 )
    sub_186B220(v41 - 2);
  if ( v56 )
    sub_186B220(v56);
  result = v54;
  if ( v54 )
    return (__m128 *)sub_186B220(v54);
  return result;
}

