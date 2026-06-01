char *__fastcall sub_EEFD10(
        __int64 a1,
        _QWORD *a2,
        const void *a3,
        const void *a4,
        const void *a5,
        int a6,
        int a7,
        int a8,
        const void *a9,
        unsigned int a10)
{
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r15
  char *v17; // rdi
  char *v18; // rdx
  __int64 v19; // rax
  char *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbp
  char *v23; // rdi
  char *result; // rax
  __int64 v25; // r12
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  const void *v30; // [rsp+10h] [rbp-48h]
  const void *v31; // [rsp+10h] [rbp-48h]
  const void *v32; // [rsp+10h] [rbp-48h]
  const void *v33; // [rsp+18h] [rbp-40h]

  v12 = (__int64)(a2 + 294);
  *(_DWORD *)(a1 + 16) = a6;
  v13 = (unsigned int)(a6 + a7);
  *(_DWORD *)(a1 + 20) = a7;
  *(_DWORD *)(a1 + 24) = a10;
  v14 = (unsigned int)(v13 + a8);
  *(_DWORD *)(a1 + 80) = a8;
  v15 = a2[294];
  v16 = 8 * v14;
  a2[304] += 8 * v14;
  v17 = (char *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v18 = &v17[8 * v14];
  if ( a2[295] >= (unsigned __int64)v18 && v15 )
  {
    a2[294] = v18;
  }
  else
  {
    v33 = a5;
    v31 = a3;
    v27 = sub_986170((__int64)(a2 + 294), 8 * v14, 8 * v14, 3, (__int64)a5, v14);
    a5 = v33;
    a3 = v31;
    v17 = (char *)v27;
  }
  *(_QWORD *)(a1 + 72) = v17;
  if ( v16 )
  {
    v30 = a5;
    memmove(v17, a3, v16);
    a5 = v30;
  }
  v19 = a2[294];
  a2[304] += v16;
  v20 = (char *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v20[v16] && v19 )
  {
    a2[294] = &v20[v16];
  }
  else
  {
    v32 = a5;
    v28 = sub_986170(v12, v16, v16, 3, (__int64)a5, v14);
    a5 = v32;
    v20 = (char *)v28;
  }
  *(_QWORD *)(a1 + 32) = v20;
  if ( v16 )
    memmove(v20, a5, v16);
  v21 = a2[294];
  v22 = 8 * v13;
  a2[304] += v22;
  v23 = (char *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v23[v22] && v21 )
    a2[294] = &v23[v22];
  else
    v23 = (char *)sub_986170(v12, v22, v22, 3, (__int64)a5, v14);
  *(_QWORD *)(a1 + 56) = v23;
  if ( v22 )
    memmove(v23, a4, v22);
  result = (char *)a2[294];
  v25 = 8LL * a10;
  a2[304] += v25;
  v26 = (char *)((unsigned __int64)(result + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v26[v25] && result )
  {
    a2[294] = &v26[v25];
  }
  else
  {
    result = (char *)sub_986170(v12, v25, v25, 3, (__int64)a5, v14);
    v26 = result;
  }
  *(_QWORD *)(a1 + 64) = v26;
  if ( v25 )
    return (char *)memmove(v26, a9, v25);
  return result;
}
