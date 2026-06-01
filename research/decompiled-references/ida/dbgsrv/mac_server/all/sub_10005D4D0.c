/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D4D0
// Address: 0x000000010005D4D0

//----- (000000010005D4D0) ----------------------------------------------------
__int64 __fastcall sub_10005D4D0(__int64 a1, __int64 a2)
{
  char *v3; // r13
  const char *v4; // r15
  unsigned __int64 v5; // r12
  void **v6; // r15
  unsigned __int64 v7; // rcx
  char *v8; // rax
  char *v9; // r15
  const char *v10; // rdi
  void **v11; // r14
  unsigned __int8 v12; // r13
  __int64 v13; // r15
  bool v14; // cf
  __int64 v15; // r15
  _BYTE *v16; // rax
  void *v17; // rdi
  void *v18; // rdi
  char *__s1[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+10h] [rbp-40h]
  unsigned __int8 v22; // [rsp+1Fh] [rbp-31h] BYREF

  *(_OWORD *)__s1 = 0;
  v21 = 0;
  sub_1000517A0((__int64)__s1, (_QWORD *)a2, *(_QWORD **)(a1 + 16));
  v3 = __s1[1];
  if ( __s1[1] )
  {
    v4 = __s1[0];
    if ( !strcmp(__s1[0], ".debug_info") )
    {
      *(_BYTE *)(a1 + 24) = 1;
      goto LABEL_31;
    }
  }
  else
  {
    v4 = _s1;
  }
  if ( !strcmp(v4, ".note.gnu.build-id") && (v5 = *(unsigned int *)(a2 + 16), v5 <= 0xFFFF) )
  {
    v6 = (void **)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 >= v5 )
    {
      if ( v7 != v5 )
      {
        v22 = 0;
        sub_10001CE90(a1 + 32, v5, &v22);
      }
    }
    else
    {
      v8 = *(char **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v5 )
      {
        v8 = (char *)qvector_reserve(a1 + 32, *(void **)(a1 + 32), *(unsigned int *)(a2 + 16), 1u);
        *(_QWORD *)(a1 + 32) = v8;
        v7 = *(_QWORD *)(a1 + 40);
      }
      __bzero(&v8[v7], v5 - v7);
      *(_QWORD *)(a1 + 40) = v5;
    }
    qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
    if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 32), *(unsigned int *)(a2 + 16)) != *(_DWORD *)(a2 + 16) )
    {
      v18 = *v6;
      if ( *v6 )
      {
        *(_QWORD *)(a1 + 40) = 0;
        qfree(v18);
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 48) = 0;
      }
    }
  }
  else
  {
    v9 = __s1[0];
    v10 = _s1;
    if ( v3 )
      v10 = __s1[0];
    if ( strcmp(v10, ".gnu_debuglink") )
    {
      if ( !v9 )
        return 0;
      goto LABEL_32;
    }
    qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
    v11 = (void **)(a1 + 56);
    while ( qlread(*(_QWORD *)(a1 + 8), &v22, 1) == 1 )
    {
      v12 = v22;
      if ( !v22 )
        goto LABEL_31;
      v13 = *(_QWORD *)(a1 + 64);
      v14 = v13 == 0;
      v15 = v13 - 1;
      if ( v14 )
        v15 = 0;
      v16 = *(_BYTE **)(a1 + 56);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v15 + 2) )
      {
        v16 = qvector_reserve(a1 + 56, *(void **)(a1 + 56), v15 + 2, 1u);
        *v11 = v16;
      }
      *(_QWORD *)(a1 + 64) = v15 + 2;
      v16[v15] = v12;
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + v15 + 1) = 0;
    }
    v17 = *v11;
    if ( *v11 )
    {
      *(_QWORD *)(a1 + 64) = 0;
      qfree(v17);
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }
  }
LABEL_31:
  v9 = __s1[0];
  if ( __s1[0] )
  {
LABEL_32:
    __s1[1] = nullptr;
    qfree(v9);
  }
  return 0;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
