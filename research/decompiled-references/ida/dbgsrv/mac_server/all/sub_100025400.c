/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025400
// Address: 0x0000000100025400

//----- (0000000100025400) ----------------------------------------------------
__int64 __fastcall sub_100025400(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  char *v3; // r14
  char *v4; // r15
  char *v5; // rax
  const char *v6; // r14
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r12
  void *v10; // rdi
  char *__s[2]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-60h]
  void *__src[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h]

  *(_OWORD *)__src = 0;
  v15 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = _s1;
  if ( (unsigned __int8)eval_expr(a2, -1, v2, (__int64)__src) )
    goto LABEL_24;
  *(_OWORD *)__s = 0;
  v13 = 0;
  __s[0] = (char *)qvector_reserve((__int64)__s, nullptr, 0xEu, 1u);
  __s[1] = (char *)14;
  strcpy(__s[0], "IDC_FAILURE: ");
  v3 = nullptr;
  if ( __src[1] )
    v3 = (char *)__src[1] - 1;
  if ( __src[1] > (void *)1 )
  {
    v4 = nullptr;
    if ( __s[1] )
      v4 = __s[1] - 1;
    v5 = __s[0];
    if ( (char *)v13 < &v3[(_QWORD)v4 + 1] )
    {
      v5 = (char *)qvector_reserve((__int64)__s, __s[0], (unsigned __int64)&v3[(_QWORD)v4 + 1], 1u);
      __s[0] = v5;
    }
    __s[1] = &v3[(_QWORD)v4 + 1];
    v5[(unsigned __int64)&v3[(_QWORD)v4]] = 0;
    memcpy(&__s[0][(unsigned __int64)v4], __src[0], (size_t)v3);
  }
  if ( !__s[1] )
  {
    v6 = _s1;
LABEL_17:
    v7 = strlen(v6);
    *(_BYTE *)a2 = 7;
    *(_OWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    if ( v7 )
    {
      v8 = v7;
      v9 = v7 + 1;
      if ( v7 == -1 )
      {
        v10 = nullptr;
      }
      else
      {
        v10 = qvector_reserve(a2 + 8, nullptr, v7 + 1, 1u);
        *(_QWORD *)(a2 + 8) = v10;
      }
      *(_QWORD *)(a2 + 16) = v9;
      memmove(v10, v6, v8);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v8) = 0;
    }
    goto LABEL_22;
  }
  v6 = __s[0];
  if ( __s[0] )
    goto LABEL_17;
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
LABEL_22:
  if ( __s[0] )
  {
    __s[1] = nullptr;
    qfree(__s[0]);
  }
LABEL_24:
  if ( __src[0] )
  {
    __src[1] = nullptr;
    qfree(__src[0]);
  }
  return 0;
}
