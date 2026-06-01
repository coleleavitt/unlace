/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D8E0
// Address: 0x000000010003D8E0

//----- (000000010003D8E0) ----------------------------------------------------
__int64 __fastcall sub_10003D8E0(__int64 a1, unsigned __int8 **a2)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  void *v8; // r14
  unsigned __int8 *v9; // r15
  int v10; // r12d
  __int64 v11; // rcx
  _DWORD *v12; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rdi
  const char *v16; // r13
  __int64 v17; // rcx
  size_t v18; // rax
  size_t v19; // r12
  void *v20; // r14
  void *v21; // rdi
  char *v22; // rax
  __int64 v23; // rcx
  char *v24; // rdi
  __int64 v25; // rcx
  unsigned __int8 *v26; // r14
  char *__s[2]; // [rsp+10h] [rbp-90h] BYREF
  __int64 v29; // [rsp+20h] [rbp-80h]
  unsigned __int8 v30[8]; // [rsp+30h] [rbp-70h] BYREF
  void *__p[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 v32; // [rsp+48h] [rbp-58h]
  unsigned __int8 v33[8]; // [rsp+50h] [rbp-50h] BYREF
  void *v34; // [rsp+58h] [rbp-48h]
  __int128 v35; // [rsp+60h] [rbp-40h]

  *(_OWORD *)__s = 0;
  v29 = 0;
  v3 = sub_10003CD00(a1, (__int64 *)__s);
  if ( v3 )
  {
    LOBYTE(v4) = sub_10003DD00(a1, v3, (__int64)__s, a2);
    v5 = v4;
    goto LABEL_35;
  }
  v6 = *(_QWORD **)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  if ( LOBYTE(v6[4 * v7 - 4]) == 2 && SLODWORD(qword_1000AC128[2]) > 0 )
  {
    v8 = (void *)v6[4 * v7 - 3];
    v9 = *a2;
    *a2 = nullptr;
    v10 = *(_DWORD *)(a1 + 32);
    v11 = *(_QWORD *)(a1 + 80);
    v12 = *(_DWORD **)(a1 + 72);
    if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v11 + 1) )
    {
      v12 = qvector_reserve(a1 + 72, *(void **)(a1 + 72), v11 + 1, 4u);
      *(_QWORD *)(a1 + 72) = v12;
      v11 = *(_QWORD *)(a1 + 80);
    }
    v12[v11] = v10;
    ++*(_QWORD *)(a1 + 80);
    v33[0] = 2;
    v35 = 0;
    v34 = v8;
    v13 = *(char **)(a1 + 24);
    v14 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v14 + 1) )
    {
      v13 = (char *)qvector_reserve(a1 + 24, v13, v14 + 1, 0x20u);
      *(_QWORD *)(a1 + 24) = v13;
      v14 = *(_QWORD *)(a1 + 32);
    }
    v15 = &v13[32 * v14];
    *v15 = 2;
    *(_OWORD *)(v15 + 8) = 0;
    *((_QWORD *)v15 + 3) = 0;
    ++*(_QWORD *)(a1 + 32);
    move_idcv((unsigned __int8 *)v15, v33);
    if ( __s[1] )
    {
      v16 = __s[0];
      v30[0] = 7;
      *(_OWORD *)__p = 0;
      v32 = 0;
      if ( !__s[0] )
      {
LABEL_20:
        v22 = *(char **)(a1 + 24);
        v23 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v23 + 1) )
        {
          v22 = (char *)qvector_reserve(a1 + 24, v22, v23 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v22;
          v23 = *(_QWORD *)(a1 + 32);
        }
        v24 = &v22[32 * v23];
        *v24 = 2;
        *(_OWORD *)(v24 + 8) = 0;
        *((_QWORD *)v24 + 3) = 0;
        ++*(_QWORD *)(a1 + 32);
        move_idcv((unsigned __int8 *)v24, v30);
        v5 = sub_10003D3F0((_QWORD *)a1, v9, nullptr, -LODWORD(qword_1000AC128[2]));
        if ( v30[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)__p[0], v30);
        }
        else if ( v30[0] == 7 && __p[0] )
        {
          __p[1] = nullptr;
          qfree(__p[0]);
          __p[0] = nullptr;
          v32 = 0;
        }
        if ( v33[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)v34, v33);
        }
        else if ( v33[0] == 7 && v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v34);
        }
        goto LABEL_35;
      }
    }
    else
    {
      v30[0] = 7;
      *(_OWORD *)__p = 0;
      v32 = 0;
      v16 = _s1;
    }
    v18 = strlen(v16);
    v19 = v18;
    v20 = (void *)(v18 + 1);
    if ( v18 == -1 )
    {
      v21 = nullptr;
    }
    else
    {
      v21 = qvector_reserve((__int64)__p, nullptr, v18 + 1, 1u);
      __p[0] = v21;
    }
    __p[1] = v20;
    memmove(v21, v16, v19);
    *((_BYTE *)__p[0] + v19) = 0;
    goto LABEL_20;
  }
  if ( !v7 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      v17 = 0;
    }
    else
    {
      v6 = qvector_reserve(a1 + 24, *(void **)(a1 + 24), 1u, 0x20u);
      *(_QWORD *)(a1 + 24) = v6;
      v17 = *(_QWORD *)(a1 + 32);
    }
    v25 = 4 * v17;
    LOBYTE(v6[v25]) = 2;
    *(_OWORD *)&v6[v25 + 1] = 0;
    v6[v25 + 3] = 0;
    v6 = *(_QWORD **)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 32) + 1LL;
    *(_QWORD *)(a1 + 32) = v7;
  }
  v26 = (unsigned __int8 *)&v6[4 * v7 - 4];
  sub_10003BC00(v26);
  sub_10003B860(a1, (__int64)v26);
  v5 = 0;
LABEL_35:
  if ( __s[0] )
  {
    __s[1] = nullptr;
    qfree(__s[0]);
  }
  return v5;
}
// 10003D93D: variable 'v4' is possibly undefined
// 1000AC128: using guessed type __int64 qword_1000AC128[3];
