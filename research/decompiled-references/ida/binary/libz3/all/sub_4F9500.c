__int64 __fastcall sub_4F9500(_QWORD *a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rax
  unsigned int *v10; // rbp
  unsigned int *v11; // r14
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ebp
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  size_t v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned int *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ebp
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r15d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // r15d
  __int64 v44; // rbp
  __int64 v45; // rcx
  unsigned int v46; // esi
  __int64 v47; // rax
  __int64 v48; // r15
  unsigned int v49; // r13d
  int v50; // eax
  __int64 result; // rax
  __int64 v52; // r11
  __int64 v53; // rdi
  unsigned int v54; // ecx
  __int64 v55; // r12
  unsigned int i; // r10d
  __int64 v57; // rdx
  int v58; // r8d
  __int64 v59; // r9
  int v60; // esi
  __int64 v61; // rdx
  int v62; // ecx
  _QWORD *v63; // rax
  char **v64; // rbp
  char **exception; // r12
  unsigned int v67; // [rsp+10h] [rbp-78h]
  __int64 v68; // [rsp+10h] [rbp-78h]
  unsigned int v69; // [rsp+24h] [rbp-64h] BYREF
  __int64 v70; // [rsp+28h] [rbp-60h] BYREF
  __int64 v71[11]; // [rsp+30h] [rbp-58h] BYREF

  a1[1] = 0;
  *a1 = qword_1C66768;
  a1[2] = 0;
  if ( !a3 )
  {
    if ( a1 + 1 == a2 + 2 )
      goto LABEL_20;
    v22 = a2[2];
    if ( !v22 )
      goto LABEL_20;
    goto LABEL_13;
  }
  v8 = (_QWORD *)sub_186B270(0x10u);
  *v8 = 2;
  v9 = v8 + 1;
  v10 = a4;
  a1[2] = v9;
  v11 = &a4[a3];
  v12 = v9;
  while ( 1 )
  {
    v13 = *v10++;
    *v9 = v13;
    v14 = *(v12 - 1);
    v15 = (unsigned int)(v14 + 1);
    *(v12 - 1) = v15;
    if ( v11 == v10 )
      break;
    v16 = *(v12 - 2);
    if ( v16 == (_DWORD)v15 )
    {
      v17 = (3 * v16 + 1) >> 1;
      v18 = 4 * v17 + 8;
      if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v71, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v71);
        sub_233E40((__int64)v71);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v12 - 2, v18);
      v12 = v19 + 2;
      *v19 = v17;
      v20 = v19[1];
      a1[2] = v12;
      v9 = &v12[v20];
    }
    else
    {
      v9 = &v12[v15];
    }
  }
  if ( a1 + 1 != a2 + 2 )
  {
    v21 = a1[1];
    if ( v21 )
      sub_186B220((void *)(v21 - 8));
    v22 = a2[2];
    if ( v22 )
    {
LABEL_13:
      v23 = *(_DWORD *)(v22 - 4);
      v24 = *(unsigned int *)(v22 - 8);
      v67 = v24;
      v25 = (_QWORD *)sub_186B270(8 * v24 + 8);
      v26 = (_QWORD *)a2[2];
      a1[1] = v25 + 1;
      *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(v23)).m128i_u64[0];
      if ( v26 )
      {
        v27 = 8LL * *((unsigned int *)v26 - 1);
        if ( v27 <= 8 )
        {
          if ( v27 == 8 )
            v25[1] = *v26;
        }
        else
        {
          memmove(v25 + 1, v26, v27);
        }
      }
      goto LABEL_16;
    }
    a1[1] = 0;
  }
LABEL_16:
  if ( a3 > 1 )
  {
    v28 = a1[1];
    v29 = *(_QWORD *)(v28 + 8LL * *a4);
    v30 = a4;
    do
    {
      v31 = v30[1];
      *(_QWORD *)(v28 + 8LL * *v30++) = *(_QWORD *)(v28 + 8 * v31);
    }
    while ( &a4[a3 - 1] != v30 );
    *(_QWORD *)(v28 + 8LL * a4[a3 - 1]) = v29;
  }
LABEL_20:
  v32 = 0;
  a1[3] = 0;
  *a1 = &off_1C4FE38;
  v33 = a2[15];
  v68 = a2[1];
  while ( 1 )
  {
    v35 = 0x3FFFFFFFCLL;
    if ( v33 )
      v35 = 4LL * (unsigned int)(*(_DWORD *)(v33 - 4) - 1);
    if ( v32 >= *(_DWORD *)(v33 + v35) )
      break;
    v36 = (_QWORD *)a1[3];
    if ( v36 )
    {
      v37 = *((unsigned int *)v36 - 1);
      if ( (_DWORD)v37 == *((_DWORD *)v36 - 2) )
      {
        v38 = (unsigned int)(3 * v37 + 1) >> 1;
        v39 = 4 * v38 + 8;
        if ( 4 * (int)v37 + 8 >= (unsigned int)v39 || (unsigned int)v37 >= v38 )
        {
          v64 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "Overflow encountered when expanding vector");
          *v64 = (char *)off_1C63128;
          sub_2333C0(v64 + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v40 = (unsigned int *)sub_186B300(v36 - 1, v39);
        v36 = v40 + 2;
        *v40 = v38;
        v41 = v40[1];
        a1[3] = v36;
        v33 = a2[15];
        v34 = (_DWORD *)v36 + v41;
      }
      else
      {
        v34 = (_DWORD *)v36 + v37;
      }
    }
    else
    {
      v63 = (_QWORD *)sub_186B270(0x10u);
      v36 = v63 + 1;
      *v63 = 2;
      v33 = a2[15];
      a1[3] = v63 + 1;
      v34 = v63 + 1;
    }
    *v34 = v32++;
    ++*((_DWORD *)v36 - 1);
  }
  v42 = a2[2];
  LODWORD(v71[0]) = 0;
  if ( v42 )
  {
    v43 = 0;
    v44 = 0;
    do
    {
      if ( v43 >= *(_DWORD *)(v42 - 4) )
        break;
      v70 = v44;
      sub_4EE3A0(&v70, (unsigned int *)v71);
      v42 = a2[2];
      ++v43;
      v44 = v70;
      LODWORD(v71[0]) = v43;
    }
    while ( v42 );
  }
  else
  {
    v44 = 0;
  }
  v45 = 0;
  if ( a3 )
  {
    do
    {
      v46 = a4[v45++];
      *(_DWORD *)(v44 + 4LL * a4[(unsigned int)v45 % a3]) = v46;
    }
    while ( v45 != a3 );
  }
  v47 = a1[1];
  v69 = 0;
  v48 = 0;
  if ( v47 )
  {
    v49 = 0;
    do
    {
      if ( v49 >= *(_DWORD *)(v47 - 4) )
        break;
      v71[0] = v48;
      sub_4EE3A0(v71, &v69);
      v48 = v71[0];
      v50 = sub_4ED1A0(v68, *(_QWORD *)(a1[1] + 8LL * v49));
      v69 += v50;
      v47 = a1[1];
      ++v49;
    }
    while ( v47 );
  }
  v71[0] = v48;
  result = sub_4EE3A0(v71, &v69);
  v52 = a2[2];
  v53 = v71[0];
  if ( v52 )
  {
    v54 = *(_DWORD *)(v52 - 4);
    if ( v54 )
    {
      v55 = a2[15];
      for ( i = 0; i < v54; ++i )
      {
        v57 = i;
        v58 = *(_DWORD *)(v55 + 4LL * (i + 1));
        result = *(unsigned int *)(v55 + 4 * v57);
        if ( v58 != (_DWORD)result )
        {
          v59 = a1[3];
          v60 = *(_DWORD *)(v53 + 4LL * *(unsigned int *)(v44 + 4 * v57)) - result;
          do
          {
            v61 = (unsigned int)result;
            v62 = v60 + result;
            result = (unsigned int)(result + 1);
            *(_DWORD *)(v59 + 4 * v61) = v62;
          }
          while ( v58 != (_DWORD)result );
          v54 = *(_DWORD *)(v52 - 4);
        }
      }
    }
  }
  if ( v53 )
    result = sub_186B220((void *)(v53 - 8));
  if ( v44 )
    return sub_186B220((void *)(v44 - 8));
  return result;
}

