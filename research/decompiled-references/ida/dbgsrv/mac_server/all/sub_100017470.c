/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017470
// Address: 0x0000000100017470

//----- (0000000100017470) ----------------------------------------------------
__int64 __fastcall sub_100017470(
        char *__s,
        unsigned int *a2,
        __int64 (__fastcall *a3)(_QWORD *, __int64, const char *, __int64),
        __int64 a4)
{
  _BYTE *v5; // rbx
  size_t v6; // rax
  size_t v7; // r14
  void *v8; // r15
  void *v9; // rdi
  size_t v10; // rbx
  char *v11; // r14
  void *v12; // rax
  size_t v13; // rax
  size_t v14; // rbx
  void *v15; // r14
  void *v16; // rax
  char *v17; // rbx
  char *v18; // rax
  unsigned __int64 v19; // r13
  char *v21; // rcx
  const char *v22; // r14
  char *v23; // rax
  __int64 v24; // rax
  size_t v25; // r15
  char *v26; // r14
  void *v27; // rax
  int v28; // eax
  char *v29; // r14
  char *v30; // rax
  __int64 v31; // rax
  int v34; // [rsp+2Ch] [rbp-454h]
  void *__dst[2]; // [rsp+30h] [rbp-450h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-440h]
  char __sa[1024]; // [rsp+50h] [rbp-430h] BYREF

  v5 = qbasename(__s);
  *(_OWORD *)__dst = 0;
  v36 = 0;
  if ( __s )
  {
    v6 = strlen(__s);
    v7 = v6;
    v8 = (void *)(v6 + 1);
    if ( v6 == -1 )
    {
      v9 = nullptr;
    }
    else
    {
      v9 = qvector_reserve((__int64)__dst, nullptr, v6 + 1, 1u);
      __dst[0] = v9;
    }
    __dst[1] = v8;
    memmove(v9, __s, v7);
    *((_BYTE *)__dst[0] + v7) = 0;
  }
  qmakepath(__sa, 1024, (__int64)".dSYM", "Contents", "Resources", "DWARF", v5, 0);
  v10 = strlen(__sa);
  v11 = nullptr;
  if ( __dst[1] )
    v11 = (char *)__dst[1] - 1;
  v12 = __dst[0];
  if ( v36 < (unsigned __int64)&v11[v10 + 1] )
  {
    v12 = qvector_reserve((__int64)__dst, __dst[0], (unsigned __int64)&v11[v10 + 1], 1u);
    __dst[0] = v12;
  }
  __dst[1] = &v11[v10 + 1];
  v11[v10 + (_QWORD)v12] = 0;
  memmove((char *)__dst[0] + (unsigned __int64)v11, __sa, v10);
  v34 = sub_1000178D0((const char *)__dst[0], a2, a3, a4);
  if ( v34 >= 0 )
    goto LABEL_20;
  if ( __s && (v13 = strlen(__s)) != 0 )
  {
    v14 = v13;
    v15 = (void *)(v13 + 1);
    v16 = __dst[0];
    if ( v36 < (unsigned __int64)v15 )
    {
      v16 = qvector_reserve((__int64)__dst, __dst[0], (unsigned __int64)v15, 1u);
      __dst[0] = v16;
    }
    __dst[1] = v15;
    memmove(v16, __s, v14);
    *((_BYTE *)__dst[0] + v14) = 0;
    if ( __dst[1] )
    {
      v17 = (char *)__dst[0];
      goto LABEL_19;
    }
  }
  else
  {
    __dst[1] = nullptr;
  }
  v17 = (char *)_s1;
LABEL_19:
  v18 = strrchr(v17, 46);
  v19 = v18 - v17;
  v34 = -1;
  if ( v18 != nullptr && v18 - v17 != -1 )
  {
    while ( 1 )
    {
      v21 = (char *)__dst[1] - 1;
      if ( !__dst[1] )
        v21 = nullptr;
      if ( (unsigned __int64)v21 < v19 )
        break;
      v22 = _s1;
      if ( __dst[1] )
        v22 = (const char *)__dst[0];
      v23 = strchr((char *)&v22[v19], 47);
      if ( !v23 )
        break;
      v24 = v23 - v22;
      if ( v24 == -1 )
        break;
      sub_100012FB0((__int64)__dst, v24);
      v25 = strlen(__sa);
      v26 = nullptr;
      if ( __dst[1] )
        v26 = (char *)__dst[1] - 1;
      v27 = __dst[0];
      if ( v36 < (unsigned __int64)&v26[v25 + 1] )
      {
        v27 = qvector_reserve((__int64)__dst, __dst[0], (unsigned __int64)&v26[v25 + 1], 1u);
        __dst[0] = v27;
      }
      __dst[1] = &v26[v25 + 1];
      v26[v25 + (_QWORD)v27] = 0;
      memmove((char *)__dst[0] + (unsigned __int64)v26, __sa, v25);
      v28 = sub_1000178D0((const char *)__dst[0], a2, a3, a4);
      if ( v28 >= 0 )
      {
        v34 = v28;
        break;
      }
      sub_100012FB0((__int64)__dst, v19);
      v29 = (char *)_s1;
      if ( __dst[1] )
        v29 = (char *)__dst[0];
      v30 = strrchr(v29, 47);
      if ( !v30 )
        break;
      v31 = v30 - v29;
      if ( v31 == -1 )
        break;
      sub_100012FB0((__int64)__dst, v31);
    }
  }
LABEL_20:
  if ( __dst[0] )
  {
    __dst[1] = nullptr;
    qfree(__dst[0]);
  }
  return (unsigned int)v34;
}
