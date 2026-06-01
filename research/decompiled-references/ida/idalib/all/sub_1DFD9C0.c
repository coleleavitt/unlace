__int64 __fastcall sub_1DFD9C0(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8,
        __m128i a9)
{
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64 *); // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  unsigned int v18; // edx
  unsigned int v19; // r15d
  __int64 result; // rax
  __int64 v21; // [rsp+0h] [rbp-E8h]
  unsigned __int8 v22; // [rsp+0h] [rbp-E8h]
  int v23; // [rsp+8h] [rbp-E0h]
  unsigned int v24; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v25; // [rsp+10h] [rbp-D8h]
  __int64 v26; // [rsp+18h] [rbp-D0h]
  __int64 v27; // [rsp+20h] [rbp-C8h]
  void *ptr[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-A8h] BYREF

  v12 = *a3;
  v24 = a2;
  v13 = *(__int64 (__fastcall **)(__int64 *))(v12 + 32);
  if ( (char *)v13 == (char *)sub_A01140 )
    v14 = sub_B70A60((__int64)a3);
  else
    v14 = v13(a3);
  if ( *(char *)(v14 + 28) < 0 )
    return 1;
  v23 = sub_1681E90(a1, (_QWORD *)v14, nullptr, 0, v15, v16);
  v17 = sub_1DC4670(a1, v24, v14, a6, *(double *)a7.m128i_i64, a8, a9);
  v19 = v18;
  if ( (_BYTE)v18 )
    return 1;
  result = 0;
  v21 = v17;
  if ( v17 )
  {
    LOBYTE(v27) = 0;
    sub_1DBA4B0((__int64)ptr, a1, v14, nullptr, 0, 0, v25, v26, 0, 0, 0, 0, 0);
    result = sub_1DD54A0(a1, v24, (__int64 *)v14, v21, (__int64)ptr, a4, *(double *)a7.m128i_i64, a8, a5);
    if ( ptr[0] != &v29 )
    {
      v22 = result;
      free(ptr[0]);
      result = v22;
    }
    if ( (_BYTE)result != 1 && !v23 )
    {
      sub_16881D0(a1, v14, (int *)&v24, 1u, a7, *(double *)a8.m128_u64);
      return v19;
    }
  }
  return result;
}
