/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FD50
// Address: 0x000000000046FD50

//----- (000000000046FD50) ----------------------------------------------------
unsigned __int64 sub_46FD50(const char *a1, ...)
{
  __m128 v1; // xmm1
  __m128 v2; // xmm2
  __m128 v3; // xmm3
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  const char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  const char *v13; // rsi
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v16; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B0h]
  __int64 v20; // [rsp+50h] [rbp-A8h]
  __int64 v21; // [rsp+58h] [rbp-A0h]
  __int64 v22; // [rsp+60h] [rbp-98h]
  __int64 v23; // [rsp+68h] [rbp-90h]
  __int128 v24; // [rsp+70h] [rbp-88h]
  __int128 v25; // [rsp+80h] [rbp-78h]
  __int128 v26; // [rsp+90h] [rbp-68h]
  __int128 v27; // [rsp+A0h] [rbp-58h]
  __int128 v28; // [rsp+B0h] [rbp-48h]
  __int128 v29; // [rsp+C0h] [rbp-38h]
  __int128 v30; // [rsp+D0h] [rbp-28h]
  double v31[3]; // [rsp+E0h] [rbp-18h]

  va_start(va, a1);
  v19 = va_arg(va, _QWORD);
  v20 = va_arg(va, _QWORD);
  v21 = va_arg(va, _QWORD);
  v22 = va_arg(va, _QWORD);
  v23 = va_arg(va, _QWORD);
  *(double *)&v24 = va_arg(va, double);
  *(double *)&v25 = va_arg(va, double);
  v1.m128_u64[0] = v25;
  *(double *)&v26 = va_arg(va, double);
  v2.m128_u64[0] = v26;
  *(double *)&v27 = va_arg(va, double);
  v3.m128_u64[0] = v27;
  *(double *)&v28 = va_arg(va, double);
  *(double *)&v29 = va_arg(va, double);
  *(double *)&v30 = va_arg(va, double);
  v4.m128_u64[0] = v30;
  v31[0] = va_arg(va, double);
  *(double *)v5.m128_u64 = v31[0];
  va_end(va);
  va_start(va, a1);
  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v16 = 0;
  sub_4171E0((__int64)&ptr, a1, (const __m128i *)va);
  v6 = s1;
  if ( (_QWORD)v16 )
    v6 = (const char *)ptr;
  sub_4724D0("%s\n", v6);
  v13 = s1;
  if ( (_QWORD)v16 )
    v13 = (const char *)ptr;
  sub_4240B0((int)"%s", (__int64)v13, v7, v8, v9, v10, (__m128)0LL, v1, v2, v3, v11, v12, v4, v5, (char)ptr);
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    j__free(ptr);
  }
  return v18 - __readfsqword(0x28u);
}
// 46FE47: variable 'v7' is possibly undefined
// 46FE47: variable 'v8' is possibly undefined
// 46FE47: variable 'v9' is possibly undefined
// 46FE47: variable 'v10' is possibly undefined
// 46FE47: variable 'v1' is possibly undefined
// 46FE47: variable 'v2' is possibly undefined
// 46FE47: variable 'v3' is possibly undefined
// 46FE47: variable 'v11' is possibly undefined
// 46FE47: variable 'v12' is possibly undefined
// 46FE47: variable 'v4' is possibly undefined
// 46FE47: variable 'v5' is possibly undefined
