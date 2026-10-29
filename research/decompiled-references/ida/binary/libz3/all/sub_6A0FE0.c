__m128i *__fastcall sub_6A0FE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  _QWORD *v15; // r13
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // rcx
  _DWORD *v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 *v28; // rsi
  __int64 v29; // rcx
  __m128i *v30; // rbx
  unsigned int v31; // r9d
  __int64 v32; // rcx
  __m128i *v33; // r13
  int v34; // esi
  __int64 v35; // r9
  __m128i *v36; // rdi
  __m128i *result; // rax
  __int64 *v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // r15d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // ebx
  size_t v45; // rsi
  unsigned int *v46; // rax
  unsigned int v47; // ebx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r15d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  __m128i *v55; // rax
  int v56; // r10d
  __m128i *v57; // r8
  const __m128i *v58; // r15
  __m128i *v59; // r11
  __int64 v60; // rax
  __m128i *v61; // rdx
  __m128i *v62; // rax
  __m128i v63; // xmm0
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  char **exception; // rbp
  int v68; // [rsp+8h] [rbp-90h]
  size_t v69; // [rsp+8h] [rbp-90h]
  unsigned int v70; // [rsp+8h] [rbp-90h]
  int v71; // [rsp+10h] [rbp-88h]
  size_t v72; // [rsp+10h] [rbp-88h]
  int v73; // [rsp+18h] [rbp-80h]
  __int64 v74[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD **)(a1 + 8);
  if ( v6 )
    v68 = *(_DWORD *)(v6 - 4);
  else
    v68 = 0;
  v8 = sub_180C100(v7 + 2, 24);
  v9 = (_QWORD *)*v7;
  v10 = v8;
  *(_QWORD *)v8 = off_1C52DE0;
  *(_QWORD *)(v8 + 8) = a1 + 16;
  *(_DWORD *)(v8 + 16) = v68;
  if ( v9 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v40 = (3 * v11 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v41 || v11 >= v40 )
        goto LABEL_84;
      v42 = (unsigned int *)sub_186B300(v9 - 1, v41);
      v43 = v42[1];
      v9 = v42 + 2;
      *v7 = v42 + 2;
      *v42 = v40;
      LODWORD(v42) = v43;
      v14 = &v9[v43];
      v13 = (_DWORD)v42 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v9[v12];
    }
  }
  else
  {
    v64 = (_QWORD *)sub_186B270(0x18u);
    v9 = v64 + 1;
    *v64 = 2;
    v13 = 1;
    *v7 = v9;
    v14 = v9;
  }
  *v14 = v10;
  v15 = *(_QWORD **)(a1 + 8);
  *((_DWORD *)v9 - 1) = v13;
  v16 = (_QWORD *)sub_180C100(v15 + 2, 24);
  v17 = (_QWORD *)*v15;
  v18 = v16;
  *v16 = off_1C52E08;
  v16[1] = a1 + 32;
  v16[2] = a3;
  if ( v17 )
  {
    v19 = *((_DWORD *)v17 - 1);
    if ( v19 == *((_DWORD *)v17 - 2) )
    {
      v51 = (3 * v19 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v52 || v19 >= v51 )
        goto LABEL_84;
      v53 = (unsigned int *)sub_186B300(v17 - 1, v52);
      v54 = v53[1];
      v17 = v53 + 2;
      *v15 = v53 + 2;
      *v53 = v51;
      LODWORD(v53) = v54;
      v22 = &v17[v54];
      v21 = (_DWORD)v53 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v17[v20];
    }
  }
  else
  {
    v65 = (_QWORD *)sub_186B270(0x18u);
    v17 = v65 + 1;
    *v65 = 2;
    v21 = 1;
    *v15 = v17;
    v22 = v17;
  }
  *v22 = v18;
  *((_DWORD *)v17 - 1) = v21;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v23 = *(_DWORD **)(a1 + 24);
  if ( !v23 )
  {
    v66 = (_QWORD *)sub_186B270(0x18u);
    v23 = v66 + 1;
    v66[1] = a3;
    *v66 = 0x100000002LL;
    v27 = 1;
    *(_QWORD *)(a1 + 24) = v23;
    if ( !a2 )
      goto LABEL_17;
LABEL_15:
    ++*(_DWORD *)(a2 + 8);
    v27 = *(v23 - 1);
    v25 = *(v23 - 2);
    goto LABEL_16;
  }
  v24 = *(v23 - 1);
  v25 = *(v23 - 2);
  if ( v24 == v25 )
  {
    v47 = (3 * v25 + 1) >> 1;
    v48 = 8 * v47 + 8;
    if ( 8 * v25 + 8 >= (unsigned int)v48 || v25 >= v47 )
      goto LABEL_84;
    v49 = (unsigned int *)sub_186B300(v23 - 2, v48);
    v50 = v49[1];
    v23 = v49 + 2;
    *v49 = v47;
    *(_QWORD *)(a1 + 24) = v49 + 2;
    LODWORD(v49) = v50;
    v28 = (__int64 *)&v23[2 * v50];
    v25 = v47;
    v27 = (_DWORD)v49 + 1;
  }
  else
  {
    v26 = v24;
    v27 = v24 + 1;
    v28 = (__int64 *)&v23[2 * v26];
  }
  *v28 = a3;
  *(v23 - 1) = v27;
  if ( a2 )
    goto LABEL_15;
LABEL_16:
  if ( v27 == v25 )
  {
    v44 = (3 * v27 + 1) >> 1;
    v45 = 8 * v44 + 8;
    if ( 8 * v27 + 8 < (unsigned int)v45 && v27 < v44 )
    {
      v46 = (unsigned int *)sub_186B300(v23 - 2, v45);
      v23 = v46 + 2;
      *v46 = v44;
      v27 = v46[1];
      *(_QWORD *)(a1 + 24) = v23;
      goto LABEL_17;
    }
LABEL_84:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v74, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v74);
    sub_233E40((__int64)v74);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_17:
  *(_QWORD *)&v23[2 * v27] = a2;
  *(v23 - 1) = v27 + 1;
  v29 = *(unsigned int *)(a1 + 40);
  if ( 3 * (int)v29 < (unsigned int)(4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48))) )
  {
    v71 = 2 * v29;
    v69 = 16LL * (unsigned int)(2 * v29);
    v55 = (__m128i *)sub_186B270(v69);
    v32 = v69;
    v56 = v71;
    v30 = v55;
    v57 = &v55[v69 / 0x10];
    if ( v71 )
    {
      if ( (v69 & 0x10) == 0 || (*v55 = 0, ++v55, v55 != v57) )
      {
        do
        {
          *v55 = 0;
          v55 += 2;
          v55[-1] = 0;
        }
        while ( v55 != v57 );
      }
    }
    v58 = *(const __m128i **)(a1 + 32);
    v31 = v71 - 1;
    v33 = v57;
    v59 = (__m128i *)&v58[*(unsigned int *)(a1 + 40)];
    if ( v58 != v59 )
    {
      do
      {
        while ( v58->m128i_i64[0] <= 1uLL )
        {
          if ( v59 == ++v58 )
            goto LABEL_60;
        }
        v60 = 16LL * (*(_DWORD *)(v58->m128i_i64[0] + 12) & v31);
        v61 = &v30[(unsigned __int64)v60 / 0x10];
        if ( v69 == v60 )
        {
LABEL_64:
          if ( v30 == v61 )
          {
LABEL_72:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v62 = v30;
          while ( v62->m128i_i64[0] )
          {
            if ( v61 == ++v62 )
              goto LABEL_72;
          }
        }
        else
        {
          v62 = &v30[(unsigned __int64)v60 / 0x10];
          while ( v62->m128i_i64[0] )
          {
            if ( v57 == ++v62 )
              goto LABEL_64;
          }
        }
        v63 = _mm_loadu_si128(v58++);
        *v62 = v63;
      }
      while ( v59 != v58 );
LABEL_60:
      v59 = *(__m128i **)(a1 + 32);
    }
    if ( v59 )
    {
      v73 = v71;
      v72 = v69;
      v70 = v56 - 1;
      sub_186B220(v59);
      v56 = v73;
      v32 = v72;
      v31 = v70;
    }
    *(_QWORD *)(a1 + 32) = v30;
    *(_DWORD *)(a1 + 40) = v56;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    v30 = *(__m128i **)(a1 + 32);
    v31 = v29 - 1;
    v32 = 16 * v29;
    v33 = (__m128i *)((char *)v30 + v32);
  }
  v34 = *(_DWORD *)(a3 + 12);
  v35 = 16LL * (v34 & v31);
  v36 = &v30[(unsigned __int64)v35 / 0x10];
  if ( v35 != v32 )
  {
    result = &v30[(unsigned __int64)v35 / 0x10];
    v38 = nullptr;
    while ( 1 )
    {
      v39 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v39 + 12) == v34 && a3 == v39 )
        {
          result->m128i_i64[0] = a3;
          result->m128i_i64[1] = a2;
          return result;
        }
      }
      else
      {
        if ( !v39 )
        {
          if ( v38 )
            goto LABEL_70;
          v38 = (__int64 *)result;
          goto LABEL_71;
        }
        v38 = (__int64 *)result;
      }
      if ( ++result == v33 )
        goto LABEL_30;
    }
  }
  v38 = nullptr;
  while ( 1 )
  {
LABEL_30:
    if ( v36 == v30 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v30->m128i_i64[0];
    if ( v30->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v34 && (__m128i *)a3 == result )
    {
      v30->m128i_i64[0] = a3;
      v30->m128i_i64[1] = a2;
      return result;
    }
LABEL_29:
    ++v30;
  }
  if ( result )
  {
    v38 = (__int64 *)v30;
    goto LABEL_29;
  }
  if ( v38 )
LABEL_70:
    --*(_DWORD *)(a1 + 48);
  else
    v38 = (__int64 *)v30;
LABEL_71:
  *v38 = a3;
  v38[1] = a2;
  ++*(_DWORD *)(a1 + 44);
  return result;
}

