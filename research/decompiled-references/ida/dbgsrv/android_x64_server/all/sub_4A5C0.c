/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5C0
// Address: 0x000000000004A5C0

//----- (000000000004A5C0) ----------------------------------------------------
__int64 __fastcall sub_4A5C0(__int64 a1, __int64 a2, char *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  char *v8; // rax
  _QWORD *v9; // rbx
  _BYTE *v10; // r12
  char *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // r13
  void **v16; // rbx
  void **v17; // r14
  void *v18; // rax
  void **v19; // rax
  char *v20; // r12
  __int64 v21; // rax
  __int64 *v22; // rsi
  char *v23; // rbx
  size_t v24; // rax
  size_t v25; // r14
  char **v26; // r13
  size_t v27; // rbp
  char *v28; // rdi
  _BYTE *v30; // [rsp+8h] [rbp-40h] BYREF
  char *s; // [rsp+10h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = **(_QWORD **)(a1 + 24) + a2;
  if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v8 = *(char **)v5;
  }
  else
  {
    v8 = (char *)qvector_reserve(*(_QWORD *)(a1 + 32), *(char **)v5, v6 + 1, 8u);
    *(_QWORD *)v5 = v8;
    v6 = *(_QWORD *)(v5 + 8);
  }
  *(_QWORD *)&v8[8 * v6] = v7;
  ++*(_QWORD *)(v5 + 8);
  v9 = *(_QWORD **)(a1 + 32);
  v10 = qstrdup(a3);
  v30 = v10;
  v11 = (char *)v9[3];
  v12 = v9[4];
  v13 = v9[5];
  v14 = v12 + 1;
  if ( v11 > (char *)&v30 || &v11[8 * v13] <= (char *)&v30 )
  {
    if ( v13 < v14 )
    {
      v11 = (char *)qvector_reserve((__int64)(v9 + 3), v11, v14, 8u);
      v9[3] = v11;
      v12 = v9[4];
      v10 = v30;
    }
  }
  else if ( v13 < v14 )
  {
    v11 = (char *)qvector_reserve((__int64)(v9 + 3), v11, v14, 8u);
    v9[3] = v11;
    v12 = v9[4];
  }
  s = a3;
  *(_QWORD *)&v11[8 * v12] = v10;
  ++v9[4];
  v15 = *(_QWORD *)(a1 + 24);
  v16 = *(void ***)(v15 + 72);
  if ( v16 )
  {
    v17 = (void **)(v15 + 72);
    while ( 1 )
    {
      v18 = v16[4];
      if ( v7 >= (unsigned __int64)v18 )
      {
        if ( (unsigned __int64)v18 >= v7 )
          goto LABEL_21;
        v17 = v16 + 1;
        v19 = (void **)v16[1];
        if ( !v19 )
          goto LABEL_21;
      }
      else
      {
        v19 = (void **)*v16;
        v17 = v16;
        if ( !*v16 )
          goto LABEL_20;
      }
      v16 = v19;
    }
  }
  v16 = (void **)(v15 + 72);
LABEL_20:
  v17 = v16;
LABEL_21:
  v20 = (char *)*v17;
  if ( !*v17 )
  {
    v20 = (char *)operator new(0x40u);
    *((_QWORD *)v20 + 4) = v7;
    *(_OWORD *)(v20 + 40) = 0;
    *((_QWORD *)v20 + 7) = 0;
    *(_OWORD *)v20 = 0;
    *((_QWORD *)v20 + 2) = v16;
    *v17 = v20;
    v21 = **(_QWORD **)(v15 + 64);
    if ( v21 )
    {
      *(_QWORD *)(v15 + 64) = v21;
      v22 = (__int64 *)*v17;
    }
    else
    {
      v22 = (__int64 *)v20;
    }
    sub_4A450(*(__int64 **)(v15 + 72), v22);
    ++*(_QWORD *)(v15 + 80);
  }
  v23 = s;
  if ( s && (v24 = strlen(s)) != 0 )
  {
    v25 = v24;
    v26 = (char **)(v20 + 40);
    v27 = v24 + 1;
    if ( *((_QWORD *)v20 + 7) >= v24 + 1 )
    {
      v28 = *v26;
    }
    else
    {
      v28 = (char *)qvector_reserve((__int64)(v20 + 40), *v26, v24 + 1, 1u);
      *v26 = v28;
    }
    *((_QWORD *)v20 + 6) = v27;
    memmove(v28, v23, v25);
    *(_BYTE *)(*((_QWORD *)v20 + 5) + v25) = 0;
  }
  else
  {
    *((_QWORD *)v20 + 6) = 0;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 10000 * (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) / 0x2710uLL) )
    sub_391F0(*(_QWORD *)(a1 + 16), (char *)&byte_EB522);
  return 0;
}
