void __fastcall sub_1BE560(const __m128i *a1)
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
  __int64 v16; // r12
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
  unsigned __int64 v33; // r12
  char v34; // dl
  __int64 v35; // rax
  char v36; // dl
  _BYTE *v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm1
  __int64 v40; // rcx
  _QWORD *exception; // rdi
  _QWORD *v42; // rdi
  unsigned int v43; // [rsp+0h] [rbp-154h]
  unsigned int *v44; // [rsp+4h] [rbp-150h]
  unsigned int *v45; // [rsp+Ch] [rbp-148h]
  __m128i *v46; // [rsp+14h] [rbp-140h]
  _QWORD *v47; // [rsp+1Ch] [rbp-138h]
  __int128 v48; // [rsp+2Ch] [rbp-128h]
  unsigned int *v49; // [rsp+3Ch] [rbp-118h]
  signed int v50; // [rsp+70h] [rbp-E4h] BYREF
  const __m128i *v51; // [rsp+74h] [rbp-E0h] BYREF
  unsigned int *v52; // [rsp+7Ch] [rbp-D8h] BYREF
  __int128 v53; // [rsp+84h] [rbp-D0h]
  signed int v54; // [rsp+9Ch] [rbp-B8h] BYREF
  __int64 v55; // [rsp+A4h] [rbp-B0h]
  __m128i v56; // [rsp+ACh] [rbp-A8h] BYREF
  __m128i v57; // [rsp+BCh] [rbp-98h] BYREF
  __int128 v58; // [rsp+CCh] [rbp-88h]
  __int128 v59; // [rsp+DCh] [rbp-78h]
  __int128 v60; // [rsp+ECh] [rbp-68h]
  __int128 v61; // [rsp+FCh] [rbp-58h]
  unsigned __int64 v62; // [rsp+114h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v57 = 0u;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_1BA740(&v57, 0);
  v2 = v60;
  v49 = *((unsigned int **)&v58 + 1);
  v45 = (unsigned int *)v58;
  v48 = v59;
  v3 = v57;
  v4 = v61;
  if ( (_QWORD)v60 == (_QWORD)v61 - 4LL )
  {
    sub_1BA8A0(v57.m128i_i64, &a1[1].m128i_i32[2]);
    v49 = *((unsigned int **)&v58 + 1);
    v45 = (unsigned int *)v58;
    v48 = v59;
    v44 = (unsigned int *)v60;
    v3 = v57;
    v4 = v61;
  }
  else
  {
    *(_DWORD *)v60 = a1[1].m128i_i32[2];
    v44 = (unsigned int *)(v2 + 4);
  }
  v46 = (__m128i *)&a1[3];
  if ( v45 == v44 )
    goto LABEL_40;
  do
  {
    v43 = *v45;
    if ( v45 == (unsigned int *)(v48 - 4) )
    {
      operator delete(v49, 0x200u);
      v45 = *(unsigned int **)(*((_QWORD *)&v48 + 1) + 8LL);
      *(_QWORD *)&v48 = v45 + 128;
      *((_QWORD *)&v48 + 1) += 8LL;
      v49 = v45;
    }
    else
    {
      ++v45;
    }
    if ( sub_1BC0E0((__int64)a1, v43) )
      continue;
    v52 = nullptr;
    v53 = 0;
    v5 = sub_1B9340((__int64)a1, (__int64 *)&v52, v43);
    v6 = (__int64)v52;
    v7 = &v52[v53];
    if ( v5 )
    {
      v8 = a1->m128i_i64[1];
      if ( v43 != *(_DWORD *)(v8 + 64) - 1 )
      {
        v9 = v43 + 1;
        if ( v7 != v52 )
        {
          v10 = v52;
          while ( v9 != *v10 )
          {
            if ( v7 == ++v10 )
              goto LABEL_59;
          }
          if ( v7 != v10 )
            goto LABEL_14;
        }
LABEL_59:
        if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
        {
          v52 = (unsigned int *)qvector_reserve();
          v7 = &v52[v53];
        }
        *v7 = v9;
        v6 = (__int64)v52;
        *(_QWORD *)&v53 = v53 + 1;
        v7 = &v52[v53];
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
      v50 = v13;
      if ( v13 >= (int)(v12 - 1) )
        break;
      if ( v13 >= v12 )
      {
        if ( !under_debugger )
          sub_383060(52719);
        BUG();
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * (unsigned int)v13) + 76LL) == 6 )
        break;
      v14 = a1[3].m128i_u64[0];
      v54 = v13;
      v55 = 0;
      v51 = (const __m128i *)&v54;
      v56 = 0;
      if ( !v14 )
      {
        v38 = qalloc();
        v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
        if ( !v38 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v38 + 48) = 0;
        *(_OWORD *)(v38 + 16) = 0;
        *(_OWORD *)(v38 + 32) = 0;
        *(__m128i *)(v38 + 8) = v39;
        *(_QWORD *)v38 = v38 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a1[3].m128i_i64[0] = v38;
        *(_QWORD *)v38 = v38 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v38 & 3LL;
        *(__m128i *)(a1[3].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                 (__m128i)a1[3].m128i_u64[0],
                                                 (__m128i)a1[3].m128i_u64[0]);
        *(_QWORD *)a1[3].m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1[3].m128i_i64[0] |= 2uLL;
        v14 = a1[3].m128i_u64[0];
LABEL_23:
        v15 = qalloc();
        v16 = v15;
        if ( !v15 )
        {
          v42 = __cxa_allocate_exception(8u);
          *v42 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v42,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)v15 = 0;
        v17 = v54;
        *(_OWORD *)(v15 + 16) = 0;
        *(_DWORD *)(v15 + 24) = v17;
        v18 = v55;
        v19 = _mm_load_si128(&v56);
        v55 = 0;
        v56 = 0;
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
          v40 = *(_QWORD *)v15 & 2LL;
          *(_QWORD *)v15 &= ~1uLL;
          *(_QWORD *)v15 = v40 | a1[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v14 + 8) = v15;
          v23 = a1[3].m128i_i64[0];
          if ( v14 == *(_QWORD *)(v23 + 8) )
            *(_QWORD *)(v23 + 8) = v15;
          sub_1BE000(v46, (__int64 *)v15);
        }
        ++a1[3].m128i_i64[1];
        v24 = v55;
        v25 = 1;
LABEL_29:
        if ( v24 )
        {
          v56.m128i_i64[0] = 0;
          qfree();
        }
        v26 = (_QWORD *)(v16 + 24);
        goto LABEL_32;
      }
      if ( !a1[3].m128i_i64[1] )
        goto LABEL_23;
      v32 = 1;
      v33 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v33 & 2) != 0 )
      {
        v34 = 1;
LABEL_46:
        v35 = sub_1BE3E0(v46, (unsigned __int64 *)v14, v34, &v51);
        v24 = v55;
        v16 = v35;
        v25 = v36;
        goto LABEL_29;
      }
      while ( 1 )
      {
        v26 = (_QWORD *)(v33 + 24);
        if ( v13 < *(_DWORD *)(v33 + 24) )
        {
          v37 = *(_BYTE **)(v33 + 8);
          v32 = 1;
          goto LABEL_50;
        }
        if ( v13 <= *(_DWORD *)(v33 + 24) )
          break;
        v37 = *(_BYTE **)(v33 + 16);
        v32 = 0;
LABEL_50:
        if ( (*v37 & 2) != 0 )
          goto LABEL_51;
        v33 = (unsigned __int64)v37;
      }
      if ( !v33 )
      {
LABEL_51:
        v34 = v32;
        v14 = v33;
        goto LABEL_46;
      }
      v25 = 0;
LABEL_32:
      v27 = v26[2];
      v28 = v26[1];
      if ( v26[3] < (unsigned __int64)(v27 + 1) )
      {
        v47 = v26;
        v29 = qvector_reserve();
        v26 = v47;
        v28 = v29;
        v47[1] = v29;
        v27 = v47[2];
      }
      *(_DWORD *)(v28 + 4 * v27) = v43;
      ++v26[2];
      if ( v25 )
      {
        if ( v44 == (unsigned int *)(v4 - 4) )
        {
          v57 = v3;
          *(_QWORD *)&v58 = v45;
          *((_QWORD *)&v58 + 1) = v49;
          v59 = v48;
          *(_QWORD *)&v60 = v44;
          v61 = v4;
          sub_1BA8A0(v57.m128i_i64, &v50);
          v3 = v57;
          v49 = *((unsigned int **)&v58 + 1);
          v45 = (unsigned int *)v58;
          v48 = v59;
          v44 = (unsigned int *)v60;
          v4 = v61;
          break;
        }
        *v44 = v13;
        ++v11;
        ++v44;
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
    v6 = (__int64)v52;
LABEL_37:
    if ( v6 )
    {
      *(_QWORD *)&v53 = 0;
      qfree();
    }
  }
  while ( v45 != v44 );
LABEL_40:
  if ( v3.m128i_i64[0] )
  {
    v30 = *((void ***)&v48 + 1);
    if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(*((_QWORD *)&v4 + 1) + 8LL) )
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
