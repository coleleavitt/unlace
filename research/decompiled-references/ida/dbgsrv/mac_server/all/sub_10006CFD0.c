/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006CFD0
// Address: 0x000000010006CFD0

//----- (000000010006CFD0) ----------------------------------------------------
bool __fastcall sub_10006CFD0(__int64 a1, const sockaddr *a2, socklen_t a3, int a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool v7; // cf
  unsigned __int64 v8; // rax
  size_t v9; // r8
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rcx
  size_t v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  _BYTE *v19; // rax
  size_t v20; // r14
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rcx
  size_t v25; // rcx
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  _BYTE *v30; // rax
  size_t v31; // rdx
  unsigned __int64 v32; // r13
  size_t v33; // r15
  _BYTE *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  size_t v39; // [rsp+8h] [rbp-448h]
  __int64 v40; // [rsp+10h] [rbp-440h]
  size_t __len; // [rsp+18h] [rbp-438h]
  size_t __lena; // [rsp+18h] [rbp-438h]
  char __s[1024]; // [rsp+20h] [rbp-430h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = v5 == 0;
  v8 = v5 - 1;
  if ( !v7 )
    v6 = v8;
  if ( a4 && !getnameinfo(a2, a3, __s, 0x400u, nullptr, 0, 4) )
  {
    v9 = strlen(__s);
    v10 = *(_BYTE **)a1;
    v11 = *(_QWORD *)(a1 + 8);
    v12 = 0;
    v7 = v11 == 0;
    v13 = v11 - 1;
    if ( !v7 )
      v12 = v13;
    v14 = v9 + v12;
    v15 = v9 + v12 + 1;
    if ( *(_QWORD *)(a1 + 16) < v15 )
    {
      v39 = v9 + v12;
      __len = v9;
      v40 = v9 + v12 + 1;
      v10 = qvector_reserve(a1, v10, v15, 1u);
      v15 = v40;
      v14 = v39;
      v9 = __len;
      *(_QWORD *)a1 = v10;
    }
    *(_QWORD *)(a1 + 8) = v15;
    v10[v14] = 0;
    memmove((void *)(*(_QWORD *)a1 + v12), __s, v9);
  }
  if ( !getnameinfo(a2, a3, __s, 0x400u, nullptr, 0, 2) )
  {
    v16 = *(_QWORD *)(a1 + 8);
    v17 = 0;
    v7 = v16 == 0;
    v18 = v16 - 1;
    if ( !v7 )
      v17 = v18;
    if ( v17 <= v6 )
    {
      v31 = strlen(__s);
      v32 = v31 + v17 + 1;
      v33 = v17 + v31;
      v34 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v32 )
      {
        __lena = v31;
        v34 = qvector_reserve(a1, *(void **)a1, v32, 1u);
        v31 = __lena;
        *(_QWORD *)a1 = v34;
      }
      *(_QWORD *)(a1 + 8) = v32;
      v34[v33] = 0;
      memmove((void *)(*(_QWORD *)a1 + v17), __s, v31);
    }
    else
    {
      v19 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v17 + 2 )
      {
        v19 = qvector_reserve(a1, *(void **)a1, v17 + 2, 1u);
        *(_QWORD *)a1 = v19;
      }
      *(_QWORD *)(a1 + 8) = v17 + 2;
      v19[v17] = 40;
      *(_BYTE *)(*(_QWORD *)a1 + v17 + 1) = 0;
      v20 = strlen(__s);
      v21 = *(void **)a1;
      v22 = *(_QWORD *)(a1 + 8);
      v23 = 0;
      v7 = v22 == 0;
      v24 = v22 - 1;
      if ( !v7 )
        v23 = v24;
      v25 = v23 + v20;
      v26 = v23 + v20 + 1;
      if ( *(_QWORD *)(a1 + 16) < v26 )
      {
        v21 = qvector_reserve(a1, v21, v23 + v20 + 1, 1u);
        v25 = v23 + v20;
        *(_QWORD *)a1 = v21;
      }
      *(_QWORD *)(a1 + 8) = v26;
      *((_BYTE *)v21 + v25) = 0;
      memmove((void *)(*(_QWORD *)a1 + v23), __s, v20);
      v27 = *(_QWORD *)(a1 + 8);
      v28 = 0;
      v7 = v27 == 0;
      v29 = v27 - 1;
      if ( !v7 )
        v28 = v29;
      v30 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v28 + 2) )
      {
        v30 = qvector_reserve(a1, *(void **)a1, v28 + 2, 1u);
        *(_QWORD *)a1 = v30;
      }
      *(_QWORD *)(a1 + 8) = v28 + 2;
      v30[v28] = 41;
      *(_BYTE *)(*(_QWORD *)a1 + v28 + 1) = 0;
    }
  }
  v35 = *(_QWORD *)(a1 + 8);
  v36 = 0;
  v7 = v35 == 0;
  v37 = v35 - 1;
  if ( !v7 )
    v36 = v37;
  return v36 > v6;
}
