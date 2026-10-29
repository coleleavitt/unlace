__int64 __fastcall sub_7EDC90(__int64 a1, unsigned int **a2, _DWORD **a3)
{
  char **exception; // rbp
  _DWORD **v4; // r15
  unsigned int **v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r13
  unsigned int v9; // r12d
  unsigned int v10; // eax
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __m128i v17; // xmm0
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rsi
  __int64 v25; // rsi
  __int64 *v26; // r12
  __int64 *v27; // rsi
  __int64 v28; // rdx
  unsigned int v29; // ebp
  __int64 *v30; // r13
  __int64 *v31; // rbx
  unsigned int *v32; // r12
  __int64 v33; // rax
  unsigned int *v34; // rsi
  __int64 result; // rax
  __int64 v36; // rdi
  _QWORD *v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // ebp
  size_t v41; // rdi
  unsigned int *v42; // rax
  __int64 *v43; // r14
  unsigned int *v44; // r13
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 *v47; // r10
  unsigned __int64 v48; // rsi
  __int64 *v49; // r9
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rsi
  __m128i v52; // xmm0
  unsigned __int64 v53; // rsi
  __int64 v54; // r9
  __int64 *v55; // r15
  void *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rax
  _DWORD *v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // ebp
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rsi
  unsigned int v65; // edx
  size_t v66; // rsi
  unsigned int v67; // r14d
  unsigned int *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rdx
  unsigned int v72; // [rsp+8h] [rbp-90h]
  __int64 v73; // [rsp+8h] [rbp-90h]
  __int64 v74; // [rsp+8h] [rbp-90h]
  unsigned int v75; // [rsp+10h] [rbp-88h]
  unsigned int **v76; // [rsp+10h] [rbp-88h]
  __int64 v77; // [rsp+10h] [rbp-88h]
  __int64 v78; // [rsp+10h] [rbp-88h]
  unsigned int v79; // [rsp+18h] [rbp-80h]
  unsigned int v80; // [rsp+1Ch] [rbp-7Ch]
  _DWORD **v82; // [rsp+28h] [rbp-70h]
  __int64 v83[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = **a2;
  v8 = (unsigned int)**a3;
  v9 = **a3;
  if ( v7 >= (unsigned int)v8 )
    v9 = **a2;
  v10 = v9 + 1;
  v11 = *(_QWORD *)(a1 + 2344);
  v72 = v10;
  if ( v11 )
  {
    v75 = *(_DWORD *)(v11 - 4);
    if ( v75 >= v10 )
      goto LABEL_5;
  }
  else
  {
    if ( !v10 )
      goto LABEL_5;
    v75 = 0;
    v37 = (_QWORD *)sub_186B270(0x18u);
    v11 = (unsigned __int64)(v37 + 1);
    *v37 = 2;
    *(_QWORD *)(a1 + 2344) = v37 + 1;
  }
  v79 = v7;
  v80 = v8;
  v82 = v4;
  while ( 1 )
  {
    v38 = *(_DWORD *)(v11 - 8);
    v39 = v72;
    if ( v38 >= v72 )
      break;
    while ( 1 )
    {
      v40 = (3 * v38 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v38 + 8 >= (unsigned int)v41 || v38 >= v40 )
        goto LABEL_59;
      v42 = (unsigned int *)sub_186B270(v41);
      v43 = *(__int64 **)(v6 + 2344);
      v44 = v42;
      v11 = (unsigned __int64)(v42 + 2);
      if ( !v43 )
        break;
      v45 = *((unsigned int *)v43 - 1);
      v46 = 8 * v45;
      v42[1] = v45;
      v47 = &v43[v45];
      if ( v43 != v47 )
      {
        v48 = v46 - 8;
        v49 = v43;
        if ( (unsigned __int64)(v46 - 8) <= 8 || v11 < (unsigned __int64)(v43 + 2) && v43 < (__int64 *)v42 + 3 )
        {
          v59 = v42 + 2;
          do
          {
            v60 = *v49;
            *v49++ = 0;
            v59 += 2;
            *((_QWORD *)v59 - 1) = v60;
          }
          while ( v47 != v49 );
        }
        else
        {
          v50 = 0;
          v51 = (v48 >> 3) + 1;
          do
          {
            v52 = _mm_loadu_si128((const __m128i *)&v43[v50 / 2]);
            *(_OWORD *)&v43[v50 / 2] = 0;
            *(__m128i *)&v42[v50 + 2] = v52;
            v50 += 4LL;
          }
          while ( 4 * (v51 >> 1) != v50 );
          if ( (v51 & 1) != 0 )
          {
            v53 = 2 * (v51 & 0xFFFFFFFFFFFFFFFELL);
            v54 = v43[v53 / 2];
            v43[v53 / 2] = 0;
            *(_QWORD *)&v42[v53 + 2] = v54;
          }
        }
      }
      v55 = &v43[v45];
      if ( (_DWORD)v45 )
      {
        do
        {
          while ( *v43 )
          {
            v56 = (void *)(*v43++ - 8);
            sub_186B220(v56);
            if ( v43 == v55 )
              goto LABEL_39;
          }
          ++v43;
        }
        while ( v43 != v55 );
LABEL_39:
        v43 = *(__int64 **)(v6 + 2344);
      }
      sub_186B220(v43 - 1);
      *v44 = v40;
      v39 = v72;
      v38 = *(_DWORD *)(v11 - 8);
      *(_QWORD *)(v6 + 2344) = v11;
      if ( v38 >= v72 )
        goto LABEL_41;
    }
    v42[1] = 0;
    *(_QWORD *)(v6 + 2344) = v11;
    *v42 = v40;
  }
LABEL_41:
  v7 = v79;
  *(_DWORD *)(v11 - 4) = v39;
  v57 = 8LL * v39;
  v8 = v80;
  v5 = a2;
  v58 = 8LL * v75;
  v4 = v82;
  if ( v58 != v57 )
    memset((void *)(v11 + v58), 0, v57 - v58);
LABEL_5:
  sub_7ECCF0(v6, v7);
  sub_7ECCF0(v6, v8);
  v12 = *(_QWORD *)(v6 + 2344);
  v13 = 8 * v8;
  v14 = *(_QWORD *)(v12 + 8 * v8);
  if ( v14 && *(_DWORD *)(v14 - 4) )
  {
    v15 = *(_QWORD *)(v6 + 8);
    v16 = *(_QWORD *)(v12 + 8LL * v7);
    v73 = 8LL * v7;
    if ( v16 )
      v17 = _mm_cvtsi32_si128(*(_DWORD *)(v16 - 4));
    else
      v17 = 0;
    v18 = (_QWORD *)sub_180C100(v15 + 2144, 24);
    v19 = *(_QWORD **)(v15 + 2128);
    v13 = 8 * v8;
    v20 = v18;
    *v18 = off_1C54AE8;
    v18[1] = v6 + 2344;
    v18[2] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v17).m128i_u64[0];
    if ( v19 )
    {
      v21 = *((_DWORD *)v19 - 1);
      if ( v21 == *((_DWORD *)v19 - 2) )
      {
        v61 = (3 * v21 + 1) >> 1;
        v62 = 8 * v61 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v62 || v21 >= v61 )
        {
LABEL_59:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v83, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v77 = v13;
        v63 = (unsigned int *)sub_186B300(v19 - 1, v62);
        v13 = v77;
        v64 = v63[1];
        v19 = v63 + 2;
        *(_QWORD *)(v15 + 2128) = v63 + 2;
        *v63 = v61;
        LODWORD(v63) = v64;
        v24 = &v19[v64];
        v23 = (_DWORD)v63 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v19[v22];
      }
    }
    else
    {
      v78 = v13;
      v70 = (_QWORD *)sub_186B270(0x18u);
      v13 = v78;
      v71 = v70;
      *v70 = 2;
      v23 = 1;
      v19 = v71 + 1;
      *(_QWORD *)(v15 + 2128) = v19;
      v24 = v19;
    }
    *v24 = v20;
    v25 = *(_QWORD *)(v6 + 2344);
    *((_DWORD *)v19 - 1) = v23;
    v26 = (__int64 *)(v25 + v73);
    v27 = (__int64 *)(v13 + v25);
    v28 = *v27;
    if ( *v27 )
    {
      v76 = v5;
      v29 = 0;
      v30 = v27;
      v74 = v6;
      v31 = v26;
      while ( v29 < *(_DWORD *)(v28 - 4) )
      {
        v13 = *v31;
        v32 = (unsigned int *)(v28 + 4LL * v29);
        if ( *v31 )
        {
          v33 = *(unsigned int *)(v13 - 4);
          v34 = (unsigned int *)(v13 + 4 * v33);
          if ( (_DWORD)v33 == *(_DWORD *)(v13 - 8) )
          {
            v65 = (unsigned int)(3 * v33 + 1) >> 1;
            v66 = 4 * v65 + 8;
            v67 = v65;
            if ( 4 * (int)v33 + 8 >= (unsigned int)v66 || (unsigned int)v33 >= v65 )
              goto LABEL_59;
            v68 = (unsigned int *)sub_186B300((void *)(v13 - 8), v66);
            v13 = (__int64)(v68 + 2);
            *v31 = (__int64)(v68 + 2);
            v28 = *v30;
            *v68 = v67;
            v34 = &v68[v68[1] + 2];
          }
        }
        else
        {
          v69 = (_QWORD *)sub_186B270(0x10u);
          v13 = (__int64)(v69 + 1);
          *v69 = 2;
          v34 = (unsigned int *)(v69 + 1);
          *v31 = (__int64)(v69 + 1);
          v28 = *v30;
        }
        ++v29;
        *v34 = *v32;
        ++*(_DWORD *)(v13 - 4);
        if ( !v28 )
          break;
      }
      v6 = v74;
      v5 = v76;
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int **, _DWORD **, __int64))(**(_QWORD **)(v6 + 2296) + 56LL))(
             *(_QWORD *)(v6 + 2296),
             v5,
             v4,
             v13);
  v36 = *(_QWORD *)(v6 + 2304);
  if ( v36 )
    return (*(__int64 (__fastcall **)(__int64, unsigned int **, _DWORD **))(*(_QWORD *)v36 + 56LL))(v36, v5, v4);
  return result;
}

