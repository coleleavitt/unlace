/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A60B0
// Address: 0x00000000000A60B0

//----- (00000000000A60B0) ----------------------------------------------------
_QWORD *__fastcall sub_A60B0(int a1, unsigned __int64 *a2)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbp
  bool v5; // al
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbp
  char *v12; // rdi
  size_t v13; // rbp
  char *v14; // rdi
  size_t v15; // rbp
  __int64 v16; // r13
  const char *v17; // r15
  _BYTE *v18; // rax
  bool v19; // zf
  size_t v20; // rax
  char **v21; // rdx
  size_t v22; // rbp
  const char *v23; // r15
  _BYTE *v24; // rax
  size_t v25; // rax
  char **v26; // rdx
  size_t v27; // rbp
  char **v29; // [rsp+0h] [rbp-48h]
  char **v30; // [rsp+0h] [rbp-48h]
  size_t v31; // [rsp+8h] [rbp-40h]
  size_t v32; // [rsp+8h] [rbp-40h]
  __int64 v33; // [rsp+10h] [rbp-38h]

  if ( a1 <= 0 )
    return nullptr;
  v3 = a1;
  v4 = 56LL * a1;
  v5 = (0x38 * (unsigned __int128)(unsigned __int64)a1) >> 64 != 0;
  v6 = v4 + 8;
  v7 = -1;
  if ( v4 >= 0xFFFFFFFFFFFFFFF8LL )
    v6 = -1;
  if ( !v5 )
    v7 = v6;
  v8 = (_QWORD *)operator new[](v7);
  *v8 = v3;
  v9 = v8 + 1;
  v10 = 0;
  memset(v8 + 1, 0, 56 * ((v4 - 56) / 0x38) + 56);
  v11 = (unsigned int)a1;
  v33 = (unsigned int)a1;
  do
  {
    v16 = 7 * v10;
    LODWORD(v9[7 * v10]) = unpack_dd(a2, a2[1]);
    HIDWORD(v9[7 * v10]) = unpack_dd(a2, a2[1]);
    v17 = (const char *)*a2;
    v18 = (_BYTE *)*a2;
    do
    {
      if ( (unsigned __int64)v18 >= a2[1] )
        goto LABEL_18;
      v19 = *v18++ == 0;
    }
    while ( !v19 );
    *a2 = (unsigned __int64)v18;
    if ( !v17 || (v20 = strlen(v17)) == 0 )
    {
LABEL_18:
      v9[v16 + 2] = 0;
      goto LABEL_19;
    }
    v21 = (char **)&v9[v16 + 1];
    v22 = v20 + 1;
    v29 = v21;
    if ( v9[v16 + 3] >= v20 + 1 )
    {
      v12 = *v21;
    }
    else
    {
      v31 = v20;
      v12 = (char *)qvector_reserve((__int64)&v9[v16 + 1], *v21, v20 + 1, 1u);
      v20 = v31;
      *v29 = v12;
    }
    v9[v16 + 2] = v22;
    v13 = v20;
    memmove(v12, v17, v20);
    (*v29)[v13] = 0;
    v11 = v33;
LABEL_19:
    v23 = (const char *)*a2;
    v24 = (_BYTE *)*a2;
    do
    {
      if ( (unsigned __int64)v24 >= a2[1] )
        goto LABEL_26;
      v19 = *v24++ == 0;
    }
    while ( !v19 );
    *a2 = (unsigned __int64)v24;
    if ( !v23 || (v25 = strlen(v23)) == 0 )
    {
LABEL_26:
      v9[v16 + 5] = 0;
      goto LABEL_27;
    }
    v26 = (char **)&v9[v16 + 4];
    v27 = v25 + 1;
    v30 = v26;
    if ( v9[v16 + 6] >= v25 + 1 )
    {
      v14 = *v26;
    }
    else
    {
      v32 = v25;
      v14 = (char *)qvector_reserve((__int64)&v9[v16 + 4], *v26, v25 + 1, 1u);
      v25 = v32;
      *v30 = v14;
    }
    v9[v16 + 5] = v27;
    v15 = v25;
    memmove(v14, v23, v25);
    (*v30)[v15] = 0;
    v11 = v33;
LABEL_27:
    ++v10;
  }
  while ( v10 != v11 );
  return v9;
}
