void __fastcall sub_55F130(char **a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, const void *a6)
{
  __int64 v6; // r13
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // r10d
  char *v12; // r15
  size_t v15; // rsi
  char *v16; // rax
  int v17; // r10d
  size_t v18; // rdx
  char *v19; // rdi
  int v20; // [rsp+Ch] [rbp-4Ch]
  int v21; // [rsp+Ch] [rbp-4Ch]
  int v22; // [rsp+Ch] [rbp-4Ch]
  int v23; // [rsp+10h] [rbp-48h]
  const void *v24; // [rsp+10h] [rbp-48h]
  const void *v25; // [rsp+18h] [rbp-40h]

  v6 = a3;
  v8 = a5 - (unsigned int)a4;
  v9 = a4 + a3;
  v10 = *((unsigned int *)a1 + 2);
  v11 = v10 + v8;
  if ( (unsigned int)v10 < v9 )
    sub_55D2B0(a1, a2, v10, a4, v8);
  v12 = *a1;
  if ( *((_DWORD *)a1 + 3) < v11 )
  {
    v25 = a6;
    v15 = a2 * v11;
    v23 = v8;
    v20 = v10 + v8;
    if ( v12 )
    {
      v16 = (char *)off_8C52A8(v12, v15);
      v17 = v20;
      LODWORD(v8) = v23;
      a6 = v25;
    }
    else
    {
      v16 = (char *)off_8C52B8(a2 * v11);
      a6 = v25;
      LODWORD(v8) = v23;
      v17 = v20;
    }
    v12 = v16;
    *a1 = v16;
    LODWORD(v10) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 3) = v17;
  }
  if ( v9 < (unsigned int)v10 )
  {
    v24 = a6;
    v22 = v8;
    memmove(&v12[a2 * (a5 + (unsigned int)v6)], &v12[a2 * v9], a2 * ((unsigned int)v10 - v9));
    a6 = v24;
    LODWORD(v8) = v22;
  }
  if ( a5 )
  {
    v21 = v8;
    v18 = a2 * a5;
    v19 = &v12[a2 * v6];
    if ( a6 )
      memcpy(v19, a6, v18);
    else
      memset(v19, 0, v18);
    LODWORD(v8) = v21;
  }
  *((_DWORD *)a1 + 2) += v8;
}
