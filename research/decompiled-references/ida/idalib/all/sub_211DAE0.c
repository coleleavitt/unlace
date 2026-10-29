__int64 __fastcall sub_211DAE0(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  const char *v7; // rax
  __int64 result; // rax
  int v9; // eax
  _QWORD *v10; // r12
  __int64 v12; // r13
  __int64 (*v13)(); // rax
  const __m128i *v14; // rsi
  __int8 *v15; // rsi
  __int64 v16; // rax
  __m128i v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int16 v19; // [rsp+30h] [rbp-38h]

  v5 = a1[1];
  v6 = *(_QWORD *)(v5 + 152);
  if ( *(_DWORD *)(v6 + 312) != 4 || (v9 = *(_DWORD *)(v6 + 320)) == 0 || v9 == 6 )
  {
    v7 = ".seh_* directives are not supported on this target";
LABEL_3:
    v17.m128i_i64[0] = (__int64)v7;
    v19 = 259;
    return sub_2100A30(v5, a4, (__int64)&v17);
  }
  v10 = (_QWORD *)a1[13];
  if ( !v10 || v10[1] )
  {
    v7 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  if ( (a3 & 7) != 0 )
  {
    v7 = "register save offset is not 8 byte aligned";
    goto LABEL_3;
  }
  v12 = 1;
  v13 = *(__int64 (**)())(*a1 + 88LL);
  if ( v13 != sub_2119CA0 )
  {
    v16 = ((__int64 (__fastcall *)(_QWORD *))v13)(a1);
    v5 = a1[1];
    v12 = v16;
  }
  v17.m128i_i64[1] = __PAIR64__(sub_21139E0(*(_QWORD *)(v5 + 160), a2), a3);
  v14 = (const __m128i *)v10[14];
  v17.m128i_i64[0] = v12;
  LODWORD(v18) = (a3 > 0x7FFF8) + 4;
  if ( v14 == (const __m128i *)v10[15] )
    return sub_211D530((__int64)(v10 + 13), v14, &v17);
  v15 = &v14[1].m128i_i8[8];
  *(__m128i *)(v15 - 24) = _mm_load_si128(&v17);
  result = v18;
  *((_QWORD *)v15 - 1) = v18;
  v10[14] = v15;
  return result;
}
