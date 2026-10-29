/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000666B0
// Address: 0x00000001000666B0

//----- (00000001000666B0) ----------------------------------------------------
_QWORD *__fastcall sub_1000666B0(int a1, unsigned __int64 *a2)
{
  __int64 v3; // r15
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  __int64 v6; // r14
  const char *v7; // r12
  unsigned __int64 v8; // r13
  _BYTE *v9; // rax
  const char *v10; // r15
  bool v11; // zf
  size_t v12; // rax
  size_t v13; // r13
  unsigned __int64 v14; // r15
  _QWORD *v15; // rcx
  void *v16; // rax
  _QWORD *v17; // rdx
  const char *v18; // rax
  _BYTE *v19; // rcx
  size_t v20; // rax
  size_t v21; // r12
  unsigned __int64 v22; // r13
  void *v23; // rax
  const char *v24; // rsi
  _QWORD *v25; // r15
  _QWORD *v27; // [rsp+10h] [rbp-40h]
  _QWORD *v28; // [rsp+20h] [rbp-30h]

  if ( a1 <= 0 )
    return nullptr;
  v3 = 56LL * (unsigned int)a1;
  v4 = operator new[](v3 + 8);
  *v4 = (unsigned int)a1;
  v5 = v4 + 1;
  __bzero(v4 + 1, 56 * ((v3 - 56) / 0x38uLL) + 56);
  v6 = 0;
  v27 = v5;
  do
  {
    v28 = &v5[7 * v6];
    *(_DWORD *)v28 = unpack_dd(a2, a2[1]);
    *((_DWORD *)v28 + 1) = unpack_dd(a2, a2[1]);
    v7 = (const char *)*a2;
    v8 = a2[1];
    v9 = (_BYTE *)*a2;
    do
    {
      if ( (unsigned __int64)v9 >= v8 )
      {
        v10 = (const char *)*a2;
LABEL_14:
        v17 = v28;
        v28[2] = 0;
        goto LABEL_15;
      }
      v10 = v9 + 1;
      v11 = *v9++ == 0;
    }
    while ( !v11 );
    *a2 = (unsigned __int64)v10;
    if ( !v7 )
      goto LABEL_14;
    v12 = strlen(v7);
    if ( !v12 )
      goto LABEL_14;
    v13 = v12;
    v14 = v12 + 1;
    v15 = v28;
    v16 = (void *)v28[1];
    if ( v28[3] < v14 )
    {
      v16 = qvector_reserve((__int64)(v28 + 1), v16, v14, 1u);
      v15 = v28;
      v28[1] = v16;
    }
    v15[2] = v14;
    memmove(v16, v7, v13);
    v17 = v28;
    *(_BYTE *)(v28[1] + v13) = 0;
    v10 = (const char *)*a2;
    v8 = a2[1];
LABEL_15:
    v18 = v10;
    do
    {
      if ( (unsigned __int64)v18 >= v8 )
        goto LABEL_3;
      v19 = v18 + 1;
      v11 = *v18++ == 0;
    }
    while ( !v11 );
    *a2 = (unsigned __int64)v19;
    if ( !v10 || (v20 = strlen(v10), v17 = v28, !v20) )
    {
LABEL_3:
      v17[5] = 0;
      goto LABEL_4;
    }
    v21 = v20;
    v22 = v20 + 1;
    v23 = (void *)v28[4];
    if ( v28[6] < v22 )
    {
      v23 = qvector_reserve((__int64)(v28 + 4), v23, v22, 1u);
      v17 = v28;
      v28[4] = v23;
    }
    v17[5] = v22;
    v24 = v10;
    v25 = v17;
    memmove(v23, v24, v21);
    *(_BYTE *)(v25[4] + v21) = 0;
LABEL_4:
    ++v6;
    v5 = v27;
  }
  while ( v6 != a1 );
  return v5;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
