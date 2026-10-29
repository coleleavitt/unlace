/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_errdesc
// Address: 0x00000000000B74F0

//----- (00000000000B74F0) ----------------------------------------------------
__int64 __fastcall get_errdesc(void *src, unsigned int a2)
{
  unsigned int v2; // r14d
  size_t v3; // rax
  size_t v4; // r15
  unsigned __int64 v5; // r14
  _QWORD *address; // rax
  char *v7; // r12
  _QWORD *v8; // r13
  _QWORD *v9; // rbp
  size_t v10; // r15
  _QWORD *v11; // rax
  char *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  const char *v18; // rax
  const char *v19; // r12
  size_t v20; // r14
  _QWORD *v21; // rax
  char *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rbp
  size_t v25; // rbx
  unsigned __int64 v26; // r13
  _QWORD *v27; // rbx
  _QWORD *v28; // rax

  v2 = a2;
  if ( src && (v3 = strlen((const char *)src)) != 0 )
  {
    v4 = v3;
    v5 = v3 + 1;
    address = _emutls_get_address((unsigned __int64 *)qword_155628);
    v7 = (char *)address[25];
    if ( address[27] < v5 )
    {
      v8 = _emutls_get_address((unsigned __int64 *)qword_155628);
      v7 = (char *)qvector_reserve((__int64)(v8 + 25), v7, v5, 1u);
      v8[25] = v7;
    }
    v9 = _emutls_get_address((unsigned __int64 *)qword_155628);
    v9[26] = v5;
    memmove(v7, src, v4);
    *(_BYTE *)(v9[25] + v4) = 0;
    v2 = a2;
  }
  else
  {
    _emutls_get_address((unsigned __int64 *)qword_155628)[26] = 0;
  }
  v10 = __strlen_chk(": ", 3);
  v11 = _emutls_get_address((unsigned __int64 *)qword_155628);
  v12 = (char *)v11[25];
  v13 = v11[26];
  v14 = v13 - 1;
  if ( !v13 )
    v14 = 0;
  v15 = v10 + v14 + 1;
  if ( v11[27] < v15 )
  {
    v16 = _emutls_get_address((unsigned __int64 *)qword_155628);
    v12 = (char *)qvector_reserve((__int64)(v16 + 25), v12, v10 + v14 + 1, 1u);
    v16[25] = v12;
    v2 = a2;
  }
  v17 = _emutls_get_address((unsigned __int64 *)qword_155628);
  v17[26] = v15;
  v12[v10 + v14] = 0;
  memmove((void *)(v17[25] + v14), ": ", v10);
  v18 = qstrerror(v2);
  if ( v18 )
  {
    v19 = v18;
    v20 = strlen(v18);
    v21 = _emutls_get_address((unsigned __int64 *)qword_155628);
    v22 = (char *)v21[25];
    v23 = v21[26];
    v24 = v23 - 1;
    if ( !v23 )
      v24 = 0;
    v25 = v20 + v24;
    v26 = v20 + v24 + 1;
    if ( v21[27] < v26 )
    {
      v27 = _emutls_get_address((unsigned __int64 *)qword_155628);
      v22 = (char *)qvector_reserve((__int64)(v27 + 25), v22, v20 + v24 + 1, 1u);
      v27[25] = v22;
      v25 = v20 + v24;
    }
    v28 = _emutls_get_address((unsigned __int64 *)qword_155628);
    v28[26] = v26;
    v22[v25] = 0;
    memmove((void *)(v28[25] + v24), v19, v20);
  }
  return _emutls_get_address((unsigned __int64 *)qword_155628)[25];
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 155628: using guessed type __int64 qword_155628[5];
