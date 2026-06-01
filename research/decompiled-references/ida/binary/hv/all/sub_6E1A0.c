unsigned __int64 sub_6E1A0(__int64 a1, ...)
{
  __m128 v1; // xmm1
  __m128 v2; // xmm2
  __m128 v3; // xmm3
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  const char *v17; // rsi
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v20; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B0h]
  __int64 v24; // [rsp+50h] [rbp-A8h]
  __int64 v25; // [rsp+58h] [rbp-A0h]
  __int64 v26; // [rsp+60h] [rbp-98h]
  __int64 v27; // [rsp+68h] [rbp-90h]
  __int128 v28; // [rsp+70h] [rbp-88h]
  __int128 v29; // [rsp+80h] [rbp-78h]
  __int128 v30; // [rsp+90h] [rbp-68h]
  __int128 v31; // [rsp+A0h] [rbp-58h]
  __int128 v32; // [rsp+B0h] [rbp-48h]
  __int128 v33; // [rsp+C0h] [rbp-38h]
  __int128 v34; // [rsp+D0h] [rbp-28h]
  double v35[3]; // [rsp+E0h] [rbp-18h]

  va_start(va, a1);
  v23 = va_arg(va, _QWORD);
  v24 = va_arg(va, _QWORD);
  v25 = va_arg(va, _QWORD);
  v26 = va_arg(va, _QWORD);
  v27 = va_arg(va, _QWORD);
  *(double *)&v28 = va_arg(va, double);
  *(double *)&v29 = va_arg(va, double);
  v1.m128_u64[0] = v29;
  *(double *)&v30 = va_arg(va, double);
  v2.m128_u64[0] = v30;
  *(double *)&v31 = va_arg(va, double);
  v3.m128_u64[0] = v31;
  *(double *)&v32 = va_arg(va, double);
  *(double *)&v33 = va_arg(va, double);
  *(double *)&v34 = va_arg(va, double);
  v4.m128_u64[0] = v34;
  v35[0] = va_arg(va, double);
  *(double *)v5.m128_u64 = v35[0];
  va_end(va);
  va_start(va, a1);
  v22 = __readfsqword(0x28u);
  ptr = nullptr;
  v20 = 0;
  sub_17CB0((char **)&ptr);
  v10 = haystack;
  if ( (_QWORD)v20 )
    LODWORD(v10) = (_DWORD)ptr;
  sub_708D0((unsigned int)"%s\n", (_DWORD)v10, v6, v7, v8, v9);
  v17 = haystack;
  if ( (_QWORD)v20 )
    v17 = (const char *)ptr;
  sub_2A490((int)"%s", (__int64)v17, v11, v12, v13, v14, (__m128)0LL, v1, v2, v3, v15, v16, v4, v5, (char)ptr);
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    j__free(ptr);
  }
  return v22 - __readfsqword(0x28u);
}

