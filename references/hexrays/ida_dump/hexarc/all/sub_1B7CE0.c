void __fastcall sub_1B7CE0(const __m128i *a1)
{
  __int64 v2; // r13
  __m128i v3; // kr10_16
  __int128 v4; // kr30_16
  char v5; // al
  __int64 v6; // r8
  unsigned int *v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int *v10; // rdx
  signed int *v11; // r14
  unsigned int v12; // edx
  signed int v13; // ebx
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  int v17; // edx
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rdi
  char v25; // r13
  _QWORD *v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  void **v30; // rbp
  void *v31; // rdi
  char v32; // cl
  char v33; // dl
  __int64 v34; // rax
  char v35; // dl
  _BYTE *v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm1
  __int64 v39; // rcx
  _QWORD *exception; // rdi
  _QWORD *v41; // rdi
  unsigned int v42; // [rsp+0h] [rbp-154h]
  unsigned int *v43; // [rsp+4h] [rbp-150h]
  unsigned int *v44; // [rsp+Ch] [rbp-148h]
  __m128i *v45; // [rsp+14h] [rbp-140h]
  _QWORD *v46; // [rsp+1Ch] [rbp-138h]
  __int128 v47; // [rsp+2Ch] [rbp-128h]
  unsigned int *v48; // [rsp+3Ch] [rbp-118h]
  signed int v49; // [rsp+70h] [rbp-E4h] BYREF
  const __m128i *v50; // [rsp+74h] [rbp-E0h] BYREF
  unsigned int *v51; // [rsp+7Ch] [rbp-D8h] BYREF
  __int128 v52; // [rsp+84h] [rbp-D0h]
  signed int v53; // [rsp+9Ch] [rbp-B8h] BYREF
  __int64 v54; // [rsp+A4h] [rbp-B0h]
  __m128i v55; // [rsp+ACh] [rbp-A8h] BYREF
  __m128i v56; // [rsp+BCh] [rbp-98h] BYREF
  __int128 v57; // [rsp+CCh] [rbp-88h]
  __int128 v58; // [rsp+DCh] [rbp-78h]
  __int128 v59; // [rsp+ECh] [rbp-68h]
  __int128 v60; // [rsp+FCh] [rbp-58h]
  unsigned __int64 v61; // [rsp+114h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v56 = 0u;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  sub_1B3EC0(&v56, 0);
  v2 = v59;
  v48 = *((unsigned int **)&v57 + 1);
  v44 = (unsigned int *)v57;
  v47 = v58;
  v3 = v56;
  v4 = v60;
  if ( (_QWORD)v59 == (_QWORD)v60 - 4LL )
  {
    sub_1B4020((char **)&v56, &a1[1].m128i_i32[2]);
    v48 = *((unsigned int **)&v57 + 1);
    v44 = (unsigned int *)v57;
    v47 = v58;
    v43 = (unsigned int *)v59;
    v3 = v56;
    v4 = v60;
  }
  else
  {
    *(_DWORD *)v59 = a1[1].m128i_i32[2];
    v43 = (unsigned int *)(v2 + 4);
  }
  v45 = (__m128i *)&a1[3];
  if ( v44 == v43 )
    goto LABEL_40;
  do
  {
    v42 = *v44;
    if ( v44 == (unsigned int *)(v47 - 4) )
    {
      operator delete(v48, 0x200u);
      v44 = *(unsigned int **)(*((_QWORD *)&v47 + 1) + 8LL);
      *(_QWORD *)&v47 = v44 + 128;
      *((_QWORD *)&v47 + 1) += 8LL;
      v48 = v44;
    }
    else
    {
      ++v44;
    }
    if ( sub_1B5860((__int64)a1, v42) )
      continue;
    v51 = nullptr;
    v52 = 0;
    v5 = sub_1B2AC0((__int64)a1, (__int64 *)&v51, v42);
    v6 = (__int64)v51;
    v7 = &v51[v52];
    if ( v5 )
    {
      v8 = a1->m128i_i64[1];
      if ( v42 != *(_DWORD *)(v8 + 64) - 1 )
      {
        v9 = v42 + 1;
        if ( v7 != v51 )
        {
          v10 = v51;
          while ( v9 != *v10 )
          {
            if ( v7 == ++v10 )
              goto LABEL_59;
          }
          if ( v7 != v10 )
            goto LABEL_14;
        }
LABEL_59:
        if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
        {
          v51 = (unsigned int *)qvector_reserve(&v51, v51, v52 + 1, 4);
          v7 = &v51[v52];
        }
        *v7 = v9;
        v6 = (__int64)v51;
        *(_QWORD *)&v52 = v52 + 1;
        v7 = &v51[v52];
      }
    }
    if ( v7 == (unsigned int *)v6 )
      goto LABEL_37;
    v8 = a1->m128i_i64[1];
LABEL_14:
    v11 = (signed int *)v6;
    while ( 2 )
    {
      v12 = *(_DWORD *)(v8 + 64);
      v13 = *v11;
      v49 = v13;
      if ( v13 >= (int)(v12 - 1) )
        break;
      if ( v13 >= v12 )
      {
        if ( !under_debugger )
          sub_37B760(52719);
        BUG();
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * (unsigned int)v13) + 76LL) == 6 )
        break;
      v14 = a1[3].m128i_u64[0];
      v53 = v13;
      v54 = 0;
      v50 = (const __m128i *)&v53;
      v55 = 0;
      if ( !v14 )
      {
        v37 = qalloc(56);
        v38 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
        if ( !v37 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v37 + 48) = 0;
        *(_OWORD *)(v37 + 16) = 0;
        *(_OWORD *)(v37 + 32) = 0;
        *(__m128i *)(v37 + 8) = v38;
        *(_QWORD *)v37 = v37 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a1[3].m128i_i64[0] = v37;
        *(_QWORD *)v37 = v37 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v37 & 3LL;
        *(__m128i *)(a1[3].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                 (__m128i)a1[3].m128i_u64[0],
                                                 (__m128i)a1[3].m128i_u64[0]);
        *(_QWORD *)a1[3].m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1[3].m128i_i64[0] |= 2uLL;
        v14 = a1[3].m128i_u64[0];
LABEL_23:
        v15 = qalloc(56);
        v16 = v15;
        if ( !v15 )
        {
          v41 = __cxa_allocate_exception(8u);
          *v41 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v41,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)v15 = 0;
        v17 = v53;
        *(_OWORD *)(v15 + 16) = 0;
        *(_DWORD *)(v15 + 24) = v17;
        v18 = v54;
        v19 = _mm_load_si128(&v55);
        v54 = 0;
        v55 = 0;
        *(_QWORD *)(v15 + 32) = v18;
        v20 = *(_QWORD *)v15;
        *(__m128i *)(v15 + 40) = v19;
        v21 = v14 & 0xFFFFFFFFFFFFFFFCLL | v20 & 1;
        *(_QWORD *)v15 = v21;
        v22 = _mm_loadl_epi64(a1 + 3);
        *(_QWORD *)v15 = v21 | 1;
        *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v22, v22);
        if ( v14 == a1[3].m128i_i64[0] )
        {
          *(_QWORD *)v14 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
          *(_QWORD *)(a1[3].m128i_i64[0] + 8) = v15;
          *(_QWORD *)(a1[3].m128i_i64[0] + 16) = v15;
          v39 = *(_QWORD *)v15 & 2LL;
          *(_QWORD *)v15 &= ~1uLL;
          *(_QWORD *)v15 = v39 | a1[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v14 + 8) = v15;
          v23 = a1[3].m128i_i64[0];
          if ( v14 == *(_QWORD *)(v23 + 8) )
            *(_QWORD *)(v23 + 8) = v15;
          sub_1B7780(v45, (__int64 *)v15);
        }
        ++a1[3].m128i_i64[1];
        v24 = v54;
        v25 = 1;
LABEL_29:
        if ( v24 )
        {
          v55.m128i_i64[0] = 0;
          qfree(v24);
        }
        v26 = (_QWORD *)(v16 + 24);
        goto LABEL_32;
      }
      if ( !a1[3].m128i_i64[1] )
        goto LABEL_23;
      v32 = 1;
      v16 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
        v33 = 1;
LABEL_46:
        v34 = sub_1B7B60(v45, (unsigned __int64 *)v14, v33, &v50);
        v24 = v54;
        v16 = v34;
        v25 = v35;
        goto LABEL_29;
      }
      while ( 1 )
      {
        v26 = (_QWORD *)(v16 + 24);
        if ( v13 < *(_DWORD *)(v16 + 24) )
        {
          v36 = *(_BYTE **)(v16 + 8);
          v32 = 1;
          goto LABEL_50;
        }
        if ( v13 <= *(_DWORD *)(v16 + 24) )
          break;
        v36 = *(_BYTE **)(v16 + 16);
        v32 = 0;
LABEL_50:
        if ( (*v36 & 2) != 0 )
          goto LABEL_51;
        v16 = (unsigned __int64)v36;
      }
      if ( !v16 )
      {
LABEL_51:
        v33 = v32;
        v14 = v16;
        goto LABEL_46;
      }
      v25 = 0;
LABEL_32:
      v27 = v26[2];
      v28 = v26[1];
      if ( v26[3] < (unsigned __int64)(v27 + 1) )
      {
        v46 = v26;
        v29 = qvector_reserve(v16 + 32, v28, v27 + 1, 4);
        v26 = v46;
        v28 = v29;
        v46[1] = v29;
        v27 = v46[2];
      }
      *(_DWORD *)(v28 + 4 * v27) = v42;
      ++v26[2];
      if ( v25 )
      {
        if ( v43 == (unsigned int *)(v4 - 4) )
        {
          v56 = v3;
          *(_QWORD *)&v57 = v44;
          *((_QWORD *)&v57 + 1) = v48;
          v58 = v47;
          *(_QWORD *)&v59 = v43;
          v60 = v4;
          sub_1B4020((char **)&v56, &v49);
          v3 = v56;
          v48 = *((unsigned int **)&v57 + 1);
          v44 = (unsigned int *)v57;
          v47 = v58;
          v43 = (unsigned int *)v59;
          v4 = v60;
          break;
        }
        *v43 = v13;
        ++v11;
        ++v43;
        if ( v7 == (unsigned int *)v11 )
          goto LABEL_36;
LABEL_17:
        v8 = a1->m128i_i64[1];
        continue;
      }
      break;
    }
    if ( v7 != (unsigned int *)++v11 )
      goto LABEL_17;
LABEL_36:
    v6 = (__int64)v51;
LABEL_37:
    if ( v6 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v6);
    }
  }
  while ( v44 != v43 );
LABEL_40:
  if ( v3.m128i_i64[0] )
  {
    v30 = *((void ***)&v47 + 1);
    if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(*((_QWORD *)&v4 + 1) + 8LL) )
    {
      do
      {
        v31 = *v30++;
        operator delete(v31, 0x200u);
      }
      while ( (unsigned __int64)v30 < *((_QWORD *)&v4 + 1) + 8LL );
    }
    operator delete((void *)v3.m128i_i64[0], 8 * v3.m128i_i64[1]);
  }
}
