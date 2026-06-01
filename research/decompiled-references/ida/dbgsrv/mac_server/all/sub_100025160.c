/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025160
// Address: 0x0000000100025160

//----- (0000000100025160) ----------------------------------------------------
__int64 __fastcall sub_100025160(__int64 a1, __int64 a2)
{
  const char *v2; // rdi
  const char *v3; // r14
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r12
  void *v7; // rdi
  char *__s[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-40h]

  *(_OWORD *)__s = 0;
  v10 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = _s1;
  compile_idc_file(v2, (__int64)__s, 3);
  if ( __s[1] )
  {
    v3 = __s[0];
    if ( !__s[0] )
    {
      *(_BYTE *)a2 = 7;
      *(_OWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 24) = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v3 = _s1;
  }
  v4 = strlen(v3);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v4 )
  {
    v5 = v4;
    v6 = v4 + 1;
    if ( v4 == -1 )
    {
      v7 = nullptr;
    }
    else
    {
      v7 = qvector_reserve(a2 + 8, nullptr, v4 + 1, 1u);
      *(_QWORD *)(a2 + 8) = v7;
    }
    *(_QWORD *)(a2 + 16) = v6;
    memmove(v7, v3, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
  }
LABEL_13:
  if ( __s[0] )
  {
    __s[1] = nullptr;
    qfree(__s[0]);
  }
  return 0;
}
