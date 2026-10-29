/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CF30
// Address: 0x000000010003CF30

//----- (000000010003CF30) ----------------------------------------------------
__int64 __fastcall sub_10003CF30(__int64 a1, _DWORD *a2, unsigned int a3, __int64 a4, unsigned __int8 *a5, char a6)
{
  int v8; // r15d
  __int64 v9; // rcx
  _DWORD *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  unsigned __int8 *v13; // r15
  __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rcx
  char *v17; // rdi
  void *v18; // r12
  char *v19; // rax
  __int64 v20; // rcx
  char *v21; // rdi
  char *v22; // rax
  __int64 v23; // rcx
  char *v24; // rdi
  __int64 v25; // rcx
  unsigned __int8 *v26; // r14
  unsigned int v27; // ebx
  unsigned __int8 v32[8]; // [rsp+10h] [rbp-B0h] BYREF
  void *v33[2]; // [rsp+18h] [rbp-A8h]
  __int64 v34; // [rsp+28h] [rbp-98h]
  unsigned __int8 v35[8]; // [rsp+30h] [rbp-90h] BYREF
  void *v36[2]; // [rsp+38h] [rbp-88h]
  void *v37; // [rsp+48h] [rbp-78h]
  unsigned __int8 v38[8]; // [rsp+50h] [rbp-70h] BYREF
  void *v39; // [rsp+58h] [rbp-68h]
  __int128 v40; // [rsp+60h] [rbp-60h]
  unsigned __int8 v41[8]; // [rsp+70h] [rbp-50h] BYREF
  void *__p[2]; // [rsp+78h] [rbp-48h]
  __int64 v43; // [rsp+88h] [rbp-38h]

  if ( (a3 & 0x80000000) != 0 )
  {
    if ( a3 == -1 || qword_1000AC0E0 <= (unsigned __int64)-a3 )
      goto LABEL_10;
  }
  else if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= (unsigned __int64)a3 )
  {
LABEL_10:
    set_error_string(0, "?");
    set_qerrno();
    v14 = *(_QWORD *)(a1 + 32);
    if ( !v14 )
    {
      v15 = *(_BYTE **)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v16 = 0;
      }
      else
      {
        v15 = qvector_reserve(a1 + 24, *(void **)(a1 + 24), 1u, 0x20u);
        *(_QWORD *)(a1 + 24) = v15;
        v16 = *(_QWORD *)(a1 + 32);
      }
      v25 = 32 * v16;
      v15[v25] = 2;
      *(_OWORD *)&v15[v25 + 8] = 0;
      *(_QWORD *)&v15[v25 + 24] = 0;
      v14 = *(_QWORD *)(a1 + 32) + 1LL;
      *(_QWORD *)(a1 + 32) = v14;
    }
    v26 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v14 - 32);
    sub_10003BC00(v26);
    sub_10003B860(a1, (__int64)v26);
    return 0;
  }
  v8 = *(_DWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 80);
  v10 = *(_DWORD **)(a1 + 72);
  if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v9 + 1) )
  {
    v10 = qvector_reserve(a1 + 72, *(void **)(a1 + 72), v9 + 1, 4u);
    *(_QWORD *)(a1 + 72) = v10;
    v9 = *(_QWORD *)(a1 + 80);
  }
  v10[v9] = v8;
  ++*(_QWORD *)(a1 + 80);
  v40 = 0;
  v38[0] = 5;
  v39 = a2;
  ++a2[6];
  v11 = *(char **)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v12 + 1) )
  {
    v13 = a5;
  }
  else
  {
    v11 = (char *)qvector_reserve(a1 + 24, v11, v12 + 1, 0x20u);
    v13 = a5;
    *(_QWORD *)(a1 + 24) = v11;
    v12 = *(_QWORD *)(a1 + 32);
  }
  v17 = &v11[32 * v12];
  *v17 = 2;
  *(_OWORD *)(v17 + 8) = 0;
  *((_QWORD *)v17 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v17, v38);
  v35[0] = 7;
  *(_OWORD *)v36 = 0;
  v37 = nullptr;
  v18 = *(void **)(a4 + 8);
  if ( v18 )
  {
    v36[0] = qalloc_or_throw(*(_QWORD *)(a4 + 8));
    v37 = v18;
    memcpy(v36[0], *(const void **)a4, (size_t)v18);
    v36[1] = v18;
  }
  v19 = *(char **)(a1 + 24);
  v20 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v20 + 1) )
  {
    v19 = (char *)qvector_reserve(a1 + 24, v19, v20 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v19;
    v20 = *(_QWORD *)(a1 + 32);
  }
  v21 = &v19[32 * v20];
  *v21 = 2;
  *(_OWORD *)(v21 + 8) = 0;
  *((_QWORD *)v21 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v21, v35);
  if ( !a6 )
  {
    v32[0] = 2;
    *(_OWORD *)v33 = 0;
    v34 = 0;
    copy_idcv(v32, v13);
    v41[0] = 2;
    *(_OWORD *)__p = 0;
    v43 = 0;
    copy_idcv(v41, v32);
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
    copy_idcv((unsigned __int8 *)v24, v41);
    ++*(_QWORD *)(a1 + 32);
    if ( v41[0] == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__p[0], v41);
    }
    else if ( v41[0] == 7 && __p[0] )
    {
      __p[1] = nullptr;
      qfree(__p[0]);
    }
    if ( v32[0] == 5 )
    {
      sub_1000380B0((unsigned __int8 **)v33[0], v32);
    }
    else if ( v32[0] == 7 && v33[0] )
    {
      v33[1] = nullptr;
      qfree(v33[0]);
    }
    v13 = nullptr;
  }
  v27 = sub_10003D3F0((_QWORD *)a1, v13, nullptr, a3);
  if ( v35[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)v36[0], v35);
  }
  else if ( v35[0] == 7 && v36[0] )
  {
    v36[1] = nullptr;
    qfree(v36[0]);
  }
  if ( v38[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)v39, v38);
  }
  else if ( v38[0] == 7 && v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v27;
}
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
