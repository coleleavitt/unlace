void __fastcall sub_BB8720(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char **v4; // r12
  __int64 v5; // rdx
  char **v6; // r12
  __int64 v7; // rdx
  char **v8; // r12
  __int64 v9; // rdx
  char **exception; // rbx
  __int64 v11; // rdx
  char **v12; // r12
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r12d
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 *v25; // rsi
  __int64 *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r13
  _QWORD *v29; // r14
  __int64 v30; // rdi
  int v31; // eax
  __m128i *v32; // rdi
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  _DWORD *v36; // rax
  unsigned __int64 v37; // r15
  __int64 v38; // rcx
  __m128i v39; // xmm1
  unsigned int v40; // eax
  unsigned int v41; // r12d
  size_t v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  _DWORD *v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // r9
  unsigned int v49; // r12d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __m128i *v54; // rax
  unsigned int v55; // r12d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r15d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __m128i *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // edx
  __int64 *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  unsigned int v69; // r9d
  unsigned int v70; // eax
  unsigned int *v71; // rax
  unsigned int v72; // r15d
  unsigned int v73; // eax
  unsigned int *v74; // rax
  __int64 v75; // rax
  int v76; // edx
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  unsigned int ptr; // [rsp+0h] [rbp-88h]
  __m128i v81; // [rsp+18h] [rbp-70h] BYREF
  _DWORD *v82; // [rsp+28h] [rbp-60h]
  __int64 v83[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a2 )
  {
    v14 = *(__int64 **)(a1 + 128);
    *(_BYTE *)(a2 + 3) |= 0x40u;
    if ( v14 )
    {
      v17 = *((unsigned int *)v14 - 1);
      if ( (_DWORD)v17 == *((_DWORD *)v14 - 2) )
      {
        v49 = (unsigned int)(3 * v17 + 1) >> 1;
        v50 = 8 * v49 + 8;
        if ( 8 * (int)v17 + 8 >= (unsigned int)v50 || (unsigned int)v17 >= v49 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v83, "Overflow encountered when expanding vector", v11);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v51 = (unsigned int *)sub_186B300(v14 - 1, v50);
        v52 = v51[1];
        v14 = (__int64 *)(v51 + 2);
        *v51 = v49;
        *(_QWORD *)(a1 + 128) = v51 + 2;
        v18 = v52 + 1;
        *(_QWORD *)&v51[2 * v52 + 2] = a2;
        v51[1] = v52 + 1;
      }
      else
      {
        v18 = v17 + 1;
        v14[v17] = a2;
        *((_DWORD *)v14 - 1) = v17 + 1;
      }
    }
    else
    {
      v78 = (_QWORD *)sub_186B270(0x18u);
      v18 = 1;
      v78[1] = a2;
      v14 = v78 + 1;
      *(_QWORD *)(a1 + 128) = v78 + 1;
      *v78 = 0x100000002LL;
    }
    v19 = 0;
    v20 = nullptr;
    while ( v19 < v18 )
    {
      v21 = v19++;
      v22 = v14[v21];
      if ( *(char *)(v22 + 3) < 0 )
      {
        if ( v20 )
        {
          v53 = *((unsigned int *)v20 - 1);
          if ( (_DWORD)v53 != *((_DWORD *)v20 - 2) )
          {
            v54 = (__m128i *)&v20[3 * v53];
            *v54 = _mm_loadu_si128((const __m128i *)(v22 + 8));
            v54[1].m128i_i64[0] = *(_QWORD *)(v22 + 24);
            ++*((_DWORD *)v20 - 1);
            goto LABEL_9;
          }
          v59 = (unsigned int)(3 * v53 + 1) >> 1;
          v60 = 8 * (v59 + ((3 * (_DWORD)v53 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * (int)v53 + 8 >= (unsigned int)v60 || (unsigned int)v53 >= v59 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v83, "Overflow encountered when expanding vector", v9);
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v83);
            sub_233E40((__int64)v83);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300(v20 - 1, v60);
          v20 = v61 + 2;
          *v61 = v59;
          v14 = *(__int64 **)(a1 + 128);
          v62 = (__m128i *)&v61[6 * v61[1] + 2];
        }
        else
        {
          v77 = (_QWORD *)sub_186B270(0x38u);
          v14 = *(__int64 **)(a1 + 128);
          v20 = v77 + 1;
          *v77 = 2;
          v62 = (__m128i *)(v77 + 1);
        }
        *v62 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        v62[1].m128i_i64[0] = *(_QWORD *)(v22 + 24);
        ++*((_DWORD *)v20 - 1);
        if ( !v14 )
          goto LABEL_14;
      }
      else
      {
        v23 = *(_QWORD *)(v22 + 8);
        if ( (*(_BYTE *)(v23 + 3) & 0x40) != 0 )
        {
          v24 = *(_QWORD *)(v22 + 16);
          if ( (*(_BYTE *)(v24 + 3) & 0x40) != 0 )
            goto LABEL_9;
LABEL_53:
          if ( *((_DWORD *)v14 - 2) == v18 )
          {
            v72 = (3 * v18 + 1) >> 1;
            v73 = 8 * v72 + 8;
            if ( 8 * v18 + 8 >= v73 || v18 >= v72 )
              goto LABEL_67;
            v74 = (unsigned int *)sub_186B300(v14 - 1, v73);
            v14 = (__int64 *)(v74 + 2);
            *v74 = v72;
            v75 = v74[1];
            *(_QWORD *)(a1 + 128) = v14;
            v76 = v75;
            v66 = &v14[v75];
            v65 = v76 + 1;
          }
          else
          {
            v64 = v18;
            v65 = v18 + 1;
            v66 = &v14[v64];
          }
          *v66 = v24;
          *((_DWORD *)v14 - 1) = v65;
          *(_BYTE *)(v24 + 3) |= 0x40u;
          goto LABEL_9;
        }
        if ( *((_DWORD *)v14 - 2) == v18 )
        {
          v69 = (3 * v18 + 1) >> 1;
          v70 = 8 * v69 + 8;
          if ( 8 * v18 + 8 >= v70 || (ptr = (3 * v18 + 1) >> 1, v18 >= v69) )
          {
LABEL_67:
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v83, "Overflow encountered when expanding vector", v5);
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v83);
            sub_233E40((__int64)v83);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v71 = (unsigned int *)sub_186B300(v14 - 1, v70);
          v14 = (__int64 *)(v71 + 2);
          v18 = v71[1];
          *(_QWORD *)(a1 + 128) = v71 + 2;
          *v71 = ptr;
        }
        v63 = v18++;
        v14[v63] = v23;
        v24 = *(_QWORD *)(v22 + 16);
        *((_DWORD *)v14 - 1) = v18;
        *(_BYTE *)(v23 + 3) |= 0x40u;
        if ( (*(_BYTE *)(v24 + 3) & 0x40) == 0 )
          goto LABEL_53;
      }
LABEL_9:
      v18 = *((_DWORD *)v14 - 1);
    }
    v25 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 != v25 )
    {
      v26 = v14;
      do
      {
        v27 = *v26++;
        *(_BYTE *)(v27 + 3) &= ~0x40u;
      }
      while ( v25 != v26 );
    }
    *((_DWORD *)v14 - 1) = 0;
    if ( v20 )
    {
LABEL_14:
      v28 = &v20[3 * *((unsigned int *)v20 - 1)];
      if ( v28 != v20 )
      {
        v29 = v20;
        do
        {
          v33 = *((_DWORD *)v29 + 4);
          if ( v33 != -2 && v33 != dword_1C7ED94 )
          {
            v34 = (_QWORD *)*a4;
            if ( *a4 )
            {
              v35 = *((unsigned int *)v34 - 1);
              if ( (_DWORD)v35 == *((_DWORD *)v34 - 2) )
              {
                v55 = (unsigned int)(3 * v35 + 1) >> 1;
                v56 = 4 * v55 + 8;
                if ( 4 * (int)v35 + 8 >= (unsigned int)v56 || (unsigned int)v35 >= v55 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_154526(v83, "Overflow encountered when expanding vector", v7);
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, v83);
                  sub_233E40((__int64)v83);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v57 = (unsigned int *)sub_186B300(v34 - 1, v56);
                v34 = v57 + 2;
                *v57 = v55;
                v58 = v57[1];
                *a4 = v34;
                v36 = (_DWORD *)v34 + v58;
              }
              else
              {
                v36 = (_DWORD *)v34 + v35;
              }
            }
            else
            {
              v68 = (_QWORD *)sub_186B270(0x10u);
              v34 = v68 + 1;
              *v68 = 2;
              *a4 = v68 + 1;
              v36 = v68 + 1;
            }
            *v36 = *((_DWORD *)v29 + 4);
            ++*((_DWORD *)v34 - 1);
          }
          v37 = *v29;
          if ( *v29 )
          {
            v38 = *a3;
            v39 = _mm_loadl_epi64((const __m128i *)(v29 + 1));
            if ( *a3 )
            {
              v40 = *(_DWORD *)(v38 - 4);
              if ( v40 == *(_DWORD *)(v38 - 8) )
              {
                v41 = (3 * v40 + 1) >> 1;
                v42 = 16 * v41 + 8;
                if ( 16 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
                {
                  v12 = (char **)__cxa_allocate_exception(0x28u);
                  sub_154526(v83, "Overflow encountered when expanding vector", v13);
                  *v12 = (char *)off_1C63128;
                  sub_2333C0(v12 + 1, v83);
                  sub_233E40((__int64)v83);
                  __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v81.m128i_i64[0] = v39.m128i_i64[0];
                v43 = sub_186B270(v42);
                v44 = *a3;
                v39 = _mm_loadl_epi64(&v81);
                v45 = (_DWORD *)v43;
                v38 = v43 + 8;
                if ( *a3 )
                {
                  v46 = *(unsigned int *)(v44 - 4);
                  *(_DWORD *)(v43 + 4) = v46;
                  v47 = 0;
                  v48 = 16 * v46;
                  if ( v48 )
                  {
                    do
                    {
                      *(__m128i *)&v45[v47 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v44 + v47));
                      v47 += 16LL;
                    }
                    while ( v48 != v47 );
                  }
                  v82 = v45;
                  v81.m128i_i64[1] = v38;
                  v81.m128i_i64[0] = v39.m128i_i64[0];
                  sub_186B220((void *)(v44 - 8));
                  v45 = v82;
                  v38 = v81.m128i_i64[1];
                  v39 = _mm_loadl_epi64(&v81);
                  v32 = (__m128i *)(v81.m128i_i64[1] + 16LL * (unsigned int)v82[1]);
                  v31 = v82[1] + 1;
                }
                else
                {
                  *(_DWORD *)(v43 + 4) = 0;
                  v32 = (__m128i *)(v43 + 8);
                  v31 = 1;
                }
                *a3 = v38;
                *v45 = v41;
              }
              else
              {
                v30 = v40;
                v31 = v40 + 1;
                v32 = (__m128i *)(v38 + 16 * v30);
              }
            }
            else
            {
              v81.m128i_i64[0] = v39.m128i_i64[0];
              v67 = (_QWORD *)sub_186B270(0x28u);
              v38 = (__int64)(v67 + 1);
              *v67 = 2;
              v39 = _mm_loadl_epi64(&v81);
              v31 = 1;
              *a3 = v38;
              v32 = (__m128i *)v38;
            }
            *v32 = _mm_unpacklo_epi64((__m128i)v37, v39);
            *(_DWORD *)(v38 - 4) = v31;
          }
          v29 += 3;
        }
        while ( v28 != v29 );
      }
      sub_186B220(v20 - 1);
    }
  }
}

