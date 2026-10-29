__int64 __fastcall sub_59ACE0(__int64 a1, unsigned __int64 **a2, int a3)
{
  char **exception; // r12
  unsigned __int64 *v5; // r13
  unsigned int v6; // r15d
  size_t v7; // r14
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // xmm1_8
  size_t v12; // rdx
  unsigned __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 *v15; // r14
  void *v16; // rdi
  size_t v17; // rdx
  int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned int v21; // edx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rbx
  int v26; // eax
  unsigned int *v27; // rdi
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  unsigned int *v31; // rdi
  __int64 v32; // rax
  int v33; // eax
  unsigned __int64 *v34; // rdi
  unsigned __int64 v35; // rdx
  char *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r8d
  char *v39; // rsi
  __int64 v40; // r8
  char *v41; // rdi
  char *v42; // rbx
  int v43; // edx
  char *v44; // rbp
  unsigned int v45; // r14d
  __int64 v46; // rax
  _BYTE *v47; // rsi
  size_t v48; // rdx
  unsigned int v49; // r14d
  __int64 v50; // r15
  __int64 i; // rbx
  __int64 v52; // rdx
  unsigned __int64 *v53; // r12
  unsigned int v54; // eax
  __int64 v55; // rsi
  int v56; // eax
  _QWORD *v57; // rsi
  __int64 v58; // r14
  __int64 v59; // rbx
  __int64 v60; // r9
  int v62; // edx
  unsigned int v63; // r8d
  size_t v64; // rsi
  unsigned int v65; // r13d
  unsigned int *v66; // rax
  __int64 v67; // rsi
  _QWORD *v68; // rax
  unsigned int v71; // [rsp+18h] [rbp-80h]
  __int64 v72; // [rsp+18h] [rbp-80h]
  __int64 v73; // [rsp+18h] [rbp-80h]
  unsigned int v74; // [rsp+18h] [rbp-80h]
  __int64 v75; // [rsp+30h] [rbp-68h] BYREF
  void *v76; // [rsp+38h] [rbp-60h] BYREF
  __int64 v77[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = *a2;
  if ( *a2 )
  {
    v6 = *((_DWORD *)v5 - 1);
    v7 = 8LL * *((unsigned int *)v5 - 2) + 8;
    v71 = *((_DWORD *)v5 - 2);
    v8 = (unsigned __int64 *)sub_186B270(v7);
    v9 = v8;
    v5 = v8 + 1;
    v10 = *a2;
    v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v71), _mm_cvtsi32_si128(v6)).m128i_u64[0];
    *v8 = v11;
    if ( v10 )
    {
      v12 = 8LL * *((unsigned int *)v10 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v8[1] = *v10;
      }
      else
      {
        memmove(v8 + 1, v10, v12);
      }
    }
    v13 = (unsigned __int64 *)sub_186B270(v7);
    v14 = *((unsigned int *)v9 + 1);
    *v13 = v11;
    v15 = v13;
    v16 = v13 + 1;
    v17 = 8 * v14;
    if ( v17 <= 8 )
    {
      if ( v17 == 8 )
        v13[1] = v9[1];
    }
    else
    {
      v16 = memcpy(v16, v5, v17);
    }
    v76 = v16;
    v18 = sub_5966B0((__int64)&v76, v6);
    sub_186B220(v15);
  }
  else
  {
    v76 = nullptr;
    v18 = sub_5966B0((__int64)&v76, 0);
  }
  v19 = *(unsigned int *)(a1 + 88);
  v20 = *(_QWORD *)(a1 + 80);
  v21 = v19 - 1;
  v19 *= 24;
  v22 = v20 + v19;
  v23 = 24LL * (v18 & v21);
  v24 = v20 + v23;
  if ( v23 != v19 )
  {
    v25 = v20 + v23;
    while ( 1 )
    {
      v26 = *(_DWORD *)(v25 + 4);
      if ( v26 != 2 )
      {
        if ( !v26 )
          goto LABEL_30;
        goto LABEL_11;
      }
      if ( *(_DWORD *)v25 != v18 )
        goto LABEL_11;
      v27 = *(unsigned int **)(v25 + 8);
      if ( v27 )
      {
        v28 = *(v27 - 1);
        if ( v5 )
          goto LABEL_16;
        if ( !(_DWORD)v28 )
          goto LABEL_31;
LABEL_11:
        v25 += 24;
        if ( v22 == v25 )
          break;
      }
      else
      {
        if ( !v5 )
        {
          v5 = (unsigned __int64 *)v25;
          goto LABEL_32;
        }
        v28 = 0;
LABEL_16:
        if ( (_DWORD)v28 != *((_DWORD *)v5 - 1) )
          goto LABEL_11;
        v72 = v24;
        v29 = memcmp(v27, v5, 8 * v28);
        v24 = v72;
        if ( !v29 )
          goto LABEL_31;
        v25 += 24;
        if ( v22 == v25 )
          break;
      }
    }
  }
  while ( v24 != v20 )
  {
    v30 = *(_DWORD *)(v20 + 4);
    if ( v30 != 2 )
    {
      if ( !v30 )
        break;
      goto LABEL_22;
    }
    if ( *(_DWORD *)v20 == v18 )
    {
      v31 = *(unsigned int **)(v20 + 8);
      if ( v31 )
      {
        v32 = *(v31 - 1);
        if ( !v5 )
        {
          if ( !(_DWORD)v32 )
            goto LABEL_29;
          goto LABEL_22;
        }
      }
      else
      {
        if ( !v5 )
        {
          v5 = (unsigned __int64 *)v20;
          goto LABEL_32;
        }
        v32 = 0;
      }
      if ( (_DWORD)v32 == *((_DWORD *)v5 - 1) )
      {
        v73 = v24;
        v33 = memcmp(v31, v5, 8 * v32);
        v24 = v73;
        if ( !v33 )
        {
LABEL_29:
          v25 = v20;
          goto LABEL_31;
        }
      }
    }
LABEL_22:
    v20 += 24;
  }
LABEL_30:
  v25 = 0;
  if ( v5 )
  {
LABEL_31:
    v34 = v5 - 1;
    v5 = (unsigned __int64 *)v25;
    sub_186B220(v34);
  }
LABEL_32:
  v35 = v5[2];
  v36 = *(char **)v35;
  v37 = *(unsigned int *)(v35 + 8);
  v38 = v37 - 1;
  v37 *= 32;
  v39 = &v36[v37];
  v40 = 32LL * (a3 & v38);
  v41 = &v36[v40];
  v42 = &v36[v40];
  if ( v40 == v37 )
  {
LABEL_57:
    while ( v41 != v36 )
    {
      v62 = *((_DWORD *)v36 + 1);
      if ( v62 == 2 )
      {
        if ( a3 == *(_DWORD *)v36 && a3 == *((_DWORD *)v36 + 2) )
        {
          v42 = v36;
          goto LABEL_39;
        }
      }
      else if ( !v62 )
      {
        break;
      }
      v36 += 32;
    }
LABEL_88:
    BUG();
  }
  while ( 1 )
  {
    v43 = *((_DWORD *)v42 + 1);
    if ( v43 != 2 )
    {
      if ( !v43 )
        goto LABEL_88;
      goto LABEL_35;
    }
    if ( a3 == *(_DWORD *)v42 && a3 == *((_DWORD *)v42 + 2) )
      break;
LABEL_35:
    v42 += 32;
    if ( v39 == v42 )
      goto LABEL_57;
  }
LABEL_39:
  v44 = *((char **)v42 + 2);
  if ( v44 )
  {
    v45 = *((_DWORD *)v44 - 1);
    v74 = *((_DWORD *)v44 - 2);
    v46 = sub_186B270(v74 + 8LL);
    v47 = *((_BYTE **)v42 + 2);
    v44 = (char *)(v46 + 8);
    *(_QWORD *)v46 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v74), _mm_cvtsi32_si128(v45)).m128i_u64[0];
    if ( v47 )
    {
      v48 = *((unsigned int *)v47 - 1);
      if ( v48 <= 1 )
      {
        if ( v48 == 1 )
          *(_BYTE *)(v46 + 8) = *v47;
      }
      else
      {
        memmove((void *)(v46 + 8), v47, v48);
      }
    }
  }
  v49 = *((_DWORD *)v42 + 6);
  v75 = 0;
  if ( *a2 )
  {
    v50 = *((unsigned int *)*a2 - 1);
    if ( (_DWORD)v50 )
    {
      for ( i = 0; i != v50; ++i )
      {
        while ( !v44[i] )
        {
          if ( v50 == ++i )
            goto LABEL_52;
        }
        v52 = v75;
        v53 = &(*a2)[i];
        if ( v75 )
        {
          v54 = *(_DWORD *)(v75 - 4);
          if ( v54 == *(_DWORD *)(v75 - 8) )
          {
            v63 = (3 * v54 + 1) >> 1;
            v64 = 8 * v63 + 8;
            v65 = v63;
            if ( 8 * v54 + 8 >= (unsigned int)v64 || v54 >= v63 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v77, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v77);
              sub_233E40((__int64)v77);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v66 = (unsigned int *)sub_186B300((void *)(v75 - 8), v64);
            v67 = v66[1];
            v52 = (__int64)(v66 + 2);
            *v66 = v65;
            v75 = v52;
            LODWORD(v66) = v67;
            v57 = (_QWORD *)(v52 + 8 * v67);
            v56 = (_DWORD)v66 + 1;
          }
          else
          {
            v55 = v54;
            v56 = v54 + 1;
            v57 = (_QWORD *)(v75 + 8 * v55);
          }
        }
        else
        {
          v68 = (_QWORD *)sub_186B270(0x18u);
          v52 = (__int64)(v68 + 1);
          *v68 = 2;
          v56 = 1;
          v75 = v52;
          v57 = (_QWORD *)v52;
        }
        *v57 = *v53;
        *(_DWORD *)(v52 - 4) = v56;
      }
    }
  }
LABEL_52:
  v58 = sub_4C6F80(*(_QWORD *)(a1 + 24), &v75, v49);
  v59 = sub_186B270(0x48u);
  sub_59A080(v59, a1, a2, v44, v58, v60);
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  if ( v44 )
    sub_186B220(v44 - 8);
  return v59;
}

