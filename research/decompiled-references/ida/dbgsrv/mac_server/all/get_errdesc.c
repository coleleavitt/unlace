/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_errdesc
// Address: 0x0000000100074760

//----- (0000000100074760) ----------------------------------------------------
__int64 __fastcall get_errdesc(char *__s, unsigned int a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rax
  __int64 v4; // r14
  size_t v5; // rax
  size_t v6; // r15
  unsigned __int64 v7; // r13
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  bool v11; // cf
  __int64 v12; // rax
  _BYTE *v13; // rax
  const char *v14; // rax
  const char *v15; // r15
  size_t v16; // r12
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rcx
  size_t v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v24; // [rsp+10h] [rbp-30h]

  v2 = a2;
  off_1000ACFB0();
  v4 = v3;
  v24 = v3 + 200;
  if ( __s && (v5 = strlen(__s)) != 0 )
  {
    v6 = v5;
    v7 = v5 + 1;
    v8 = *(void **)(v4 + 200);
    if ( *(_QWORD *)(v4 + 216) < v7 )
    {
      v8 = qvector_reserve(v24, *(void **)(v4 + 200), v7, 1u);
      *(_QWORD *)v24 = v8;
    }
    *(_QWORD *)(v4 + 208) = v7;
    memmove(v8, __s, v6);
    *(_BYTE *)(*(_QWORD *)(v4 + 200) + v6) = 0;
    v9 = *(_QWORD *)(v4 + 208);
    v2 = a2;
  }
  else
  {
    *(_QWORD *)(v4 + 208) = 0;
    v9 = 0;
  }
  v10 = 0;
  v11 = v9 == 0;
  v12 = v9 - 1;
  if ( !v11 )
    v10 = v12;
  v13 = *(_BYTE **)(v4 + 200);
  if ( *(_QWORD *)(v4 + 216) < (unsigned __int64)(v10 + 3) )
  {
    v13 = qvector_reserve(v24, *(void **)(v4 + 200), v10 + 3, 1u);
    *(_QWORD *)v24 = v13;
  }
  *(_QWORD *)(v4 + 208) = v10 + 3;
  v13[v10 + 2] = 0;
  *(_WORD *)(*(_QWORD *)(v4 + 200) + v10) = 8250;
  v14 = (const char *)j__qstrerror(v2);
  if ( v14 )
  {
    v15 = v14;
    v16 = strlen(v14);
    v17 = *(void **)(v4 + 200);
    v18 = *(_QWORD *)(v4 + 208);
    v19 = 0;
    v11 = v18 == 0;
    v20 = v18 - 1;
    if ( !v11 )
      v19 = v20;
    v21 = v16 + v19;
    v22 = v16 + v19 + 1;
    if ( *(_QWORD *)(v4 + 216) < v22 )
    {
      v17 = qvector_reserve(v24, v17, v16 + v19 + 1, 1u);
      v21 = v16 + v19;
      *(_QWORD *)v24 = v17;
    }
    *(_QWORD *)(v4 + 208) = v22;
    *((_BYTE *)v17 + v21) = 0;
    memmove((void *)(*(_QWORD *)(v4 + 200) + v19), v15, v16);
  }
  return *(_QWORD *)v24;
}
// 100074780: variable 'v3' is possibly undefined
// 100082E2E: using guessed type __int64 __fastcall j__qstrerror(_QWORD);
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
