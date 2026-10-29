/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410010
// Address: 0x0000000000410010

//----- (0000000000410010) ----------------------------------------------------
__int64 __fastcall sub_410010(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  const char *v14; // rax
  void *v15; // rdi
  const char *v16; // rbp
  size_t v17; // rax
  __int64 v18; // r12
  size_t v19; // r13
  size_t v20; // r14
  void *v21; // rsi
  void *v22; // rax
  unsigned __int64 v23[11]; // [rsp+0h] [rbp-58h] BYREF

  v23[3] = __readfsqword(0x28u);
  result = 0;
  if ( a2 == 1 )
  {
    v23[0] = a3;
    v23[1] = a3 + a4;
    v14 = sub_47FEA0(v23, a3 + a4, 0, a5, a6, a7, a8, a9, a10, a11, a12);
    v15 = (void *)a1[163];
    v16 = v14;
    if ( v15 )
    {
      a1[164] = 0;
      j__free(v15);
      a1[163] = 0;
      a1[165] = 0;
    }
    if ( v16 )
    {
      v17 = strlen(v16);
      v18 = a1[164];
      v19 = v17;
      v20 = v17;
      if ( v18 )
      {
        --v18;
        v20 = v17 + v18;
      }
      v21 = (void *)a1[163];
      if ( a1[165] < v20 + 1 )
      {
        v22 = sub_481540((__int64)(a1 + 163), v21, v20 + 1, 1u);
        a1[163] = v22;
        v21 = v22;
      }
      a1[164] = v20 + 1;
      *((_BYTE *)v21 + v20) = 0;
      memmove((void *)(v18 + a1[163]), v16, v19);
    }
    return 1;
  }
  return result;
}
