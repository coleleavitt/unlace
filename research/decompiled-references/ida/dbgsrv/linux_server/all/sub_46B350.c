/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B350
// Address: 0x000000000046B350

//----- (000000000046B350) ----------------------------------------------------
unsigned __int8 *__fastcall sub_46B350(
        __int64 a1,
        unsigned __int8 a2,
        __int64 *a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  unsigned __int8 *v20; // rax
  __int64 v21; // rdx
  unsigned __int8 *v22; // rbx
  unsigned __int8 v23; // al
  __int64 (__fastcall *v24)(); // rax
  void *v26; // rdi
  void *v27; // r15
  void *v28; // rdi
  double (__fastcall *v29)(int, __int64, __int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, char); // rdx
  const char *v30; // rsi
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v33; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( a3[1] )
    {
      if ( (unsigned int)sub_46F530((__int64 *)a1, a3) )
        break;
      if ( (a4 & 1) != 0 )
        goto LABEL_12;
      if ( *(_BYTE *)(*a3 + 4) == 52 )
        sub_481AE0(1);
    }
    v20 = (unsigned __int8 *)sub_46FEA0(a1, a2);
    v22 = v20;
    if ( !v20 )
      break;
    v23 = v20[4];
    if ( v23 == 2 )
    {
      sub_45C4B0(
        (_BYTE *)a1,
        "rpc: no remote memory",
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        *(double *)a8.m128_u64,
        *(double *)v18.m128_u64,
        *(double *)v19.m128_u64,
        *(double *)a11.m128_u64,
        *(double *)a12.m128_u64);
      goto LABEL_11;
    }
    if ( v23 <= 2u )
    {
      if ( !v23 )
        goto LABEL_13;
      sub_45C4B0(
        (_BYTE *)a1,
        "rpc: remote did not understand our request",
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        *(double *)a8.m128_u64,
        *(double *)v18.m128_u64,
        *(double *)v19.m128_u64,
        *(double *)a11.m128_u64,
        *(double *)a12.m128_u64);
      goto LABEL_11;
    }
    if ( v23 == 6 )
    {
      *(double *)a5.m128_u64 = sub_410EA0(
                                 (int)"rpc: user cancelled the operation\n",
                                 a2,
                                 v21,
                                 v15,
                                 v16,
                                 v17,
                                 a5,
                                 a6,
                                 a7,
                                 a8,
                                 v18,
                                 v19,
                                 a11,
                                 a12,
                                 v31.m128i_i8[0]);
LABEL_11:
      j__free(v22);
LABEL_12:
      v22 = nullptr;
      goto LABEL_13;
    }
    if ( !*(_BYTE *)(a1 + 69) )
    {
      sub_4724D0(
        "Exploit packet has been detected and ignored\n",
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        *(double *)a8.m128_u64,
        *(double *)v18.m128_u64,
        *(double *)v19.m128_u64,
        *(double *)a11.m128_u64,
        *(double *)a12.m128_u64);
      goto LABEL_11;
    }
    (*(void (__fastcall **)(void **, __int64, unsigned __int8 *, double, double, double, double, double, double, double, double))(*(_QWORD *)a1 + 56LL))(
      &ptr,
      a1,
      v22,
      *(double *)a5.m128_u64,
      *(double *)a6.m128_u64,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64,
      *(double *)v18.m128_u64,
      *(double *)v19.m128_u64,
      *(double *)a11.m128_u64,
      *(double *)a12.m128_u64);
    v26 = (void *)*a3;
    a5 = 0;
    v27 = ptr;
    ptr = nullptr;
    a6 = (__m128)_mm_loadu_si128(&v33);
    v33 = 0;
    if ( v26 )
    {
      a3[1] = 0;
      v31 = (__m128i)a6;
      j__free(v26);
      a6 = (__m128)_mm_load_si128(&v31);
      v28 = ptr;
      *a3 = (__int64)v27;
      *(__m128 *)(a3 + 1) = a6;
      if ( v28 )
      {
        v33.m128i_i64[0] = 0;
        j__free(v28);
      }
    }
    else
    {
      *a3 = (__int64)v27;
      *(__m128 *)(a3 + 1) = a6;
    }
    j__free(v22);
  }
  v29 = sub_410EA0;
  if ( !*(_BYTE *)(a1 + 68) )
    v29 = (double (__fastcall *)(int, __int64, __int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, char))sub_4724D0;
  v30 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v30 = *(const char **)(a1 + 16);
  v22 = nullptr;
  *(double *)a5.m128_u64 = v29(
                             (int)"%s\n",
                             (__int64)v30,
                             (__int64)v29,
                             v15,
                             v16,
                             v17,
                             a5,
                             a6,
                             a7,
                             a8,
                             v18,
                             v19,
                             a11,
                             a12,
                             v31.m128i_i8[0]);
LABEL_13:
  v24 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 64LL);
  if ( v24 != nullsub_11 )
    ((void (__fastcall *)(__int64, unsigned __int8 *, double, double, double, double, double, double, double, double))v24)(
      a1,
      v22,
      *(double *)a5.m128_u64,
      *(double *)a6.m128_u64,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64,
      *(double *)v18.m128_u64,
      *(double *)v19.m128_u64,
      *(double *)a11.m128_u64,
      *(double *)a12.m128_u64);
  return v22;
}
// 46B3DD: variable 'v18' is possibly undefined
// 46B3DD: variable 'v19' is possibly undefined
// 46B43D: variable 'v21' is possibly undefined
// 46B43D: variable 'v15' is possibly undefined
// 46B43D: variable 'v16' is possibly undefined
// 46B43D: variable 'v17' is possibly undefined
// 45B190: using guessed type __int64 __fastcall nullsub_11();
