__int64 __fastcall sub_4EF4F0(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  char **v4; // r13
  char **v5; // r13
  char **exception; // r13
  __int64 v7; // rbx
  unsigned int v10; // eax
  __m128i v11; // xmm0
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // r12d
  _DWORD *v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // rbp
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // eax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int v35; // ebp
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r9d
  size_t v39; // rsi
  _DWORD *v40; // rax
  __int64 v41; // rcx
  int v42; // r9d
  unsigned int v43; // r11d
  __int64 v44; // r12
  unsigned int i; // r15d
  _DWORD *v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // ebp
  unsigned int v49; // eax
  __int64 v50; // r8
  unsigned int v51; // edi
  __int64 v52; // r9
  unsigned int v53; // r10d
  __int64 v54; // rdi
  _QWORD *v55; // r13
  __int64 v56; // rax
  __int64 v57; // rsi
  int *v58; // rax
  int *v59; // rsi
  int v60; // edi
  __int64 v61; // r14
  _QWORD *v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rsi
  int v66; // eax
  __int64 *v67; // rsi
  unsigned int v68; // r10d
  size_t v69; // rsi
  _DWORD *v70; // rax
  __int64 v71; // rsi
  int v72; // r10d
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rdx
  size_t v76; // rbp
  _QWORD *v77; // rax
  __m128i v78; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v79; // [rsp+10h] [rbp-88h]
  __int64 v80; // [rsp+18h] [rbp-80h]
  unsigned int v81; // [rsp+24h] [rbp-74h]
  __int64 v82; // [rsp+28h] [rbp-70h]
  unsigned int v83; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v84[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = 0;
  v81 = a3;
  if ( a2[1] != a1 )
    return v7;
  v7 = sub_186B270(0x98u);
  *(_QWORD *)v7 = &off_1C4FE88;
  v10 = v81;
  *(_QWORD *)(v7 + 8) = 0;
  if ( v10 )
  {
    v76 = 4LL * v81 + 8;
    v77 = (_QWORD *)sub_186B270(v76);
    *v77 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v81), 224).m128i_u64[0];
    *(_QWORD *)(v7 + 8) = v77 + 1;
    memset(v77 + 1, 0, v76 - 8);
  }
  *(_QWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  v82 = v7 + 40;
  v78 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v7 + 40), (__m128i)(unsigned __int64)(v7 + 40));
  sub_180C0A0(v7 + 56);
  v11 = _mm_load_si128(&v78);
  v79 = (_QWORD *)(v7 + 112);
  *(_QWORD *)(v7 + 128) = 0;
  *(_QWORD *)(v7 + 136) = off_1C4F498;
  *(_QWORD *)(v7 + 144) = v7 + 96;
  *(__m128i *)(v7 + 96) = v11;
  *(_OWORD *)(v7 + 112) = 0;
  v78.m128i_i64[0] = v7 + 96;
  v12 = sub_4EC5D0(a2);
  v13 = v12[15];
  v14 = 0x3FFFFFFFCLL;
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(v13 + 4LL * (unsigned int)(*a4 + 1)) - *(_DWORD *)(v13 + 4LL * (unsigned int)*a4);
  if ( v13 )
    v14 = 4LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  sub_186B510(v7 + 24, *(unsigned int *)(v13 + v14), 0);
  if ( !v81 )
  {
    v19 = *(_DWORD *)(v7 + 24);
    if ( !v19 )
      return v7;
    goto LABEL_11;
  }
  v15 = v12[15];
  v16 = *(_QWORD *)(v7 + 8);
  v17 = 0;
  v18 = 4LL * v81;
  do
  {
    *(_DWORD *)(v16 + v17) = *(_DWORD *)(v15 + 4LL * (unsigned int)a4[v17 / 4]);
    v17 += 4LL;
  }
  while ( v17 != v18 );
  v19 = *(_DWORD *)(v7 + 24);
  if ( v19 )
  {
LABEL_11:
    v20 = 0;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v7 + 112);
      v30 = v29 ? *(_DWORD *)(v29 - 4) : 0;
      v83 = v30;
      sub_4EE3A0(v79, &v83);
      v31 = *(_QWORD **)(v7 + 120);
      if ( v31 )
      {
        v32 = *((unsigned int *)v31 - 1);
        if ( (_DWORD)v32 == *((_DWORD *)v31 - 2) )
        {
          v33 = (unsigned int)(3 * v32 + 1) >> 1;
          v34 = 4 * v33 + 8;
          v35 = v33;
          if ( 4 * (int)v32 + 8 >= (unsigned int)v34 || (unsigned int)v32 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v84, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v84);
            sub_233E40((__int64)v84);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (unsigned int *)sub_186B300(v31 - 1, v34);
          v31 = v36 + 2;
          *v36 = v35;
          v37 = v36[1];
          *(_QWORD *)(v7 + 120) = v31;
          v21 = (_DWORD *)v31 + v37;
        }
        else
        {
          v21 = (_DWORD *)v31 + v32;
        }
      }
      else
      {
        v74 = (_QWORD *)sub_186B270(0x10u);
        *v74 = 2;
        v31 = v74 + 1;
        *(_QWORD *)(v7 + 120) = v74 + 1;
        v21 = v74 + 1;
      }
      *v21 = 1;
      ++*((_DWORD *)v31 - 1);
      sub_4EE3A0((_QWORD *)(v7 + 128), &v83);
      v22 = *(_QWORD **)(v7 + 104);
      v23 = v7 + 136;
      v24 = (_QWORD *)*v22;
      if ( !*v22 )
        break;
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v38 = (3 * v25 + 1) >> 1;
        v39 = 8 * v38 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v39 || v25 >= v38 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v84, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v84);
          sub_233E40((__int64)v84);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v80) = (3 * v25 + 1) >> 1;
        v40 = (_DWORD *)sub_186B300(v24 - 1, v39);
        v41 = (unsigned int)v40[1];
        v42 = v80;
        ++v20;
        *v22 = v40 + 2;
        *v40 = v42;
        *(_QWORD *)&v40[2 * v41 + 2] = v23;
        v40[1] = v41 + 1;
        if ( v20 == v19 )
          goto LABEL_27;
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v28 = &v24[v26];
LABEL_16:
        ++v20;
        *v28 = v23;
        *((_DWORD *)v24 - 1) = v27;
        if ( v20 == v19 )
          goto LABEL_27;
      }
    }
    v75 = (_QWORD *)sub_186B270(0x18u);
    *v75 = 2;
    v27 = 1;
    v24 = v75 + 1;
    *v22 = v24;
    v28 = v24;
    goto LABEL_16;
  }
LABEL_27:
  if ( v81 > 1 )
  {
    v43 = *(_DWORD *)(v7 + 16);
    v44 = 4;
    v80 = 4LL * (v81 - 1);
    while ( v43 )
    {
      for ( i = 0; i < v43; ++i )
      {
        v46 = *(_DWORD **)(v7 + 8);
        v47 = *(_QWORD *)(v7 + 112);
        v48 = i + v46[(unsigned __int64)v44 / 4];
        v49 = i + *v46;
        do
        {
          v50 = v49;
          v51 = v49;
          v49 = *(_DWORD *)(v47 + 4LL * v49);
        }
        while ( v51 != v49 );
        do
        {
          v52 = v48;
          v53 = v48;
          v48 = *(_DWORD *)(v47 + 4LL * v48);
        }
        while ( v53 != v48 );
        if ( v51 != v48 )
        {
          v54 = *(_QWORD *)(v7 + 120);
          if ( *(_DWORD *)(v54 + 4 * v52) >= *(_DWORD *)(v54 + 4 * v50) )
          {
            v48 = v49;
            v49 = v53;
          }
          v55 = *(_QWORD **)(v7 + 104);
          *(_DWORD *)(v47 + 4LL * v48) = v49;
          v56 = 4LL * v49;
          *(_DWORD *)(v54 + v56) += *(_DWORD *)(v54 + 4LL * v48);
          v57 = *(_QWORD *)(v7 + 128);
          v58 = (int *)(v57 + v56);
          v59 = (int *)(v57 + 4LL * v48);
          v60 = *v59;
          *v59 = *v58;
          *v58 = v60;
          v61 = sub_180C100(v55 + 2, 24);
          v62 = (_QWORD *)*v55;
          *(_QWORD *)v61 = off_1C4F500;
          v63 = v78.m128i_i64[0];
          *(_DWORD *)(v61 + 16) = v48;
          *(_QWORD *)(v61 + 8) = v63;
          if ( v62 )
          {
            v64 = *((_DWORD *)v62 - 1);
            if ( v64 == *((_DWORD *)v62 - 2) )
            {
              v68 = (3 * v64 + 1) >> 1;
              v69 = 8 * v68 + 8;
              if ( 8 * v64 + 8 >= (unsigned int)v69 || v64 >= v68 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v84, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v84);
                sub_233E40((__int64)v84);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v79) = (3 * v64 + 1) >> 1;
              v70 = (_DWORD *)sub_186B300(v62 - 1, v69);
              v71 = (unsigned int)v70[1];
              v72 = (int)v79;
              v62 = v70 + 2;
              *v55 = v70 + 2;
              *v70 = v72;
              LODWORD(v70) = v71;
              v67 = &v62[v71];
              v66 = (_DWORD)v70 + 1;
            }
            else
            {
              v65 = v64;
              v66 = v64 + 1;
              v67 = &v62[v65];
            }
          }
          else
          {
            v73 = (_QWORD *)sub_186B270(0x18u);
            v62 = v73 + 1;
            v67 = v62;
            *v73 = 2;
            v66 = 1;
            *v55 = v62;
          }
          *v67 = v61;
          *((_DWORD *)v62 - 1) = v66;
          v43 = *(_DWORD *)(v7 + 16);
        }
      }
      if ( v80 == v44 )
        break;
      v44 += 4;
    }
  }
  return v7;
}

