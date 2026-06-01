__int64 __fastcall sub_211D850(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  const char *v6; // rax
  __int64 result; // rax
  int v8; // eax
  _QWORD *v9; // rbp
  __int64 v10; // r12
  __int64 (*v11)(); // rax
  __int32 v12; // eax
  const __m128i *v13; // rsi
  __int8 *v14; // rsi
  __int64 v15; // rax
  __m128i v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int16 v18; // [rsp+30h] [rbp-28h]

  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 152);
  if ( *(_DWORD *)(v5 + 312) != 4 || (v8 = *(_DWORD *)(v5 + 320)) == 0 || v8 == 6 )
  {
    v6 = ".seh_* directives are not supported on this target";
LABEL_3:
    v16.m128i_i64[0] = (__int64)v6;
    v18 = 259;
    return sub_2100A30(v4, a3, (__int64)&v16);
  }
  v9 = (_QWORD *)a1[13];
  if ( !v9 || v9[1] )
  {
    v6 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  v10 = 1;
  v11 = *(__int64 (**)())(*a1 + 88LL);
  if ( v11 != sub_2119CA0 )
  {
    v15 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (*)(), __int64))v11)(a1, a2, sub_2119CA0, a3);
    v4 = a1[1];
    v10 = v15;
  }
  v12 = sub_21139E0(*(_QWORD *)(v4 + 160), a2);
  v16.m128i_i64[0] = v10;
  v13 = (const __m128i *)v9[14];
  v16.m128i_i32[2] = -1;
  v16.m128i_i32[3] = v12;
  LODWORD(v17) = 0;
  if ( v13 == (const __m128i *)v9[15] )
    return sub_211D530((__int64)(v9 + 13), v13, &v16);
  v14 = &v13[1].m128i_i8[8];
  *(__m128i *)(v14 - 24) = _mm_load_si128(&v16);
  result = v17;
  *((_QWORD *)v14 - 1) = v17;
  v9[14] = v14;
  return result;
}
