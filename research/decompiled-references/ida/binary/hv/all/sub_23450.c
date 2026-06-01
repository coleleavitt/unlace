char **__fastcall sub_23450(__int64 a1, void ***a2, __int64 a3, __int64 a4)
{
  void **v6; // r12
  void **v7; // rbp
  const char *v9; // r14
  char *v10; // r12
  int v11; // r9d
  const char *v12; // rsi
  const char *v13; // r8
  char **v14; // rbx
  void ***v16; // r9
  const char *v17; // r14
  __int64 v18; // r12
  const char *v19; // rcx
  int v20; // eax
  bool v21; // zf
  char v22; // al
  __int64 v23; // r9
  void *v24; // rax
  void *v25; // r14
  void *v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // r13
  __m128i v29; // xmm0
  void *v30; // rdi
  unsigned __int64 v31; // r13
  __int64 v32; // rsi
  char *v33; // r13
  size_t v34; // r15
  __int64 v35; // r14
  __int64 v36; // r8
  __int64 v37; // rsi
  const char *v38; // rdi
  const char *v39; // rsi
  void **v40; // rax
  void *v41; // rdi
  void **v42; // rbp
  void **v43; // rdx
  __int64 v44; // r9
  char **v45; // rax
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  const char *v50; // rsi
  const char *v51; // rdi
  int v52; // eax
  _QWORD *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // [rsp+0h] [rbp-90h] BYREF
  int v58[2]; // [rsp+10h] [rbp-80h]
  void *v59; // [rsp+18h] [rbp-78h] BYREF
  char v60[16]; // [rsp+20h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  void *v62[2]; // [rsp+40h] [rbp-50h]
  int v63[2]; // [rsp+50h] [rbp-40h]

  v6 = a2[1];
  v7 = *a2;
  *(_QWORD *)v63 = __readfsqword(0x28u);
  *(_OWORD *)v60 = 0;
  v59 = nullptr;
  if ( !v6 )
  {
LABEL_2:
    v9 = "continuations";
    v10 = "incomplete";
LABEL_3:
    sub_22CC0((__int64)&v59, a3, a4, nullptr, 0);
    if ( *(_QWORD *)(a1 + 8) <= 1u )
    {
      v12 = haystack;
      if ( v7[1] )
        v12 = (const char *)*v7;
    }
    else
    {
      v12 = *(const char **)a1;
    }
    v13 = haystack;
    if ( *(_QWORD *)v60 )
      LODWORD(v13) = (_DWORD)v59;
    sub_708D0(
      (unsigned int)"%s: %s command, possible %s:\n%s\n",
      (_DWORD)v12,
      (_DWORD)v10,
      (_DWORD)v9,
      (_DWORD)v13,
      v11);
LABEL_8:
    v14 = nullptr;
    goto LABEL_9;
  }
  v16 = a2;
  if ( v7[1] )
  {
    v17 = (const char *)*v7;
    if ( *(_BYTE *)*v7 == 63 && !v17[1]
      || (v51 = (const char *)*v7, v57.m128i_i64[0] = (__int64)a2, v52 = strcmp(v51, "help"), v16 = a2, !v52) )
    {
      if ( v6 != (void **)((char *)&dword_0 + 1) )
      {
        v57.m128i_i64[0] = (__int64)&v59;
        if ( (unsigned __int8)sub_22CC0((__int64)&v59, a3, a4, v16, 1u) )
        {
          v50 = haystack;
          if ( *(_QWORD *)v60 )
            LODWORD(v50) = (_DWORD)v59;
          sub_708D0((unsigned int)"%s\n", (_DWORD)v50, v46, v47, v48, v49);
          goto LABEL_8;
        }
      }
      goto LABEL_2;
    }
  }
  else
  {
    v17 = haystack;
  }
  v18 = a3;
  *(_QWORD *)v58 = a3 + 32 * a4;
  if ( a3 == *(_QWORD *)v58 )
  {
LABEL_49:
    v9 = "ones";
    v10 = "unknown";
    goto LABEL_3;
  }
  while ( 1 )
  {
    v19 = *(const char **)v18;
    v57.m128i_i64[1] = (__int64)v16;
    v57.m128i_i64[0] = (__int64)v19;
    v20 = strcmp(v17, v19);
    v16 = (void ***)v57.m128i_i64[1];
    v21 = v20 == 0;
    v22 = *(_BYTE *)v57.m128i_i64[0];
    if ( v21 )
      break;
    if ( !v22 )
      goto LABEL_17;
    v18 += 32;
    if ( *(_QWORD *)v58 == v18 )
      goto LABEL_49;
  }
  if ( v22 )
    goto LABEL_21;
LABEL_17:
  ptr = nullptr;
  *(_OWORD *)v62 = 0;
  ptr = (void *)sub_96080(&ptr, 0, 1, 1);
  v23 = v57.m128i_i64[1];
  v62[0] = &dword_0 + 1;
  *(_BYTE *)ptr = 0;
  v24 = v62[0];
  v25 = ptr;
  v26 = v62[1];
  *(_OWORD *)v62 = 0;
  v57.m128i_i64[0] = (__int64)v24;
  v27 = *(_QWORD *)(v23 + 8);
  ptr = nullptr;
  v28 = *(_QWORD **)v23;
  if ( *(_QWORD *)(v23 + 16) < (unsigned __int64)(v27 + 1) )
  {
    v53 = *(_QWORD **)v23;
    v57.m128i_i64[1] = v23;
    v54 = sub_96080(v23, v53, v27 + 1, 24);
    v23 = v57.m128i_i64[1];
    v28 = (_QWORD *)v54;
    *(_QWORD *)v57.m128i_i64[1] = v54;
    v27 = *(_QWORD *)(v23 + 8);
  }
  v57.m128i_i64[1] = v23;
  memmove(v28 + 3, v28, 24 * v27);
  v29 = _mm_loadl_epi64(&v57);
  *v28 = v25;
  v16 = (void ***)v57.m128i_i64[1];
  v30 = ptr;
  *(__m128i *)(v28 + 1) = _mm_unpacklo_epi64(v29, (__m128i)(unsigned __int64)v26);
  v16[1] = (void **)((char *)v16[1] + 1);
  if ( v30 )
  {
    v57.m128i_i64[0] = (__int64)v16;
    v62[0] = nullptr;
    j__free(v30);
    v16 = (void ***)v57.m128i_i64[0];
  }
LABEL_21:
  if ( *(_QWORD *)(v18 + 16) )
  {
    v31 = *(_QWORD *)(a1 + 8);
    if ( v31 > 1 )
    {
      v32 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v31 + 1 )
      {
        v57.m128i_i64[0] = (__int64)v16;
        v55 = sub_96080(a1, v32, v31 + 1, 1);
        *(_QWORD *)a1 = v55;
        v16 = (void ***)v57.m128i_i64[0];
        v32 = v55;
      }
      *(_QWORD *)(a1 + 8) = v31 + 1;
      *(_BYTE *)(v32 + v31 - 1) = 32;
      *(_BYTE *)(*(_QWORD *)a1 + v31) = 0;
    }
    v33 = (char *)v7[1];
    if ( v33 )
    {
      v34 = (size_t)(v33 - 1);
      if ( v33 != (_BYTE *)&dword_0 + 1 )
      {
        v35 = *(_QWORD *)(a1 + 8);
        v36 = (__int64)(v33 - 1);
        if ( v35 )
        {
          --v35;
          v36 = v34 + v35;
          v33 += v35;
        }
        v37 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v33 )
        {
          v57.m128i_i64[1] = (__int64)v16;
          v57.m128i_i64[0] = v36;
          v56 = sub_96080(a1, v37, v33, 1);
          v16 = (void ***)v57.m128i_i64[1];
          v36 = v57.m128i_i64[0];
          *(_QWORD *)a1 = v56;
          v37 = v56;
        }
        *(_QWORD *)(a1 + 8) = v33;
        *(_BYTE *)(v37 + v36) = 0;
        v38 = *(const char **)a1;
        v39 = (const char *)*v7;
        v57.m128i_i64[0] = (__int64)v16;
        memcpy((void *)&v38[v35], v39, v34);
        v16 = (void ***)v57.m128i_i64[0];
      }
    }
    v40 = *v16;
    v41 = **v16;
    v42 = *v16;
    if ( v41 )
    {
      v40[1] = nullptr;
      v57.m128i_i64[0] = (__int64)v16;
      j__free(v41);
      v16 = (void ***)v57.m128i_i64[0];
      v40 = *(void ***)v57.m128i_i64[0];
    }
    v43 = v16[1];
    v57.m128i_i64[0] = (__int64)v16;
    memmove(v42, v42 + 3, (char *)&v40[3 * (_QWORD)v43] - (char *)v42 - 24);
    v44 = v57.m128i_i64[0];
    --*(_QWORD *)(v57.m128i_i64[0] + 8);
    v45 = (char **)sub_23450(a1, v44, *(_QWORD *)(v18 + 16), *(_QWORD *)(v18 + 24));
  }
  else
  {
    v45 = sub_18170(*(_DWORD *)(v18 + 8));
  }
  v14 = v45;
LABEL_9:
  if ( v59 )
  {
    *(_QWORD *)v60 = 0;
    j__free(v59);
  }
  return v14;
}

