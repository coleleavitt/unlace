unsigned __int64 __fastcall sub_510680(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  char *v9; // rsi
  __m128 v10; // xmm0
  const char *v11; // rsi
  unsigned __int64 v12; // rbx
  size_t v13; // r14
  __int64 v14; // r12
  size_t v15; // r15
  char *v16; // rsi
  char *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  size_t v24; // rax
  size_t v25; // r14
  __int64 v26; // rax
  char *v27; // r15
  volatile signed __int32 *v28; // r14
  __int64 v29; // rax
  int v30; // eax
  size_t v31; // rax
  size_t v32; // r14
  size_t v33; // r15
  __m128 v34; // xmm0
  const char *v35; // rsi
  _WORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  size_t v39; // r8
  unsigned __int64 v40; // r14
  __int64 v41; // r15
  size_t v42; // r9
  char *v43; // rsi
  const char *v44; // rsi
  int v45; // eax
  __int64 v46; // r9
  __m128 v47; // xmm4
  __m128 v48; // xmm5
  const char *v49; // rdx
  char *v50; // r8
  __int64 v51; // rdi
  __int64 v52; // rdi
  char *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __m128 v58; // xmm4
  __m128 v59; // xmm5
  int v60; // edx
  int v61; // eax
  int v62; // edx
  char v63; // [rsp+0h] [rbp-4160h]
  size_t v64; // [rsp+8h] [rbp-4158h]
  size_t v65; // [rsp+10h] [rbp-4150h]
  char *v66; // [rsp+18h] [rbp-4148h]
  char *s; // [rsp+20h] [rbp-4140h] BYREF
  __int128 v68; // [rsp+28h] [rbp-4138h]
  char *v69; // [rsp+40h] [rbp-4120h] BYREF
  __int128 v70; // [rsp+48h] [rbp-4118h]
  void *v71; // [rsp+60h] [rbp-4100h] BYREF
  __int128 v72; // [rsp+68h] [rbp-40F8h]
  void *src; // [rsp+80h] [rbp-40E0h] BYREF
  __int128 v74; // [rsp+88h] [rbp-40D8h]
  __int64 v75; // [rsp+98h] [rbp-40C8h]
  __int64 v76; // [rsp+A0h] [rbp-40C0h]
  __int64 v77; // [rsp+A8h] [rbp-40B8h]
  __int16 v78; // [rsp+B0h] [rbp-40B0h]
  __int128 v79; // [rsp+B8h] [rbp-40A8h]
  __int128 v80; // [rsp+C8h] [rbp-4098h]
  _BYTE v81[8232]; // [rsp+E0h] [rbp-4080h] BYREF
  __int64 v82; // [rsp+2108h] [rbp-2058h]
  int v83; // [rsp+2114h] [rbp-204Ch]
  unsigned __int64 v84; // [rsp+4128h] [rbp-38h]

  v84 = __readfsqword(0x28u);
  byte_8C2ED0 = qgetenv("IDA_NOEH", 0) ^ 1;
  if ( !byte_8C2ED0 )
    return v84 - __readfsqword(0x28u);
  s = nullptr;
  v68 = 0;
  if ( !(unsigned __int8)qgetenv("TMPDIR", &s) )
  {
    v9 = s;
    if ( *((_QWORD *)&v68 + 1) <= 4u )
    {
      s = (char *)qvector_reserve(&s, s, 5, 1);
      v9 = s;
    }
    *(_QWORD *)&v68 = 5;
    *(_DWORD *)v9 = 1886221359;
    s[4] = 0;
  }
  v10 = 0;
  v11 = nullptr;
  v74 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 5, 1);
  *(_QWORD *)&v74 = 5;
  strcpy((char *)src, "/ida");
  v12 = v74;
  if ( (_QWORD)v74 )
  {
    v13 = v74 - 1;
    if ( (_QWORD)v74 != 1 )
    {
      v14 = v68;
      v15 = v74 - 1;
      if ( (_QWORD)v68 )
      {
        v14 = v68 - 1;
        v15 = v13 + v68 - 1;
        v12 = v74 + v68 - 1;
      }
      v16 = s;
      if ( *((_QWORD *)&v68 + 1) < v12 )
      {
        s = (char *)qvector_reserve(&s, s, v12, 1);
        v16 = s;
      }
      *(_QWORD *)&v68 = v12;
      v16[v15] = 0;
      v11 = (const char *)src;
      memcpy(&s[v14], src, v13);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v74 = 0;
    *(double *)v10.m128_u64 = qfree(src, v11);
  }
  v17 = s;
  if ( !(unsigned __int8)qisdir(s) )
  {
    sub_169700(
      (int)"Directory %s does not exist, creating...\n",
      (__int64)v17,
      v18,
      v19,
      v20,
      v21,
      v10,
      a2,
      a3,
      a4,
      v22,
      v23,
      a7,
      a8,
      v63);
    if ( (unsigned int)qmkdir(v17, 511) )
    {
      v54 = qerrstr(0xFFFFFFFFLL);
      v44 = v17;
      sub_169700((int)"%s: %s\n", (__int64)v17, v54, v55, v56, v57, v10, a2, a3, a4, v58, v59, a7, a8, v63);
      v53 = s;
      if ( !s )
        return v84 - __readfsqword(0x28u);
      goto LABEL_44;
    }
  }
  if ( !v17 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v24 = strlen(v17);
  v25 = v24;
  if ( !v24 )
  {
    src = (void *)0xFFFFFFFF00000001LL;
    v28 = &std::string::_Rep::_S_empty_rep_storage[4];
    v66 = (char *)std::string::_Rep::_S_empty_rep_storage;
    v27 = (char *)&std::string::_Rep::_S_empty_rep_storage[6];
    if ( std::string::_Rep::_S_empty_rep_storage[4] >= 0 )
      goto LABEL_24;
LABEL_46:
    v29 = std::string::_Rep::_M_clone(v66, &v71, 0);
    goto LABEL_25;
  }
  v26 = std::string::_Rep::_S_create(v24, 0, &v69);
  v66 = (char *)v26;
  v27 = (char *)(v26 + 24);
  if ( v25 == 1 )
    *(_BYTE *)(v26 + 24) = *v17;
  else
    memcpy((void *)(v26 + 24), v17, v25);
  if ( v66 != (char *)std::string::_Rep::_S_empty_rep_storage )
  {
    *(_QWORD *)v66 = v25;
    *((_DWORD *)v66 + 4) = 0;
    v66[v25 + 24] = 0;
    v28 = (volatile signed __int32 *)(v66 + 16);
    src = (void *)0xFFFFFFFF00000001LL;
    if ( *((int *)v66 + 4) >= 0 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)v66 + 4, 1u);
      else
        ++*((_DWORD *)v66 + 4);
      goto LABEL_24;
    }
    goto LABEL_46;
  }
  src = (void *)0xFFFFFFFF00000001LL;
  v28 = (volatile signed __int32 *)(v66 + 16);
  if ( *((int *)v66 + 4) < 0 )
    goto LABEL_46;
LABEL_24:
  v29 = (__int64)v27;
LABEL_25:
  *(_QWORD *)&v74 = v29;
  *((_QWORD *)&v74 + 1) = &std::string::_Rep::_S_empty_rep_storage[6];
  v75 = 0;
  v76 = -1;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  if ( v66 != (char *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v61 = _InterlockedExchangeAdd(v28, 0xFFFFFFFF);
    }
    else
    {
      v61 = *((_DWORD *)v27 - 2);
      *((_DWORD *)v27 - 2) = v61 - 1;
    }
    if ( v61 <= 0 )
      std::string::_Rep::_M_destroy(v66, &v71);
  }
  v30 = operator new(0xA8u);
  sub_591AD2(v30, (unsigned int)&src, 0, (unsigned int)sub_510600, 0, 1, -1);
  v70 = 0;
  v69 = nullptr;
  v31 = strlen(v17);
  v32 = v31 + 1;
  v33 = v31;
  v69 = (char *)qvector_reserve(&v69, 0, v31 + 1, 1);
  *(_QWORD *)&v70 = v32;
  memmove(v69, v17, v33);
  v34 = 0;
  v35 = nullptr;
  v69[v33] = 0;
  v71 = nullptr;
  v72 = 0;
  v36 = (_WORD *)qvector_reserve(&v71, 0, 7, 1);
  v71 = v36;
  *(_QWORD *)&v72 = 7;
  *(_DWORD *)v36 = 1680747055;
  v36[2] = 28781;
  *((_BYTE *)v71 + 6) = 0;
  v40 = v72;
  if ( (_QWORD)v72 )
  {
    v39 = v72 - 1;
    if ( (_QWORD)v72 != 1 )
    {
      v41 = v70;
      v42 = v72 - 1;
      if ( (_QWORD)v70 )
      {
        v41 = v70 - 1;
        v42 = v39 + v70 - 1;
        v40 = v72 + v70 - 1;
      }
      v43 = v69;
      if ( *((_QWORD *)&v70 + 1) < v40 )
      {
        v64 = v72 - 1;
        v65 = v42;
        v69 = (char *)qvector_reserve(&v69, v69, v40, 1);
        v39 = v64;
        v43 = v69;
        v42 = v65;
      }
      *(_QWORD *)&v70 = v40;
      v43[v42] = 0;
      v35 = (const char *)v71;
      memcpy(&v69[v41], v71, v39);
    }
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    *(double *)v34.m128_u64 = qfree(v71, v35, v37, v38, v39);
  }
  v82 = 0;
  v83 = 0;
  v44 = v81;
  if ( !(unsigned int)qfindfirst(v69, v81, 0) )
  {
    v45 = qfindnext(v81);
    v49 = "s were";
    v50 = "them";
    v44 = (const char *)&unk_5C2F25;
    if ( v45 )
    {
      v49 = " was";
      v50 = "it";
      v44 = "A ";
    }
    sub_169630(
      (int)"It appears that previously IDA crashed:\n"
           "%sminidump file%s found in %s.\n"
           "Please send %s to <support@hex-rays.com>",
      (__int64)v44,
      (__int64)v49,
      (__int64)v17,
      (__int64)v50,
      v46,
      v34,
      a2,
      a3,
      a4,
      v47,
      v48,
      a7,
      a8,
      v63);
  }
  qfindclose(v81);
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69, v44);
  }
  v51 = *((_QWORD *)&v74 + 1) - 24LL;
  if ( (int *)(*((_QWORD *)&v74 + 1) - 24LL) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v62 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v74 + 1) - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v62 = *(_DWORD *)(*((_QWORD *)&v74 + 1) - 8LL);
      *(_DWORD *)(*((_QWORD *)&v74 + 1) - 8LL) = v62 - 1;
    }
    if ( v62 <= 0 )
    {
      v44 = (const char *)&v71;
      std::string::_Rep::_M_destroy(v51, &v71);
    }
  }
  v52 = v74 - 24;
  if ( (int *)(v74 - 24) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v60 = _InterlockedExchangeAdd((volatile signed __int32 *)(v74 - 8), 0xFFFFFFFF);
    }
    else
    {
      v60 = *(_DWORD *)(v74 - 8);
      *(_DWORD *)(v74 - 8) = v60 - 1;
    }
    if ( v60 <= 0 )
    {
      v44 = (const char *)&v71;
      std::string::_Rep::_M_destroy(v52, &v71);
    }
  }
  v53 = s;
  if ( s )
  {
LABEL_44:
    *(_QWORD *)&v68 = 0;
    qfree(v53, v44);
  }
  return v84 - __readfsqword(0x28u);
}
