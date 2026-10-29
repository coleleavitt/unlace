signed int *__fastcall sub_B6C790(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // ebp
  __m128i v13; // xmm2
  int v14; // r12d
  int v15; // r13d
  __int64 v17[4]; // [rsp+10h] [rbp-C8h] BYREF
  char *v18[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-68h] BYREF
  int v21; // [rsp+78h] [rbp-60h]
  _BYTE v22[88]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_1606360(&v20, a2, *(_QWORD *)(a1 + 104), 0, 0, 0);
    sub_14E142(v17, "formula has not been simplified", v4);
    v5 = (_QWORD *)sub_2B3190((__int64)v17, " : ");
    sub_2333C0(v18, v5);
    sub_B6FC40((unsigned int)v19, (unsigned int)v18, (unsigned int)&v20, v6, v7, v8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v19);
    sub_233E40((__int64)v19);
    sub_233E40((__int64)v18);
    sub_233E40((__int64)v17);
    sub_18572D0(v22);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_B645B0(a1, (unsigned int *)a2);
  v10 = sub_B645B0(a1, *(unsigned int **)(a2 + 32));
  v12 = v11 ^ a3;
  v13 = _mm_cvtsi32_si128(v10);
  v14 = v10 ^ 1;
  v15 = sub_B645B0(a1, *(unsigned int **)(a2 + 40));
  v21 = v15 ^ 1;
  v20 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12 ^ 1), v13).m128i_u64[0];
  sub_B6B2C0(a1, (unsigned int *)&v20);
  HIDWORD(v20) = v14;
  LODWORD(v20) = v12 ^ 1;
  v21 = v15;
  sub_B6B2C0(a1, (unsigned int *)&v20);
  v21 = v15;
  v20 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), v13).m128i_u64[0];
  sub_B6B2C0(a1, (unsigned int *)&v20);
  v20 = __PAIR64__(v14, v12);
  v21 = v15 ^ 1;
  return sub_B6B2C0(a1, (unsigned int *)&v20);
}

