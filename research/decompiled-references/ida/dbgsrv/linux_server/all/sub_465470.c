/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465470
// Address: 0x0000000000465470

//----- (0000000000465470) ----------------------------------------------------
__int64 __fastcall sub_465470(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // edx
  __int64 result; // rax
  const char *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  const char *v17; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v9 = *(_DWORD *)(a1 + 24);
  v20 = __readfsqword(0x28u);
  if ( v9 > 0xB )
  {
    if ( v9 != 18 )
      return 0;
  }
  else if ( v9 <= 9 )
  {
    return 0;
  }
  v11 = *(const char **)a1;
  result = sub_463E10(a1 + 28, *(const char **)a1, v9, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( !(_BYTE)result )
  {
    ptr = nullptr;
    v19 = 0;
    sub_4653C0(a1, (__int64)&ptr);
    if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
    {
      v17 = s1;
      if ( (_QWORD)v19 )
        v17 = (const char *)ptr;
      sub_410EA0(
        (int)"Couldn't find UUID/debug ID \"%s\" for file: %s\n",
        (__int64)v17,
        (__int64)v11,
        v12,
        v13,
        v14,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v15,
        v16,
        a8,
        a9,
        (char)ptr);
    }
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      j__free(ptr);
    }
    return 0;
  }
  return result;
}
// 465523: variable 'v12' is possibly undefined
// 465523: variable 'v13' is possibly undefined
// 465523: variable 'v14' is possibly undefined
// 465523: variable 'v15' is possibly undefined
// 465523: variable 'v16' is possibly undefined
// 4C8250: using guessed type __int64 qword_4C8250;
