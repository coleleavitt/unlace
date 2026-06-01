/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483F0
// Address: 0x00000000000483F0

//----- (00000000000483F0) ----------------------------------------------------
__int64 __fastcall sub_483F0(_QWORD *a1, int a2, char *a3, __int64 a4)
{
  __int64 result; // rax
  const char *v6; // r14
  void *v7; // rdi
  char **v8; // r13
  size_t v9; // r15
  __int64 v10; // rbx
  size_t v11; // rcx
  unsigned __int64 v12; // rbp
  char *v13; // rax
  const void *v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[2] = (const void *)__readfsqword(0x28u);
  result = 0;
  if ( a2 == 1 )
  {
    v14[0] = a3;
    v14[1] = &a3[a4];
    v6 = unpack_ds(v14, (unsigned __int64)&a3[a4], 0);
    v7 = (void *)a1[138];
    if ( v7 )
    {
      a1[139] = 0;
      qfree(v7);
      a1[138] = 0;
      a1[140] = 0;
    }
    if ( v6 )
    {
      v8 = (char **)(a1 + 138);
      v9 = strlen(v6);
      v10 = a1[139];
      if ( v10 )
        --v10;
      v11 = v10 + v9;
      v12 = v10 + v9 + 1;
      if ( a1[140] >= v12 )
      {
        v13 = *v8;
      }
      else
      {
        v13 = (char *)qvector_reserve((__int64)(a1 + 138), *v8, v10 + v9 + 1, 1u);
        v11 = v10 + v9;
        *v8 = v13;
      }
      a1[139] = v12;
      v13[v11] = 0;
      memmove((void *)(a1[138] + v10), v6, v9);
    }
    return 1;
  }
  return result;
}
