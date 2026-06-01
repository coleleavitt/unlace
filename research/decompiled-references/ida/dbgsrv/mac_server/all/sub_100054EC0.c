/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054EC0
// Address: 0x0000000100054EC0

//----- (0000000100054EC0) ----------------------------------------------------
__int64 __fastcall sub_100054EC0(__int64 a1, void **a2, unsigned __int64 *a3)
{
  int v5; // r14d
  unsigned int v6; // r12d
  unsigned __int64 v7; // rsi
  size_t v8; // r14
  size_t v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  size_t v12; // rbx
  size_t v13; // r14
  size_t v14; // r12
  unsigned __int8 *v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  void **v18; // rdi
  unsigned __int64 v19; // rcx
  char *v20; // rax
  const void *v21; // rax
  unsigned __int64 v22; // rcx
  void *v23; // rdi
  __int64 v24; // rdx
  size_t v25; // r14
  __int64 v26; // r14
  __int64 v27; // r13
  size_t v28; // r14
  __int64 i; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // r12
  _BYTE *v33; // rax
  __int64 v34; // rcx
  char v35; // r12
  unsigned __int64 v36; // rdx
  _BYTE *v37; // rax
  unsigned __int64 v38; // r13
  __int64 v39; // r12
  bool v40; // cf
  unsigned __int64 v41; // r12
  char *v42; // rax
  unsigned __int64 v43; // rcx
  size_t j; // r14
  char v45; // r13
  void *v46; // rax
  __int64 v47; // rcx
  void *v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r15
  void *v52; // rdi
  __int64 v54; // [rsp+8h] [rbp-D8h]
  __int64 v55; // [rsp+10h] [rbp-D0h]
  unsigned int v56; // [rsp+18h] [rbp-C8h]
  char *__src; // [rsp+20h] [rbp-C0h]
  void *__srca; // [rsp+20h] [rbp-C0h]
  __int64 v59; // [rsp+28h] [rbp-B8h]
  size_t __n; // [rsp+38h] [rbp-A8h]
  size_t __na; // [rsp+38h] [rbp-A8h]
  void **v63; // [rsp+40h] [rbp-A0h]
  unsigned int v64; // [rsp+40h] [rbp-A0h]
  unsigned int v65; // [rsp+4Ch] [rbp-94h] BYREF
  __int128 v66; // [rsp+50h] [rbp-90h] BYREF
  __int64 v67; // [rsp+60h] [rbp-80h]
  unsigned __int8 v68; // [rsp+6Fh] [rbp-71h] BYREF
  _BYTE v69[24]; // [rsp+70h] [rbp-70h] BYREF
  __int64 v70; // [rsp+88h] [rbp-58h]
  __int64 v71; // [rsp+90h] [rbp-50h]
  __int128 v72; // [rsp+98h] [rbp-48h]

  v66 = 0;
  v67 = 0;
  v5 = unpack_dd(a3, a3[1]);
  v59 = unpack_dd(a3, a3[1]);
  if ( (int)(v59 | v5) < 0 || (int)(v59 ^ 0x7FFFFFFF) < v5 )
  {
    v6 = 0;
    sub_100032FE0(a2, 0);
    if ( *(_BYTE *)(a1 + 184) == 1 )
    {
      v6 = 0;
      sub_100000AE0((int)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n", (unsigned int)v5, v59);
    }
    goto LABEL_67;
  }
  v56 = v5;
  v7 = (int)v59 + v5;
  if ( *((_QWORD *)&v66 + 1) != v7 )
  {
    v72 = 0;
    *(_QWORD *)v69 = -1;
    *(_OWORD *)&v69[8] = 0;
    v70 = 0;
    v71 = 4;
    DWORD1(v72) = -1;
    sub_10005EE50((__int64)&v66, v7, (unsigned __int64)v69);
    if ( *(_QWORD *)&v69[8] )
    {
      *(_QWORD *)&v69[16] = 0;
      qfree(*(void **)&v69[8]);
    }
  }
  v54 = (__int64)a2;
  v8 = v66;
  __n = 56LL * v56;
  v9 = v66 + __n;
  if ( v56 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      *(_BYTE *)(v8 + v10 + 40) = 0;
      v11 = unpack_dq(a3, a3[1]) + v11 - 1;
      *(_QWORD *)(v8 + v10) = v11;
      *(_DWORD *)(v8 + v10 + 36) = unpack_dd(a3, a3[1]);
      *(_DWORD *)(v8 + v10 + 32) = unpack_dd(a3, a3[1]);
      *(_DWORD *)(v8 + v10 + 44) = unpack_dd(a3, a3[1]);
      *(_DWORD *)(v8 + v10 + 48) = unpack_dd(a3, a3[1]);
      v10 += 56;
    }
    while ( __n != v10 );
    v8 = v9;
  }
  v55 = 56LL * (unsigned int)v59;
  v12 = v55 + v9;
  if ( v8 != v12 )
  {
    v13 = v8 + 24;
    __src = nullptr;
    while ( 1 )
    {
      v14 = v13 - 24;
      __src = &__src[unpack_dq(a3, a3[1]) - 1];
      *(_QWORD *)(v13 - 24) = __src;
      v15 = (unsigned __int8 *)*a3;
      v16 = a3[1];
      if ( *a3 < v16 )
      {
        v17 = *v15;
        *a3 = (unsigned __int64)(v15 + 1);
        if ( v17 )
          break;
      }
LABEL_24:
      *(_DWORD *)(v14 + 32) = unpack_dd(a3, v16);
      *(_DWORD *)(v14 + 44) = unpack_dd(a3, a3[1]);
      *(_DWORD *)(v13 + 24) = unpack_dd(a3, a3[1]);
      v13 += 56LL;
      if ( v14 + 56 == v12 )
        goto LABEL_25;
    }
    v18 = (void **)(v13 - 16);
    v19 = *(_QWORD *)(v13 - 8);
    if ( v19 >= v17 )
    {
      if ( v19 == v17 )
        goto LABEL_22;
      v69[0] = 0;
      v63 = (void **)(v13 - 16);
      sub_10001CE90((__int64)v18, v17, v69);
    }
    else
    {
      v20 = *(char **)(v13 - 16);
      v63 = (void **)(v13 - 16);
      if ( *(_QWORD *)v13 < v17 )
      {
        v20 = (char *)qvector_reserve((__int64)v18, v20, v17, 1u);
        *(_QWORD *)(v13 - 16) = v20;
        v19 = *(_QWORD *)(v13 - 8);
      }
      __bzero(&v20[v19], v17 - v19);
      *(_QWORD *)(v13 - 8) = v17;
    }
    v18 = v63;
LABEL_22:
    v21 = (const void *)*a3;
    v16 = a3[1];
    v22 = *a3 + v17;
    if ( v22 >= *a3 && v22 <= v16 )
    {
      v23 = *v18;
      *a3 = v22;
      memcpy(v23, v21, v17);
      v16 = a3[1];
    }
    goto LABEL_24;
  }
LABEL_25:
  v24 = v66;
  v25 = v66 + __n;
  if ( (_QWORD)v66 + __n != v12 )
  {
    do
    {
      if ( *(_BYTE *)(a1 + 184) == 1 )
        sub_100000AE0(
          (int)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n",
          *(_QWORD *)v25,
          *(unsigned int *)(v25 + 32),
          *(_QWORD *)(v25 + 16));
      v25 += 56LL;
    }
    while ( v25 != v12 );
    v24 = v66;
  }
  memset(v69, 0, sizeof(v69));
  v64 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64, _QWORD, __int64, _BYTE *))(**(_QWORD **)(a1 + 440)
                                                                                             + 328LL))(
          *(_QWORD *)(a1 + 440),
          &v65,
          v24,
          v56,
          v59,
          v69);
  v26 = v66;
  if ( v56 )
  {
    v27 = 0;
    do
    {
      if ( *(_BYTE *)(a1 + 184) == 1 )
        sub_100000AE0(
          (int)"add_bpt(ea=%a type=%d len=%d) => %s\n",
          *(_QWORD *)(v26 + v27),
          *(unsigned int *)(v26 + v27 + 32),
          *(unsigned int *)(v26 + v27 + 36));
      v27 += 56;
    }
    while ( __n != v27 );
  }
  sub_100032FE0((void **)v54, v64);
  sub_100032FE0((void **)v54, v65);
  v28 = __n + v26;
  for ( i = v66; i != v28; i += 56 )
  {
    v32 = *(_BYTE *)(i + 40);
    v33 = *(_BYTE **)v54;
    v34 = *(_QWORD *)(v54 + 8);
    if ( *(_QWORD *)(v54 + 16) < (unsigned __int64)(v34 + 1) )
    {
      v33 = qvector_reserve(v54, v33, v34 + 1, 1u);
      *(_QWORD *)v54 = v33;
      v34 = *(_QWORD *)(v54 + 8);
    }
    v33[v34] = v32;
    v30 = *(_QWORD *)(v54 + 8);
    v31 = v30 + 1;
    *(_QWORD *)(v54 + 8) = v30 + 1;
    if ( !*(_BYTE *)(i + 40) && *(_DWORD *)(i + 32) == 4 )
    {
      v35 = *(_BYTE *)(i + 16);
      v36 = v30 + 2;
      v37 = *(_BYTE **)v54;
      if ( *(_QWORD *)(v54 + 16) < v36 )
      {
        v37 = qvector_reserve(v54, *(void **)v54, v36, 1u);
        *(_QWORD *)v54 = v37;
        v31 = *(_QWORD *)(v54 + 8);
      }
      v37[v31] = v35;
      v38 = *(_QWORD *)(v54 + 8) + 1LL;
      *(_QWORD *)(v54 + 8) = v38;
      v39 = *(_QWORD *)(i + 16);
      if ( v39 )
      {
        __srca = *(void **)(i + 8);
        __na = *(_QWORD *)(i + 16);
        v40 = __CFADD__(v38, v39);
        v41 = v38 + v39;
        if ( v40 )
          v41 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v38 >= v41 )
        {
          if ( v38 != v41 )
          {
            v68 = 0;
            sub_10001CE90(v54, v41, &v68);
          }
        }
        else
        {
          v42 = *(char **)v54;
          if ( *(_QWORD *)(v54 + 16) >= v41 )
          {
            v43 = v38;
          }
          else
          {
            v42 = (char *)qvector_reserve(v54, *(void **)v54, v41, 1u);
            *(_QWORD *)v54 = v42;
            v43 = *(_QWORD *)(v54 + 8);
          }
          __bzero(&v42[v43], v41 - v43);
          *(_QWORD *)(v54 + 8) = v41;
        }
        memcpy((void *)(*(_QWORD *)v54 + v38), __srca, __na);
      }
    }
  }
  for ( j = v55 + v28; i != j; i += 56 )
  {
    v45 = *(_BYTE *)(i + 40);
    v46 = *(void **)v54;
    v47 = *(_QWORD *)(v54 + 8);
    if ( *(_QWORD *)(v54 + 16) < (unsigned __int64)(v47 + 1) )
    {
      v46 = qvector_reserve(v54, v46, v47 + 1, 1u);
      *(_QWORD *)v54 = v46;
      v47 = *(_QWORD *)(v54 + 8);
    }
    *((_BYTE *)v46 + v47) = v45;
    ++*(_QWORD *)(v54 + 8);
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000AE0((int)"del_bpt(ea=%a) => %s\n", *(_QWORD *)i);
  }
  v6 = v64;
  if ( v64 != 1 )
    sub_100055750(v54, (__int64)v69);
  if ( *(_QWORD *)v69 )
  {
    *(_QWORD *)&v69[8] = 0;
    qfree(*(void **)v69);
  }
LABEL_67:
  v48 = (void *)v66;
  if ( (_QWORD)v66 )
  {
    v49 = *((_QWORD *)&v66 + 1);
    if ( *((_QWORD *)&v66 + 1) )
    {
      v50 = 8;
      do
      {
        v51 = v66;
        v52 = *(void **)(v66 + v50);
        if ( v52 )
        {
          *(_QWORD *)(v66 + v50 + 8) = 0;
          qfree(v52);
          *(_QWORD *)(v51 + v50) = 0;
          *(_QWORD *)(v51 + v50 + 16) = 0;
        }
        v50 += 56;
        --v49;
      }
      while ( v49 );
      v48 = (void *)v66;
    }
    *((_QWORD *)&v66 + 1) = 0;
    qfree(v48);
  }
  return v6;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
