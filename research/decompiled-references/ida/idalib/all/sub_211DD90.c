__int64 __fastcall sub_211DD90(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  const char *v6; // rcx
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // edx
  _QWORD *v10; // rbp
  __int64 (*v11)(); // rdx
  __int64 v12; // rax
  const __m128i *v13; // rsi
  __int8 *v14; // rsi
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h]
  __int16 v17; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)(a1[1] + 152LL);
  if ( *(_DWORD *)(v5 + 312) != 4 || (v9 = *(_DWORD *)(v5 + 320)) == 0 || v9 == 6 )
  {
    v6 = ".seh_* directives are not supported on this target";
    goto LABEL_3;
  }
  v10 = (_QWORD *)a1[13];
  if ( !v10 || v10[1] )
  {
    v6 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  v6 = "stack allocation size must be non-zero";
  if ( !a2 )
  {
LABEL_3:
    v7 = a1[1];
    v15.m128i_i64[0] = (__int64)v6;
    v17 = 259;
    return sub_2100A30(v7, a3, (__int64)&v15);
  }
  if ( (a2 & 7) != 0 )
  {
    v6 = "stack allocation size is not a multiple of 8";
    goto LABEL_3;
  }
  v11 = *(__int64 (**)())(*a1 + 88LL);
  v12 = 1;
  if ( v11 != sub_2119CA0 )
    v12 = ((__int64 (__fastcall *)(_QWORD *, __int64))v11)(a1, a3);
  v15.m128i_i64[0] = v12;
  v13 = (const __m128i *)v10[14];
  v15.m128i_i64[1] = a2 | 0xFFFFFFFF00000000LL;
  LODWORD(v16) = (a2 < 0x81) + 1;
  if ( v13 == (const __m128i *)v10[15] )
    return sub_211D530((__int64)(v10 + 13), v13, &v15);
  v14 = &v13[1].m128i_i8[8];
  *(__m128i *)(v14 - 24) = _mm_load_si128(&v15);
  result = v16;
  *((_QWORD *)v14 - 1) = v16;
  v10[14] = v14;
  return result;
}
