/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439B00
// Address: 0x0000000000439B00

//----- (0000000000439B00) ----------------------------------------------------
char __fastcall sub_439B00(
        __int64 a1,
        __int64 a2,
        const char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char result; // al
  const char *v13; // rdi
  _BYTE *v14; // rax
  int v15; // edx
  double v16; // xmm4_8
  double v17; // xmm5_8
  size_t v18; // rbx
  void *v19; // rax
  void *v20; // rsi
  const char *v21; // [rsp+8h] [rbp-40h]
  char v22; // [rsp+8h] [rbp-40h]
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-30h]
  unsigned __int64 v25; // [rsp+28h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)sub_444A40((__m128i *)a1, a2, a3, 0, a4, a5, a6, a7, a8, a9, a10, a11) == 0;
  if ( *(_BYTE *)a2 == 7 )
  {
    v13 = s1;
    if ( *(_QWORD *)(a2 + 16) )
      v13 = *(const char **)(a2 + 8);
    v21 = a3;
    v14 = (_BYTE *)sub_439A80(v13);
    a2 = (__int64)v14;
    if ( !v14 )
    {
      sub_479EB0(0x5FCu);
      return 0;
    }
    a3 = v21;
    if ( *v14 != 5 )
      return (unsigned int)sub_444A40((__m128i *)a1, a2, a3, 0, a4, a5, a6, a7, a8, a9, a10, a11) == 0;
  }
  else if ( *(_BYTE *)a2 != 5 )
  {
    return (unsigned int)sub_444A40((__m128i *)a1, a2, a3, 0, a4, a5, a6, a7, a8, a9, a10, a11) == 0;
  }
  if ( a3 && *a3 )
    return (unsigned int)sub_444A40((__m128i *)a1, a2, a3, 0, a4, a5, a6, a7, a8, a9, a10, a11) == 0;
  ptr = nullptr;
  *(_OWORD *)n = 0;
  v15 = sub_43D3D0((__int64)&ptr, a2);
  result = 0;
  if ( !v15 )
  {
    sub_441540(a1, 0.0, a5, a6, a7, v16, v17, a10, a11);
    v18 = n[0];
    *(_BYTE *)a1 = 7;
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    if ( v18 )
    {
      v19 = sub_4814F0(v18);
      *(_QWORD *)(a1 + 8) = v19;
      v20 = ptr;
      *(_QWORD *)(a1 + 24) = v18;
      memcpy(v19, v20, v18);
      *(_QWORD *)(a1 + 16) = v18;
    }
    result = 1;
  }
  if ( ptr )
  {
    v22 = result;
    n[0] = 0;
    j__free(ptr);
    return v22;
  }
  return result;
}
// 439B2C: variable 'a8' is possibly undefined
// 439B2C: variable 'a9' is possibly undefined
// 439BF3: variable 'v16' is possibly undefined
// 439BF3: variable 'v17' is possibly undefined
