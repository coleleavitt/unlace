/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x000000000041F750

//----- (000000000041F750) ----------------------------------------------------
__int64 __fastcall ps_pglobal_lookup(
        __int32 *a1,
        const char *a2,
        char *a3,
        __int64 *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  size_t v12; // rax
  __int64 v13; // r12
  size_t v14; // rbp
  int *v15; // r13
  char *v16; // r14
  __int64 v17; // rbp
  const char *v18; // r15
  int *v19; // r12
  const char *v20; // rdi
  int *v21; // rbx
  const char *v22; // rsi
  int v23; // eax
  int *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // r12
  __int64 v30; // rbp
  const char *v32; // rdi
  const char *v33; // rsi
  __int64 v34; // rcx
  unsigned __int64 v35; // rbp
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  size_t v40; // rax
  __int64 v41; // r14
  size_t v42; // r12
  int *v43; // r15
  __int64 v44; // r12
  char *v45; // r14
  char *v46; // rbx
  int *v47; // rbx
  int *v48; // r13
  char *v49; // rdi
  const char *v50; // rsi
  int v51; // eax
  int *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  const char *v55; // rsi
  const char *v56; // rdi
  __int64 v57; // rax
  char *v58; // r13
  const char *v59; // rsi
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // r8
  const char *v63; // rax
  char *v64; // rdx
  int *v65; // r12
  unsigned __int64 v66; // xmm0_8
  __int64 v67; // rdi
  int *v68; // rdi
  const char *v69; // rsi
  unsigned int v70; // eax
  char *s1[2]; // [rsp+0h] [rbp-98h] BYREF
  int *v72; // [rsp+18h] [rbp-80h]
  __int64 *v73; // [rsp+20h] [rbp-78h]
  char *s; // [rsp+28h] [rbp-70h]
  __int32 *v75; // [rsp+30h] [rbp-68h]
  const char *v76; // [rsp+38h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v78; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v79; // [rsp+58h] [rbp-40h]

  v75 = a1;
  v76 = a2;
  s = a3;
  v73 = a4;
  v79 = __readfsqword(0x28u);
  v78 = 0;
  ptr = nullptr;
  if ( a3 )
  {
    v12 = strlen(s);
    v13 = v12 + 1;
    v14 = v12;
    ptr = sub_481540((__int64)&ptr, nullptr, v12 + 1, 1u);
    v78.m128i_i64[0] = v13;
    memmove(ptr, s, v14);
    *((_BYTE *)ptr + v14) = 0;
    v15 = (int *)qword_4C8050;
    v16 = (char *)ptr;
    if ( !qword_4C8050 )
      goto LABEL_16;
  }
  else
  {
    v15 = (int *)qword_4C8050;
    v16 = nullptr;
    if ( !qword_4C8050 )
      goto LABEL_18;
  }
  v17 = v78.m128i_i64[0];
  v18 = ::s1;
  v72 = &dword_4C8048;
  v19 = &dword_4C8048;
  s1[0] = (char *)::s1;
  if ( v78.m128i_i64[0] )
    v18 = v16;
  while ( 1 )
  {
    v25 = *((_QWORD *)v15 + 5);
    if ( !v17 )
      break;
    if ( v25 )
      goto LABEL_15;
    v20 = s1[0];
    v21 = v15;
    v22 = v16;
LABEL_8:
    v23 = strcmp(v20, v22);
    v24 = *((int **)v15 + 2);
    v15 = *((int **)v15 + 3);
    if ( v23 >= 0 )
    {
      v19 = v21;
      v15 = v24;
    }
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v25 )
  {
LABEL_15:
    v20 = *((const char **)v15 + 4);
    v21 = v15;
    v22 = v18;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v26 = *((_QWORD *)v15 + 2);
    if ( !v26 )
      break;
    v19 = v15;
    v15 = *((int **)v15 + 2);
    if ( *(_QWORD *)(v26 + 40) )
      goto LABEL_15;
  }
  v19 = v15;
LABEL_25:
  if ( v19 != v72 )
  {
    if ( !*((_QWORD *)v19 + 5) )
    {
      v32 = v16;
      v33 = ::s1;
      if ( v17 )
        goto LABEL_29;
      if ( !v16 )
      {
LABEL_31:
        v30 = *((_QWORD *)v19 + 7);
        goto LABEL_32;
      }
LABEL_35:
      v78.m128i_i64[0] = 0;
      j__free(v16);
      goto LABEL_31;
    }
    v32 = ::s1;
    v33 = *((const char **)v19 + 4);
    if ( v17 )
      v32 = v16;
LABEL_29:
    if ( strcmp(v32, v33) >= 0 )
    {
      if ( !v16 )
        goto LABEL_31;
      goto LABEL_35;
    }
  }
LABEL_16:
  if ( v16 )
  {
    v78.m128i_i64[0] = 0;
    j__free(v16);
  }
LABEL_18:
  v78.m128i_i64[1] = 0;
  ptr = &off_4C20F0;
  v78.m128i_i32[0] = *v75;
  sub_45A8A0((__int64 (__fastcall ***)(_QWORD, __int64))&ptr);
  v29 = v78.m128i_i64[1];
  if ( !v78.m128i_i64[1] )
    return 2;
  if ( *(_QWORD *)(v78.m128i_i64[1] + 1152) )
    sub_416E40((_QWORD *)v78.m128i_i64[1], v76, (__m128)0LL, a6, a7, a8, v27, v28, a11, a12);
  v30 = sub_413B90(v29, s);
  if ( v30 == -1 )
  {
    if ( *(_QWORD *)(v29 + 1464) == -1 )
      return 5;
    ptr = nullptr;
    v78 = 0;
    if ( !(unsigned __int8)sub_4837D0(s, (__int64)&ptr) )
    {
      if ( ptr )
      {
        v78.m128i_i64[0] = 0;
        j__free(ptr);
      }
LABEL_76:
      if ( *(_QWORD *)(v29 + 1464) != -1 )
        sub_410EA0(
          (int)"*WARNING* Failed to resolve name '%s' in libpthread shared object.\n"
               "          Support for multithread applications will be turned off.\n"
               "          We recommend you to analyze libpthread and provide the\n"
               "          missing symbol info as an environment variable:\n"
               "\n"
               "          export %s=####\n"
               "\n"
               "          where #### is the hexadecimal address of the symbol.\n"
               "          The full list of symbols is in syms_as_envvars.py\n",
          (__int64)s,
          (__int64)s,
          v34,
          v36,
          v37,
          (__m128)0LL,
          a6,
          a7,
          a8,
          v38,
          v39,
          a11,
          a12,
          (char)s1[0]);
      return 5;
    }
    v35 = strtoull((const char *)ptr, nullptr, 16);
    if ( ptr )
    {
      v78.m128i_i64[0] = 0;
      j__free(ptr);
    }
    if ( v35 == -1 )
      goto LABEL_76;
    v30 = *(_QWORD *)(v29 + 1464) + v35;
  }
  ptr = nullptr;
  v78 = 0;
  if ( s )
  {
    v40 = strlen(s);
    v41 = v40 + 1;
    v42 = v40;
    ptr = sub_481540((__int64)&ptr, nullptr, v40 + 1, 1u);
    v78.m128i_i64[0] = v41;
    memmove(ptr, s, v42);
    *((_BYTE *)ptr + v42) = 0;
  }
  v43 = (int *)qword_4C8050;
  if ( !qword_4C8050 )
  {
    v72 = &dword_4C8048;
    v47 = &dword_4C8048;
    goto LABEL_64;
  }
  v44 = v78.m128i_i64[0];
  v45 = (char *)ptr;
  v46 = (char *)::s1;
  s = (char *)::s1;
  if ( v78.m128i_i64[0] )
    v46 = (char *)ptr;
  s1[0] = v46;
  v47 = &dword_4C8048;
  v72 = &dword_4C8048;
  while ( 2 )
  {
    v53 = *((_QWORD *)v43 + 5);
    if ( v44 )
    {
      v48 = v43;
      if ( !v53 )
      {
        v49 = s;
        v50 = v45;
        goto LABEL_50;
      }
LABEL_58:
      v49 = *((char **)v43 + 4);
      v50 = s1[0];
LABEL_50:
      v51 = strcmp(v49, v50);
      v52 = *((int **)v43 + 2);
      v43 = *((int **)v43 + 3);
      if ( v51 >= 0 )
      {
        v47 = v48;
        v43 = v52;
      }
      if ( !v43 )
        goto LABEL_60;
      continue;
    }
    break;
  }
  if ( v53 )
  {
LABEL_57:
    v48 = v43;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v54 = *((_QWORD *)v43 + 2);
    if ( !v54 )
      break;
    v47 = v43;
    v43 = *((int **)v43 + 2);
    if ( *(_QWORD *)(v54 + 40) )
      goto LABEL_57;
  }
  v47 = v43;
LABEL_60:
  if ( v47 == v72 )
    goto LABEL_64;
  if ( *((_QWORD *)v47 + 5) )
  {
    v55 = *((const char **)v47 + 4);
    v56 = ::s1;
    if ( !v44 )
      goto LABEL_63;
    goto LABEL_72;
  }
  v55 = ::s1;
  if ( !v44 )
    goto LABEL_69;
LABEL_72:
  v56 = v45;
LABEL_63:
  if ( strcmp(v56, v55) >= 0 )
  {
LABEL_69:
    *((_QWORD *)v47 + 7) = v30;
    if ( v45 )
    {
      v78.m128i_i64[0] = 0;
      j__free(v45);
    }
    goto LABEL_32;
  }
LABEL_64:
  v57 = operator new(0x40u);
  v58 = (char *)ptr;
  v59 = (const char *)v47;
  v60 = _mm_loadu_si128(&v78);
  *(_QWORD *)(v57 + 56) = 0;
  v47 = (int *)v57;
  *(_QWORD *)(v57 + 32) = v58;
  *(__m128i *)(v57 + 40) = v60;
  ptr = nullptr;
  *(__m128i *)s1 = v60;
  v78 = 0;
  v63 = sub_41F590(&qword_4C8040, v59, v57 + 32, v61, v62);
  v65 = (int *)v63;
  if ( v64 )
  {
    if ( v63 || (v66 = _mm_load_si128((const __m128i *)s1).m128i_u64[0], v72 == (int *)v64) )
    {
      v67 = 1;
    }
    else
    {
      v69 = ::s1;
      if ( *((_QWORD *)v64 + 5) )
        v69 = *((const char **)v64 + 4);
      s1[0] = v64;
      if ( !v66 )
        v58 = (char *)::s1;
      v70 = strcmp(v58, v69);
      v64 = s1[0];
      v67 = v70 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v67, v47, v64, v72);
    ++qword_4C8068;
    v45 = (char *)ptr;
    goto LABEL_69;
  }
  if ( v47 )
  {
    if ( v58 )
    {
      *((_QWORD *)v47 + 5) = 0;
      j__free(v58);
    }
    v68 = v47;
    v47 = v65;
    operator delete(v68, 0x40u);
    v45 = (char *)ptr;
    goto LABEL_69;
  }
  *((_QWORD *)v63 + 7) = v30;
LABEL_32:
  *v73 = v30;
  return 0;
}
// 41F8F9: variable 'v27' is possibly undefined
// 41F8F9: variable 'v28' is possibly undefined
// 41FBC7: variable 'v61' is possibly undefined
// 41FBC7: variable 'v62' is possibly undefined
// 41FBD2: variable 'v64' is possibly undefined
// 41FCA0: variable 'v34' is possibly undefined
// 41FCA0: variable 'v36' is possibly undefined
// 41FCA0: variable 'v37' is possibly undefined
// 41FCA0: variable 'v38' is possibly undefined
// 41FCA0: variable 'v39' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 4C20F0: using guessed type _UNKNOWN *off_4C20F0;
// 4C8040: using guessed type __int64 qword_4C8040;
// 4C8048: using guessed type int dword_4C8048;
// 4C8068: using guessed type __int64 qword_4C8068;
