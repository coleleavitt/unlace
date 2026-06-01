__m128i *__fastcall sub_51C670(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  char **exception; // rbx
  __int64 v9; // rax
  char *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  char *v13; // rsi
  __int64 v14; // rdx
  char *v15; // r8
  char *i; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // rdi
  _QWORD *v21; // r15
  _QWORD *v22; // rax
  __m128i v23; // xmm0
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  size_t v26; // rdx
  bool v27; // zf
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // r14d
  __m128i *v32; // r12
  int v33; // r10d
  __int64 v34; // rcx
  __m128i *v35; // r13
  int v36; // esi
  __int64 v37; // r10
  __m128i *v38; // rdi
  __m128i *result; // rax
  __m128i *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 *v45; // r15
  __int64 *v46; // rsi
  __int64 v47; // r9
  int v48; // r8d
  __int64 *v49; // rdi
  unsigned __int64 v50; // rax
  __int64 *v51; // rax
  unsigned __int64 v52; // r10
  __int64 v53; // r11
  __int64 *v54; // r9
  __int64 v55; // rax
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // rax
  __m128i v58; // xmm0
  unsigned __int64 v59; // r10
  __int64 *v60; // rax
  __int64 v61; // rdi
  __m128i *v62; // rax
  int v63; // r9d
  __m128i *v64; // r8
  const __m128i *v65; // r15
  __m128i *v66; // r11
  __int64 v67; // rax
  __m128i *v68; // rdx
  __m128i *v69; // rax
  _QWORD *v70; // rax
  size_t v71; // [rsp+8h] [rbp-90h]
  int v72; // [rsp+8h] [rbp-90h]
  __int64 *v73; // [rsp+10h] [rbp-88h]
  unsigned __int64 v74; // [rsp+10h] [rbp-88h]
  int v75; // [rsp+10h] [rbp-88h]
  size_t v76; // [rsp+10h] [rbp-88h]
  unsigned __int64 v77; // [rsp+18h] [rbp-80h]
  int v78; // [rsp+18h] [rbp-80h]
  unsigned int v79; // [rsp+24h] [rbp-74h]
  __int64 v80[11]; // [rsp+40h] [rbp-58h] BYREF

  v9 = *(unsigned int *)(a1 + 112);
  v10 = *(char **)(a1 + 104);
  v11 = *(_DWORD *)(a2 + 12);
  v12 = v9 - 1;
  v9 *= 16;
  v13 = &v10[v9];
  v14 = 16LL * (v11 & v12);
  v15 = &v10[v14];
  if ( v14 != v9 )
  {
    for ( i = &v10[v14]; v13 != i; i += 16 )
    {
      v17 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v17 + 12) == v11 && a2 == v17 )
          goto LABEL_27;
      }
      else if ( !v17 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v15 != v10; v10 += 16 )
  {
    v42 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 > 1u )
    {
      if ( *(_DWORD *)(v42 + 12) == v11 && a2 == v42 )
      {
        i = v10;
LABEL_27:
        result = (__m128i *)*((unsigned int *)i + 2);
        *a4 = (unsigned int)result;
        return result;
      }
    }
    else if ( !v42 )
    {
      break;
    }
  }
LABEL_8:
  v18 = *(_QWORD *)(a1 + 48);
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 - 4);
    if ( v19 == *(_DWORD *)(v18 - 8) )
    {
      v79 = (3 * v19 + 1) >> 1;
      v43 = 8 * v79 + 8;
      if ( 8 * v19 + 8 >= v43 || v19 >= (3 * v19 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v80, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v80);
        sub_233E40((__int64)v80);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = sub_186B270(v43);
      v45 = *(__int64 **)(a1 + 48);
      v46 = (__int64 *)v44;
      v18 = v44 + 8;
      if ( v45 )
      {
        v47 = *((unsigned int *)v45 - 1);
        *(_DWORD *)(v44 + 4) = v47;
        v48 = v47;
        v49 = &v45[v47];
        if ( v49 != v45 )
        {
          v50 = 8 * v47 - 8;
          if ( v50 > 8 && (v18 >= (unsigned __int64)(v45 + 2) || v45 >= v46 + 3) )
          {
            v56 = (v50 >> 3) + 1;
            v57 = 0;
            do
            {
              v58 = _mm_loadu_si128((const __m128i *)&v45[v57]);
              *(_OWORD *)&v45[v57] = 0;
              *(__m128i *)&v46[v57 + 1] = v58;
              v57 += 2LL;
            }
            while ( 2 * (v56 >> 1) != v57 );
            if ( (v56 & 1) != 0 )
            {
              v59 = v56 & 0xFFFFFFFFFFFFFFFELL;
              v60 = &v45[v59];
              v61 = *v60;
              *v60 = 0;
              *(_QWORD *)(v18 + 8 * v59) = v61;
            }
          }
          else
          {
            v51 = v45;
            v52 = v18;
            do
            {
              v53 = *v51;
              *v51++ = 0;
              v52 += 8LL;
              *(_QWORD *)(v52 - 8) = v53;
            }
            while ( v49 != v51 );
          }
        }
        v54 = &v45[v47];
        if ( v48 )
        {
          do
          {
            while ( 1 )
            {
              v55 = *v45;
              if ( !*v45 )
                break;
              v77 = v18;
              ++v45;
              v73 = v54;
              sub_186B220((void *)(v55 - 8));
              v54 = v73;
              v18 = v77;
              if ( v45 == v73 )
                goto LABEL_55;
            }
            ++v45;
          }
          while ( v45 != v54 );
LABEL_55:
          v45 = *(__int64 **)(a1 + 48);
        }
        v74 = v18;
        sub_186B220(v45 - 1);
        v18 = v74;
        v20 = *((unsigned int *)v46 + 1);
        v21 = (_QWORD *)(v74 + 8 * v20);
      }
      else
      {
        *(_DWORD *)(v44 + 4) = 0;
        v21 = (_QWORD *)(v44 + 8);
        LODWORD(v20) = 0;
      }
      *(_QWORD *)(a1 + 48) = v18;
      *(_DWORD *)v46 = v79;
    }
    else
    {
      LODWORD(v20) = *(_DWORD *)(v18 - 4);
      v21 = (_QWORD *)(v18 + 8LL * v19);
    }
  }
  else
  {
    v19 = 0;
    v70 = (_QWORD *)sub_186B270(0x18u);
    LODWORD(v20) = 0;
    *v70 = 2;
    v18 = (unsigned __int64)(v70 + 1);
    *(_QWORD *)(a1 + 48) = v70 + 1;
    v21 = v70 + 1;
  }
  v22 = (_QWORD *)*a3;
  *v21 = 0;
  if ( !v22 )
    goto LABEL_16;
  v23 = _mm_loadl_epi64((const __m128i *)(v22 - 1));
  v24 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v23) + 8);
  *v24 = v23.m128i_i64[0];
  *v21 = v24 + 1;
  v25 = (_QWORD *)*a3;
  if ( *a3 )
  {
    v26 = 8LL * *((unsigned int *)v25 - 1);
    v27 = v26 == 8;
    if ( v26 <= 8 )
    {
      v18 = *(_QWORD *)(a1 + 48);
      LODWORD(v20) = *(_DWORD *)(v18 - 4);
      if ( v27 )
        v24[1] = *v25;
      goto LABEL_16;
    }
    memmove(v24 + 1, v25, v26);
  }
  v18 = *(_QWORD *)(a1 + 48);
  LODWORD(v20) = *(_DWORD *)(v18 - 4);
LABEL_16:
  v28 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v18 - 4) = v20 + 1;
  *a4 = v19;
  v29 = sub_4DB200(a3, a2, v19);
  sub_52C6B0(v28, v29);
  v30 = *(_DWORD *)(a1 + 112);
  v31 = *a4;
  if ( 3 * v30 < 4 * (*(_DWORD *)(a1 + 116) + *(_DWORD *)(a1 + 120)) )
  {
    v75 = 2 * v30;
    v71 = 32LL * v30;
    v62 = (__m128i *)sub_186B270(v71);
    v34 = v71;
    v63 = v75;
    v32 = v62;
    v64 = &v62[v71 / 0x10];
    if ( v75 )
    {
      do
      {
        v62->m128i_i64[0] = 0;
        ++v62;
        v62[-1].m128i_i32[2] = 0;
      }
      while ( v64 != v62 );
    }
    v65 = *(const __m128i **)(a1 + 104);
    v33 = v75 - 1;
    v35 = v64;
    v66 = (__m128i *)&v65[*(unsigned int *)(a1 + 112)];
    if ( v65 != v66 )
    {
      do
      {
        if ( v65->m128i_i64[0] > 1uLL )
        {
          v67 = 16LL * (*(_DWORD *)(v65->m128i_i64[0] + 12) & (unsigned int)v33);
          v68 = &v32[(unsigned __int64)v67 / 0x10];
          if ( v71 == v67 )
          {
LABEL_76:
            if ( v32 == v68 )
            {
LABEL_88:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v69 = v32;
            while ( v69->m128i_i64[0] )
            {
              if ( v68 == ++v69 )
                goto LABEL_88;
            }
          }
          else
          {
            v69 = &v32[(unsigned __int64)v67 / 0x10];
            while ( v69->m128i_i64[0] )
            {
              if ( v64 == ++v69 )
                goto LABEL_76;
            }
          }
          *v69 = _mm_loadu_si128(v65);
        }
        ++v65;
      }
      while ( v66 != v65 );
      v66 = *(__m128i **)(a1 + 104);
    }
    if ( v66 )
    {
      v78 = v75;
      v76 = v71;
      v72 = v63 - 1;
      sub_186B220(v66);
      v63 = v78;
      v34 = v76;
      v33 = v72;
    }
    *(_QWORD *)(a1 + 104) = v32;
    *(_DWORD *)(a1 + 112) = v63;
    *(_DWORD *)(a1 + 120) = 0;
  }
  else
  {
    v32 = *(__m128i **)(a1 + 104);
    v33 = v30 - 1;
    v34 = 16LL * v30;
    v35 = (__m128i *)((char *)v32 + v34);
  }
  v36 = *(_DWORD *)(a2 + 12);
  v37 = 16LL * (v36 & (unsigned int)v33);
  v38 = &v32[(unsigned __int64)v37 / 0x10];
  if ( v37 != v34 )
  {
    result = &v32[(unsigned __int64)v37 / 0x10];
    v40 = nullptr;
    while ( 1 )
    {
      v41 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v41 + 12) == v36 && a2 == v41 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i32[2] = v31;
          return result;
        }
      }
      else
      {
        if ( !v41 )
        {
          if ( v40 )
            goto LABEL_86;
          v40 = result;
          goto LABEL_87;
        }
        v40 = result;
      }
      if ( ++result == v35 )
        goto LABEL_39;
    }
  }
  v40 = nullptr;
  while ( 1 )
  {
LABEL_39:
    if ( v38 == v32 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v32->m128i_i64[0];
    if ( v32->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v36 && (__m128i *)a2 == result )
    {
      v32->m128i_i64[0] = a2;
      v32->m128i_i32[2] = v31;
      return result;
    }
LABEL_38:
    ++v32;
  }
  if ( result )
  {
    v40 = v32;
    goto LABEL_38;
  }
  if ( v40 )
LABEL_86:
    --*(_DWORD *)(a1 + 120);
  else
    v40 = v32;
LABEL_87:
  v40->m128i_i64[0] = a2;
  v40->m128i_i32[2] = v31;
  ++*(_DWORD *)(a1 + 116);
  return result;
}

