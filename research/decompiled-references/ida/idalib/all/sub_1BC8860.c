__int64 __fastcall sub_1BC8860(__int64 a1, __int64 a2, unsigned __int64 a3, const void **a4, __int64 a5, double a6)
{
  __int64 v8; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  size_t v18; // r8
  const void *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbp
  char *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  const void *v28; // [rsp+0h] [rbp-48h]
  size_t v29; // [rsp+8h] [rbp-40h]

  v8 = a2;
  v11 = (unsigned __int64)a4[1] + 1;
  if ( v11 > *(unsigned int *)(a5 + 12) )
  {
    a2 = a5 + 16;
    sub_2237220(a5, a5 + 16, v11, 8);
  }
  v12 = a3;
  v13 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v26 = sub_F68450(v13, a2, v11, (__int64)a4, a5);
    v27 = sub_C09D40(*(_QWORD **)(a1 + 248), a3, 5, v26, 1, 0, 0, 0, 0);
    v14 = *(unsigned int *)(a5 + 8);
    v12 = v27;
    v15 = v14 + 1;
    if ( v14 + 1 <= (unsigned __int64)*(unsigned int *)(a5 + 12) )
      goto LABEL_5;
  }
  else
  {
    v14 = *(unsigned int *)(a5 + 8);
    v15 = v14 + 1;
    if ( v14 + 1 <= (unsigned __int64)*(unsigned int *)(a5 + 12) )
      goto LABEL_5;
  }
  sub_2237220(a5, a5 + 16, v15, 8);
  v14 = *(unsigned int *)(a5 + 8);
LABEL_5:
  *(_QWORD *)(*(_QWORD *)a5 + 8 * v14) = v12;
  v16 = (__int64)a4[1];
  v17 = *(unsigned int *)(a5 + 12);
  v18 = 8 * v16;
  v19 = *a4;
  v20 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  v21 = (8 * v16) >> 3;
  *(_DWORD *)(a5 + 8) = v20;
  if ( v21 + v20 > v17 )
  {
    v16 = a5 + 16;
    v28 = v19;
    v29 = v18;
    sub_2237220(a5, a5 + 16, v21 + v20, 8);
    v20 = *(unsigned int *)(a5 + 8);
    v18 = v29;
    v19 = v28;
  }
  v22 = *(char **)a5;
  if ( v18 )
  {
    v16 = (__int64)v19;
    memcpy(&v22[8 * v20], v19, v18);
    v22 = *(char **)a5;
    LODWORD(v20) = *(_DWORD *)(a5 + 8);
  }
  v23 = v21 + v20;
  *(_DWORD *)(a5 + 8) = v23;
  *a4 = v22;
  a4[1] = (const void *)v23;
  v24 = sub_EEB7E0(a3, v16, a6);
  return sub_1A31B00((_QWORD *)a1, v8, v24);
}
