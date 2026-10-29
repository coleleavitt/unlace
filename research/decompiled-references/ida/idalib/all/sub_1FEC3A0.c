__int64 __fastcall sub_1FEC3A0(__int64 a1, __int64 a2, int a3, unsigned int a4, __int16 *a5, __int64 a6)
{
  __int64 v6; // r15
  __int16 *v7; // rbx
  __int16 *v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  char *v13; // rdi
  __int64 v14; // rax
  unsigned __int8 v15; // al
  _QWORD **v16; // rax
  _QWORD **v17; // r14
  char *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbp
  char *v21; // rdx
  char *v22; // r12
  unsigned __int64 v23; // rsi
  size_t v24; // r8
  size_t v25; // rsi
  __int64 v26; // rdi
  _BYTE *v27; // rcx
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rax
  _BYTE *v30; // rdi
  char *v31; // rbp
  __int64 v33; // rsi
  __int64 v34; // rdx
  void **v35; // r13
  const __m128i *v36; // rax
  __m128i *v37; // rcx
  unsigned __int64 v38; // rsi
  __m128i *v39; // rdx
  const __m128i *v40; // rcx
  __int64 v41; // rdx
  int v42; // r12d
  __int16 *v43; // rbp
  void **v44; // rbx
  int v45; // eax
  char *v46; // rbx
  size_t v47; // rsi
  __int64 v48; // rax
  size_t v49; // r8
  size_t v50; // rsi
  __int64 v51; // rdi
  _BYTE *v52; // rcx
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // rax
  _BYTE *v55; // rdi
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rdx
  __int64 v59; // [rsp+10h] [rbp-A8h]
  char v60; // [rsp+1Fh] [rbp-99h]
  char *v62; // [rsp+30h] [rbp-88h]
  unsigned int v63; // [rsp+38h] [rbp-80h]
  int v64; // [rsp+38h] [rbp-80h]
  unsigned __int16 v65; // [rsp+45h] [rbp-73h]
  unsigned __int8 v66; // [rsp+47h] [rbp-71h]
  __int64 v67; // [rsp+48h] [rbp-70h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v69; // [rsp+58h] [rbp-60h]
  _BYTE v70[88]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a1;
  v69 = 0x100000000LL;
  v7 = (__int16 *)((char *)a5 + 3 * a6);
  ptr = v70;
  if ( v7 == a5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v18 = v70;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    v10 = a5;
    do
    {
      v15 = *((_BYTE *)v10 + 2);
      v65 = *v10;
      v66 = v15;
      v16 = sub_1FEBB80(a2, a3, a4, v65 | ((unsigned __int64)v15 << 16));
      v17 = v16;
      if ( !v16[17] )
        sub_1FE94D0((__int64)v16);
      v11 = (unsigned __int64)(v17 + 16);
      v12 = (unsigned int)v69 + 1LL;
      v13 = (char *)ptr + 32 * (unsigned int)v69;
      if ( v12 > HIDWORD(v69) )
      {
        v59 = -1;
        v60 = 0;
        if ( (unsigned __int64)ptr <= v11 && (unsigned __int64)v13 > v11 )
        {
          v60 = 1;
          v59 = (__int64)(v11 - (_QWORD)ptr) >> 5;
        }
        v33 = sub_2237400(&ptr, v70, v12, 32, &v67);
        v62 = (char *)v33;
        v34 = 32LL * (unsigned int)v69;
        v35 = (void **)((char *)ptr + v34);
        if ( ptr != (char *)ptr + v34 )
        {
          v36 = (const __m128i *)((char *)ptr + 16);
          v37 = (__m128i *)v33;
          v38 = v33 + ((v34 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
          v39 = v37;
          do
          {
            v39->m128i_i64[0] = (__int64)v39[1].m128i_i64;
            v40 = (const __m128i *)v36[-1].m128i_i64[0];
            if ( v40 == v36 )
            {
              v39[1] = _mm_loadu_si128(v36);
            }
            else
            {
              v39->m128i_i64[0] = (__int64)v40;
              v39[1].m128i_i64[0] = v36->m128i_i64[0];
            }
            v39 += 2;
            v39[-2].m128i_i64[1] = v36[-1].m128i_i64[1];
            v36[-1].m128i_i64[0] = (__int64)v36;
            v36 += 2;
            v36[-3].m128i_i64[1] = 0;
            v36[-2].m128i_i8[0] = 0;
          }
          while ( v39 != (__m128i *)v38 );
          v41 = 32LL * (unsigned int)v69;
          v35 = (void **)((char *)ptr + v41);
          if ( ptr != (char *)ptr + v41 )
          {
            v63 = a4;
            v42 = a3;
            v43 = v7;
            v44 = (void **)ptr;
            do
            {
              while ( 1 )
              {
                v35 -= 4;
                if ( *v35 == v35 + 2 )
                  break;
                operator delete(*v35);
                if ( v44 == v35 )
                {
                  v7 = v43;
                  v35 = (void **)ptr;
                  a3 = v42;
                  a4 = v63;
                  goto LABEL_36;
                }
              }
            }
            while ( v44 != v35 );
            v7 = v43;
            v35 = (void **)ptr;
            a3 = v42;
            a4 = v63;
          }
        }
LABEL_36:
        v45 = v67;
        if ( v35 != (void **)v70 )
        {
          v64 = v67;
          free(v35);
          v45 = v64;
        }
        HIDWORD(v69) = v45;
        ptr = v62;
        v13 = &v62[32 * (unsigned int)v69];
        if ( v60 )
          v11 = (unsigned __int64)&v62[32 * v59];
      }
      v10 = (__int16 *)((char *)v10 + 3);
      *(_QWORD *)v13 = v13 + 16;
      sub_1FE43F0(v13, *(_BYTE **)v11, *(_QWORD *)v11 + *(_QWORD *)(v11 + 8));
      v14 = (unsigned int)(v69 + 1);
      LODWORD(v69) = v69 + 1;
    }
    while ( v7 != v10 );
    v6 = a1;
    v18 = (char *)ptr;
    v19 = 32 * v14;
    v20 = a1 + 16;
    v21 = (char *)ptr + v19;
    *(_BYTE *)(a1 + 16) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0;
    if ( v21 != v18 )
    {
      v22 = v18;
      v23 = (v19 >> 5) - 1;
      do
      {
        v23 += *((_QWORD *)v22 + 1);
        v22 += 32;
      }
      while ( v22 != v21 );
      sub_995C30(a1, v23);
      v24 = *((_QWORD *)v18 + 1);
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *(_QWORD *)a1;
      v27 = *(_BYTE **)v18;
      v28 = v24 + v25;
      if ( v20 == *(_QWORD *)a1 )
        v29 = 15;
      else
        v29 = *(_QWORD *)(a1 + 16);
      if ( v28 > v29 )
      {
        sub_998B30(a1, v25, 0, v27, v24);
        v26 = *(_QWORD *)a1;
      }
      else if ( v24 )
      {
        v30 = (_BYTE *)(v25 + v26);
        if ( v24 == 1 )
          *v30 = *v27;
        else
          memcpy(v30, *(const void **)v18, *((_QWORD *)v18 + 1));
        v26 = *(_QWORD *)a1;
      }
      v46 = v18 + 32;
      *(_QWORD *)(a1 + 8) = v28;
      *(_BYTE *)(v26 + v28) = 0;
      if ( v46 != v22 )
      {
        v47 = *(_QWORD *)(a1 + 8);
        if ( v47 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_72:
          std::__throw_length_error("basic_string::append");
        while ( 1 )
        {
          v56 = v47 + 1;
          v57 = v20 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
          if ( v56 <= v57 )
            *(_BYTE *)(*(_QWORD *)a1 + v47) = 95;
          else
            sub_998B30(a1, v47, 0, "_", 1u);
          v48 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 8) = v56;
          *(_BYTE *)(v48 + v56) = 0;
          v49 = *((_QWORD *)v46 + 1);
          v50 = *(_QWORD *)(a1 + 8);
          v51 = *(_QWORD *)a1;
          v52 = *(_BYTE **)v46;
          v53 = v49 + v50;
          v54 = v20 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
          if ( v53 > v54 )
          {
            sub_998B30(a1, v50, 0, v52, v49);
            v51 = *(_QWORD *)a1;
          }
          else if ( v49 )
          {
            v55 = (_BYTE *)(v50 + v51);
            if ( v49 == 1 )
              *v55 = *v52;
            else
              memcpy(v55, *(const void **)v46, *((_QWORD *)v46 + 1));
            v51 = *(_QWORD *)a1;
          }
          v46 += 32;
          *(_QWORD *)(a1 + 8) = v53;
          *(_BYTE *)(v51 + v53) = 0;
          if ( v22 == v46 )
            break;
          v47 = *(_QWORD *)(a1 + 8);
          if ( v47 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_72;
        }
      }
      v31 = (char *)ptr;
      v18 = (char *)ptr + 32 * (unsigned int)v69;
      if ( ptr != v18 )
      {
        do
        {
          while ( 1 )
          {
            v18 -= 32;
            if ( *(char **)v18 == v18 + 16 )
              break;
            operator delete(*(void **)v18);
            if ( v18 == v31 )
            {
              v18 = (char *)ptr;
              goto LABEL_21;
            }
          }
        }
        while ( v18 != v31 );
        v18 = (char *)ptr;
      }
    }
  }
LABEL_21:
  if ( v18 != v70 )
    free(v18);
  return v6;
}
