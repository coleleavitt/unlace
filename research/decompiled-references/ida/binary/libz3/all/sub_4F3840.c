__int64 __fastcall sub_4F3840(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char **v5; // r12
  char **v6; // r12
  char **exception; // r12
  __int64 v8; // rbx
  const __m128i *v12; // rax
  const __m128i *v13; // r14
  _QWORD *v14; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // r15
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  size_t v23; // rsi
  unsigned int *v24; // rax
  _QWORD *v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  size_t v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // r15d
  int v37; // ebp
  unsigned int *v38; // rax
  __int64 v39; // r8
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 *v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // eax
  _QWORD *v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // ecx
  size_t v50; // rsi
  unsigned int *v51; // rax
  unsigned int v52; // r9d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdi
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // r13
  __int64 v62; // rbp
  __int64 v63; // r15
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  unsigned int v66; // [rsp+0h] [rbp-C8h]
  unsigned int v67; // [rsp+0h] [rbp-C8h]
  unsigned int v69; // [rsp+8h] [rbp-C0h]
  _QWORD *v70; // [rsp+8h] [rbp-C0h]
  _QWORD *v71; // [rsp+8h] [rbp-C0h]
  unsigned int v72; // [rsp+1Ch] [rbp-ACh]
  __int64 v73; // [rsp+20h] [rbp-A8h]
  int *v74; // [rsp+28h] [rbp-A0h]
  __int64 v75; // [rsp+30h] [rbp-98h]
  unsigned int v76; // [rsp+5Ch] [rbp-6Ch] BYREF
  __int64 v77; // [rsp+60h] [rbp-68h] BYREF
  __int64 v78; // [rsp+68h] [rbp-60h]
  __int64 v79; // [rsp+70h] [rbp-58h] BYREF
  __int64 v80; // [rsp+78h] [rbp-50h]

  v8 = 0;
  if ( a1 != a2[1] )
    return v8;
  v8 = sub_186B270(0x168u);
  v73 = sub_4D6490(*(_QWORD *)(a1 + 24));
  v12 = (const __m128i *)sub_4EC5D0(a2);
  *(_QWORD *)(v8 + 8) = 0;
  v13 = v12;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)v8 = qword_1C66740;
  if ( !a4 )
  {
    v25 = (_QWORD *)(v8 + 8);
    if ( (const __m128i *)(v8 + 8) == &v12[1] )
      goto LABEL_20;
    v27 = v12[1].m128i_i64[0];
    if ( !v27 )
      goto LABEL_20;
    goto LABEL_15;
  }
  v14 = (_QWORD *)sub_186B270(0x10u);
  *v14 = 2;
  v15 = (unsigned int *)(v14 + 1);
  *(_QWORD *)(v8 + 16) = v15;
  v16 = a5;
  v17 = v15;
  while ( 1 )
  {
    v18 = *v16++;
    *v15 = v18;
    v19 = *(v17 - 1);
    v20 = (unsigned int)(v19 + 1);
    *(v17 - 1) = v20;
    if ( &a5[a4] == v16 )
      break;
    v21 = *(v17 - 2);
    if ( v21 == (_DWORD)v20 )
    {
      v22 = (3 * v21 + 1) >> 1;
      v23 = 4 * v22 + 8;
      if ( 4 * v19 + 12 >= (unsigned int)v23 || v21 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v79, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v79);
        sub_233E40((__int64)&v79);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (3 * v21 + 1) >> 1;
      v24 = (unsigned int *)sub_186B300(v17 - 2, v23);
      v17 = v24 + 2;
      *(_QWORD *)(v8 + 16) = v24 + 2;
      *v24 = v66;
      v15 = &v24[v24[1] + 2];
    }
    else
    {
      v15 = &v17[v20];
    }
  }
  v25 = (_QWORD *)(v8 + 8);
  if ( (const __m128i *)(v8 + 8) == &v13[1] )
  {
LABEL_19:
    sub_4EDF60(v25, a4, a5);
    goto LABEL_20;
  }
  v26 = *(_QWORD *)(v8 + 8);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = v13[1].m128i_i64[0];
  if ( !v27 )
  {
    *(_QWORD *)(v8 + 8) = 0;
    goto LABEL_19;
  }
LABEL_15:
  v28 = _mm_cvtsi32_si128(*(_DWORD *)(v27 - 4));
  v29 = *(unsigned int *)(v27 - 8);
  v67 = v29;
  v30 = (_QWORD *)sub_186B270(8 * v29 + 8);
  *(_QWORD *)(v8 + 8) = v30 + 1;
  v31 = (_QWORD *)v13[1].m128i_i64[0];
  *v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v28))).m128i_u64[0];
  if ( v31 )
  {
    v32 = 8LL * *((unsigned int *)v31 - 1);
    if ( v32 <= 8 )
    {
      if ( v32 == 8 )
        v30[1] = *v31;
    }
    else
    {
      memmove(v30 + 1, v31, v32);
    }
  }
  if ( a4 )
    goto LABEL_19;
LABEL_20:
  *(_QWORD *)v8 = &off_1C4FFA8;
  *(_OWORD *)(v8 + 24) = 0;
  v75 = v8 + 24;
  sub_180C0A0(v8 + 40);
  v33 = _mm_unpacklo_epi64(_mm_loadl_epi64(v13 + 2), (__m128i)(unsigned __int64)a3);
  *(_QWORD *)(v8 + 96) = v73;
  *(__m128i *)(v8 + 80) = v33;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 312) = 0;
  *(_QWORD *)(v8 + 112) = v73;
  *(_QWORD *)(v8 + 120) = v8 + 136;
  *(_QWORD *)(v8 + 200) = v8 + 216;
  *(_QWORD *)(v8 + 128) = 0x800000000LL;
  *(_QWORD *)(v8 + 208) = 0x800000000LL;
  *(_QWORD *)(v8 + 320) = 0;
  *(_QWORD *)(v8 + 328) = 0;
  *(_QWORD *)(v8 + 352) = 0;
  v34 = v13[7].m128i_i64[1];
  v74 = (int *)(v8 + 280);
  *(_QWORD *)(v8 + 296) = v75;
  *(_QWORD *)(v8 + 304) = v75;
  *(_QWORD *)(v8 + 344) = v8 + 296;
  v35 = 0x3FFFFFFFCLL;
  *(_QWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 280) = 0;
  *(_QWORD *)(v8 + 288) = 0;
  *(_QWORD *)(v8 + 336) = off_1C4F498;
  if ( v34 )
    v35 = 4LL * (unsigned int)(*(_DWORD *)(v34 - 4) - 1);
  v36 = *(_DWORD *)(v34 + v35);
  sub_4EDDC0((__int64)v13, (_QWORD *)(v8 + 16), 0);
  sub_186B510(v74, v36, 0);
  v37 = 0;
  if ( v36 )
  {
    while ( 1 )
    {
      v45 = *(_QWORD *)(v8 + 312);
      v46 = v45 ? *(_DWORD *)(v45 - 4) : 0;
      v76 = v46;
      sub_4EE3A0((_QWORD *)(v8 + 312), &v76);
      v47 = *(_QWORD **)(v8 + 320);
      if ( v47 )
      {
        v48 = *((unsigned int *)v47 - 1);
        if ( (_DWORD)v48 == *((_DWORD *)v47 - 2) )
        {
          v49 = (unsigned int)(3 * v48 + 1) >> 1;
          v50 = 4 * v49 + 8;
          if ( 4 * (int)v48 + 8 >= (unsigned int)v50 || (unsigned int)v48 >= v49 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v79, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v79);
            sub_233E40((__int64)&v79);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69 = (unsigned int)(3 * v48 + 1) >> 1;
          v51 = (unsigned int *)sub_186B300(v47 - 1, v50);
          v47 = v51 + 2;
          *(_QWORD *)(v8 + 320) = v51 + 2;
          *v51 = v69;
          v38 = &v51[v51[1] + 2];
        }
        else
        {
          v38 = (unsigned int *)v47 + v48;
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x10u);
        v47 = v64 + 1;
        *v64 = 2;
        *(_QWORD *)(v8 + 320) = v64 + 1;
        v38 = (unsigned int *)(v64 + 1);
      }
      *v38 = 1;
      ++*((_DWORD *)v47 - 1);
      sub_4EE3A0((_QWORD *)(v8 + 328), &v76);
      v39 = v8 + 336;
      v40 = **(_QWORD ***)(v8 + 304);
      if ( !v40 )
        break;
      v41 = *((_DWORD *)v40 - 1);
      if ( v41 == *((_DWORD *)v40 - 2) )
      {
        v52 = (3 * v41 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v41 + 8 >= (unsigned int)v53 || v41 >= v52 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v79, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &v79);
          sub_233E40((__int64)&v79);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v72 = (3 * v41 + 1) >> 1;
        v70 = *(_QWORD **)(v8 + 304);
        v54 = (unsigned int *)sub_186B300(v40 - 1, v53);
        ++v37;
        *v70 = v54 + 2;
        v55 = v54[1];
        *v54 = v72;
        *(_QWORD *)&v54[2 * v55 + 2] = v8 + 336;
        v54[1] = v55 + 1;
        if ( v36 == v37 )
          goto LABEL_41;
      }
      else
      {
        v42 = v41;
        v43 = v41 + 1;
        v44 = &v40[v42];
LABEL_30:
        ++v37;
        *v44 = v39;
        *((_DWORD *)v40 - 1) = v43;
        if ( v36 == v37 )
          goto LABEL_41;
      }
    }
    v71 = *(_QWORD **)(v8 + 304);
    v65 = (_QWORD *)sub_186B270(0x18u);
    v40 = v65 + 1;
    v39 = v8 + 336;
    *v65 = 2;
    v43 = 1;
    *v71 = v40;
    v44 = v40;
    goto LABEL_30;
  }
LABEL_41:
  v56 = *(_QWORD *)(v8 + 16);
  if ( v56 && *(_DWORD *)(v56 - 4) )
  {
    v57 = *(_QWORD *)(v8 + 288);
    v58 = 0;
    do
    {
      v59 = v58++;
      *(_DWORD *)(v57 + 4LL * (*(_DWORD *)(v56 + 4 * v59) >> 5)) |= 1 << *(_DWORD *)(v56 + 4 * v59);
    }
    while ( v58 < *(_DWORD *)(v56 - 4) );
  }
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v79 = a3;
  v80 = v73;
  sub_4F35A0((__int64)v13, a3, &v79, (_QWORD *)(v8 + 296), (_QWORD *)(v8 + 352));
  v60 = v79;
  v77 = 0;
  v61 = v80;
  v78 = v73;
  sub_4EF0C0((__int64)v13, v79, &v77, (__int64 *)(v8 + 104));
  v62 = v77;
  v63 = v78;
  sub_4F2620((__int64)v13, v77, v8 + 120, v74);
  sub_4EBFD0(v60, v61);
  sub_4EBFD0(v62, v63);
  return v8;
}

