__int64 __fastcall sub_211D6C0(_QWORD *a1, unsigned int a2, unsigned __int32 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  const char *v7; // rax
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 v12; // r13
  __int64 (*v13)(); // rax
  __int32 v14; // eax
  const __m128i *v15; // rsi
  __int64 v16; // rax
  __int8 *v17; // rsi
  __int64 v18; // rax
  __m128i v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int16 v21; // [rsp+30h] [rbp-38h]

  v5 = a1[1];
  v6 = *(_QWORD *)(v5 + 152);
  if ( *(_DWORD *)(v6 + 312) != 4 || (v9 = *(_DWORD *)(v6 + 320)) == 0 || v9 == 6 )
  {
    v7 = ".seh_* directives are not supported on this target";
LABEL_3:
    v19.m128i_i64[0] = (__int64)v7;
    v21 = 259;
    return sub_2100A30(v5, a4, (__int64)&v19);
  }
  v10 = a1[13];
  if ( !v10 || *(_QWORD *)(v10 + 8) )
  {
    v7 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  v7 = "frame register and offset can be set at most once";
  if ( *(int *)(v10 + 88) >= 0 )
    goto LABEL_3;
  v7 = "offset is not a multiple of 16";
  if ( (a3 & 0xF) != 0 )
    goto LABEL_3;
  if ( a3 > 0xF0 )
  {
    v7 = "frame offset must be less than or equal to 240";
    goto LABEL_3;
  }
  v12 = 1;
  v13 = *(__int64 (**)())(*a1 + 88LL);
  if ( v13 != sub_2119CA0 )
  {
    v18 = ((__int64 (__fastcall *)(_QWORD *))v13)(a1);
    v5 = a1[1];
    v12 = v18;
  }
  v14 = sub_21139E0(*(_QWORD *)(v5 + 160), a2);
  v15 = *(const __m128i **)(v10 + 112);
  v19.m128i_i64[0] = v12;
  v19.m128i_i32[3] = v14;
  v16 = (__int64)v15->m128i_i64 - *(_QWORD *)(v10 + 104);
  v19.m128i_i32[2] = a3;
  LODWORD(v20) = 3;
  *(_DWORD *)(v10 + 88) = -1431655765 * (v16 >> 3);
  if ( v15 == *(const __m128i **)(v10 + 120) )
    return sub_211D530(v10 + 104, v15, &v19);
  v17 = &v15[1].m128i_i8[8];
  *(__m128i *)(v17 - 24) = _mm_load_si128(&v19);
  result = v20;
  *((_QWORD *)v17 - 1) = v20;
  *(_QWORD *)(v10 + 112) = v17;
  return result;
}
