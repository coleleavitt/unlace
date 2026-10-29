/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069EC0
// Address: 0x0000000100069EC0

//----- (0000000100069EC0) ----------------------------------------------------
__int64 __fastcall sub_100069EC0(__int64 a1)
{
  __int64 v2; // rax
  size_t v3; // r14
  bool v4; // cf
  size_t v5; // rax
  const void *v6; // r15
  __int64 v7; // rcx
  size_t v8; // r14
  bool v9; // cf
  size_t v10; // rcx
  const void *v11; // r15
  void *v12; // rax
  __int64 v13; // rcx
  size_t v14; // r14
  bool v15; // cf
  size_t v16; // rcx
  const void *v17; // r15
  void *v18; // rax
  __int64 *v19; // r14
  size_t v20; // rax
  size_t v21; // r15
  void *v22; // r12
  void *v23; // rax
  void *v24; // r13
  const char *v25; // rdi
  void *v26; // r15
  const char *v27; // rsi
  size_t v28; // r12
  char *v29; // r12
  void *v30; // rax
  __darwin_time_t v31; // rax
  const char *v32; // r8
  const char *v33; // rdx
  __int64 *v34; // rax
  const char *v36; // r15
  int v37; // r12d
  const char *v38; // rax
  char *v39; // [rsp+8h] [rbp-4F8h] BYREF
  __int128 v40; // [rsp+10h] [rbp-4F0h]
  __int64 v41; // [rsp+20h] [rbp-4E0h]
  void *__src[2]; // [rsp+30h] [rbp-4D0h] BYREF
  unsigned __int64 v43; // [rsp+40h] [rbp-4C0h]
  __int64 v44; // [rsp+48h] [rbp-4B8h] BYREF
  _OWORD v45[2]; // [rsp+50h] [rbp-4B0h] BYREF
  void *__dst[2]; // [rsp+70h] [rbp-490h] BYREF
  void *v47[2]; // [rsp+80h] [rbp-480h] BYREF
  __int128 v48; // [rsp+90h] [rbp-470h]
  char v49[32]; // [rsp+A0h] [rbp-460h] BYREF
  char __s[1040]; // [rsp+C0h] [rbp-440h] BYREF

  *(_QWORD *)(a1 + 80) = sub_10006AA50(*(unsigned __int8 *)(a1 + 106));
  v44 = 88;
  memset(v45, 0, 26);
  *(_OWORD *)__dst = 0;
  *(_OWORD *)v47 = 0;
  v48 = 0;
  if ( &v44 != (__int64 *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 0;
    v4 = v2 == 0;
    v5 = v2 - 1;
    if ( !v4 )
      v3 = v5;
    if ( !v4 && v5 != 0 )
    {
      v6 = *(const void **)(a1 + 8);
      *(_QWORD *)&v45[0] = qvector_reserve((__int64)v45, nullptr, v3 + 1, 1u);
      *((_QWORD *)&v45[0] + 1) = v3 + 1;
      memmove(*(void **)&v45[0], v6, v3);
      *(_BYTE *)(*(_QWORD *)&v45[0] + v3) = 0;
    }
  }
  WORD4(v45[1]) = *(_WORD *)(a1 + 104);
  if ( __dst != (void **)(a1 + 32) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    v8 = 0;
    v9 = v7 == 0;
    v10 = v7 - 1;
    if ( !v9 )
      v8 = v10;
    if ( v9 || v10 == 0 )
    {
      __dst[1] = nullptr;
    }
    else
    {
      v11 = *(const void **)(a1 + 32);
      v12 = __dst[0];
      if ( v47[0] <= (void *)v8 )
      {
        v12 = qvector_reserve((__int64)__dst, __dst[0], v8 + 1, 1u);
        __dst[0] = v12;
      }
      __dst[1] = (void *)(v8 + 1);
      memmove(v12, v11, v8);
      *((_BYTE *)__dst[0] + v8) = 0;
    }
  }
  if ( &v47[1] != (void **)(a1 + 56) )
  {
    v13 = *(_QWORD *)(a1 + 64);
    v14 = 0;
    v15 = v13 == 0;
    v16 = v13 - 1;
    if ( !v15 )
      v14 = v16;
    if ( v15 || v16 == 0 )
    {
      *(_QWORD *)&v48 = 0;
    }
    else
    {
      v17 = *(const void **)(a1 + 56);
      v18 = v47[1];
      if ( *((_QWORD *)&v48 + 1) <= v14 )
      {
        v18 = qvector_reserve((__int64)&v47[1], v47[1], v14 + 1, 1u);
        v47[1] = v18;
      }
      *(_QWORD *)&v48 = v14 + 1;
      memmove(v18, v17, v14);
      *((_BYTE *)v47[1] + v14) = 0;
    }
  }
  v19 = (__int64 *)(a1 + 80);
  if ( !(unsigned __int8)sub_10006AAD0(*(_QWORD *)(a1 + 80)) )
  {
    if ( *(_QWORD *)(a1 + 16) >= 2u )
      v36 = *(const char **)(a1 + 8);
    else
      v36 = "0.0.0.0";
    v37 = *(unsigned __int16 *)(a1 + 104);
    v38 = (const char *)sub_10006AAA0(*(_QWORD *)(a1 + 80));
    sub_10006D810("%s:%u: %s\n", v36, v37, v38);
    sub_10006AB40((_QWORD *)(a1 + 80));
    exit(1);
  }
  *(_OWORD *)__src = 0;
  v43 = 0;
  v40 = 0;
  v41 = 0;
  sub_10006AB10(*v19);
  if ( (unsigned __int8)sub_10007D010(__s, 2u) )
  {
    v20 = strlen(__s);
    if ( v20 )
    {
      v21 = v20;
      v22 = (void *)(v20 + 1);
      v23 = __src[0];
      if ( v43 < (unsigned __int64)v22 )
      {
        v23 = qvector_reserve((__int64)__src, __src[0], (unsigned __int64)v22, 1u);
        __src[0] = v23;
      }
      __src[1] = v22;
      memmove(v23, __s, v21);
      *((_BYTE *)__src[0] + v21) = 0;
      v24 = __src[1];
      if ( *((_QWORD *)&v40 + 1) )
        v25 = (const char *)v40;
      else
        v25 = _s1;
      v26 = __src[0];
      v27 = (const char *)__src[0];
      if ( __src[1] )
        goto LABEL_37;
    }
    else
    {
      __src[1] = nullptr;
      if ( *((_QWORD *)&v40 + 1) )
        v25 = (const char *)v40;
      else
        v25 = _s1;
      v26 = __src[0];
      v24 = nullptr;
    }
    v27 = _s1;
LABEL_37:
    if ( !strcmp(v25, v27) )
    {
      if ( v26 )
      {
        __src[1] = nullptr;
        qfree(v26);
        __src[0] = nullptr;
        v43 = 0;
      }
    }
    else
    {
      v28 = 0;
      if ( v24 )
        v28 = (size_t)v24 - 1;
      if ( v43 < v28 + 9 )
      {
        v26 = qvector_reserve((__int64)__src, v26, v28 + 9, 1u);
        __src[0] = v26;
      }
      __src[1] = (void *)(v28 + 9);
      *((_BYTE *)v26 + v28 + 8) = 0;
      if ( (unsigned __int64)v24 >= 2 )
        memmove((char *)__src[0] + 8, __src[0], v28);
      *(_QWORD *)__src[0] = 0x20706920796D2820LL;
      v29 = nullptr;
      if ( __src[1] )
        v29 = (char *)__src[1] - 1;
      v30 = __src[0];
      if ( v43 < (unsigned __int64)(v29 + 2) )
      {
        v30 = qvector_reserve((__int64)__src, __src[0], (unsigned __int64)(v29 + 2), 1u);
        __src[0] = v30;
      }
      __src[1] = v29 + 2;
      v29[(_QWORD)v30 + 1] = 0;
      *((_BYTE *)__src[0] + (unsigned __int64)v29) = 41;
    }
  }
  v31 = qtime64();
  format_timestamp(v49, 25, v31, 0);
  v32 = _s1;
  v33 = _s1;
  if ( *((_QWORD *)&v40 + 1) )
    v33 = (const char *)v40;
  if ( __src[1] )
    v32 = (const char *)__src[0];
  sub_10006D810("%s Listening on %s:%u%s...\n", v49, v33, *(unsigned __int16 *)(a1 + 104), v32);
  while ( *v19 )
  {
    v39 = sub_10006AA50(*(unsigned __int8 *)(a1 + 106));
    if ( (unsigned __int8)sub_10006AAE0((__int64)v39)
      && (v34 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 24LL))(a1, v39)) != nullptr )
    {
      sub_100069A40(a1, v34);
    }
    else
    {
      sub_10006AB40(&v39);
      if ( !*v19 )
        break;
      sub_10006D810("Rejected client\n", 0xFFFFFFFFLL);
    }
  }
  if ( (_QWORD)v40 )
  {
    *((_QWORD *)&v40 + 1) = 0;
    qfree((void *)v40);
  }
  if ( __src[0] )
  {
    __src[1] = nullptr;
    qfree(__src[0]);
  }
  if ( v47[1] )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47[1]);
    v47[1] = nullptr;
    *((_QWORD *)&v48 + 1) = 0;
  }
  if ( __dst[0] )
  {
    __dst[1] = nullptr;
    qfree(__dst[0]);
    __dst[0] = nullptr;
    v47[0] = nullptr;
  }
  if ( *(_QWORD *)&v45[0] )
  {
    *((_QWORD *)&v45[0] + 1) = 0;
    qfree(*(void **)&v45[0]);
  }
  return __stack_chk_guard;
}
