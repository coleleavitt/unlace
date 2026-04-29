__int64 __fastcall sub_39F10(__m128i *a1, unsigned __int8 *a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  unsigned int v6; // eax
  void (__fastcall *v7)(__m128i *, unsigned __int8 *, _QWORD); // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rsi
  __int64 v16; // rax
  const char *v17; // rsi
  __int64 v18; // rdi
  int v19; // edx
  __int8 *v20; // rax
  int v21; // edx
  void (__fastcall *v22)(__m128i *, const char *, __int64); // rax
  int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // eax
  const char *v26; // [rsp+0h] [rbp-38h] BYREF
  __m128i v27; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  switch ( a2[1] )
  {
    case 0u:
      return 0;
    case 1u:
      (*(void (__fastcall **)(__m128i *, _QWORD, __int64))(a1->m128i_i64[0] + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[39].m128i_i64[0] + 56) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      return 1;
    case 2u:
    case 7u:
      v3 = sub_2A800(a1[38].m128i_i64[1], *((_QWORD *)a2 + 2));
      if ( !(*(unsigned __int8 (__fastcall **)(__m128i *, unsigned __int8 *, __int64, __int64))(a1->m128i_i64[0] + 120))(
              a1,
              a2,
              v3,
              v3) )
        sub_381A0(a1, *((_QWORD *)a2 + 2));
      return 1;
    case 3u:
      if ( a2[32] )
        goto LABEL_7;
      (*(void (__fastcall **)(__m128i *, _QWORD, __int64))(a1->m128i_i64[0] + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[39].m128i_i64[0] + 56) + 8 * (*((_QWORD *)a2 + 3) & 0x1FLL)),
        33);
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 40);
      v5 = *(_QWORD *)(*(_QWORD *)(a1[39].m128i_i64[0] + 56) + 8 * ((*((_QWORD *)a2 + 3) >> 5) & 0x1FLL));
      goto LABEL_8;
    case 4u:
      if ( (a2[4] & 0x80u) == 0 || !(unsigned __int8)is_defarg(a1[45].m128i_i64[0], *a2) )
      {
        v6 = sub_38D80((__int64)a1[14].m128i_i64, (__int64)a2);
        v7(a1, a2, v6);
      }
LABEL_7:
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 40);
      v5 = *(_QWORD *)(*(_QWORD *)(a1[39].m128i_i64[0] + 56) + 8LL * *((unsigned __int16 *)a2 + 3));
LABEL_8:
      (*(void (__fastcall **)(__m128i *, __int64, __int64))(a1->m128i_i64[0] + 56))(a1, v5, 33);
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 41);
      return 1;
    case 5u:
      v8 = sub_38D80((__int64)a1[14].m128i_i64, (__int64)a2);
      v9 = v8;
      if ( a1[15].m128i_i16[4] == 204 && a2[5] == 1 )
      {
        v25 = v8 | 0x40;
        if ( *((__int16 *)a2 + 4) < 0 )
          v9 = v25;
      }
      (*(void (__fastcall **)(__m128i *, unsigned __int8 *, __int64))(a1->m128i_i64[0] + 24))(a1, a2, v9);
      return 1;
    case 8u:
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 64))(a1, 4);
      (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD))(a1->m128i_i64[0] + 56))(
        a1,
        *(_QWORD *)(a1[39].m128i_i64[1] + 48),
        0);
      v10 = a1[1].m128i_i64[1];
      v11 = _mm_loadu_si128(a1 + 2);
      a1[1].m128i_i64[1] = 0;
      v26 = (const char *)v10;
      v12 = a1->m128i_i64[0];
      v27 = v11;
      a1[2] = 0;
      (*(void (__fastcall **)(__m128i *, unsigned __int8 *, __int64))(v12 + 24))(a1, a2, 4);
      v13 = _mm_loadu_si128(a1 + 2);
      v14 = _mm_loadu_si128(&v27);
      v15 = a1[1].m128i_i64[1];
      v16 = v13.m128i_i64[0];
      a1[1].m128i_i64[1] = (__int64)v26;
      v26 = (const char *)v15;
      v27 = v13;
      a1[2] = v14;
      if ( v13.m128i_i64[0] > 1uLL )
      {
        tag_remove(&v26, v15, 0);
        v16 = v27.m128i_i64[0];
      }
      v17 = byte_51ACD;
      if ( v16 )
        v17 = v26;
      (*(void (__fastcall **)(__m128i *, const char *, _QWORD))(a1->m128i_i64[0] + 56))(a1, v17, 0);
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 72))(a1, 4);
      v18 = (__int64)v26;
      if ( v26 )
        goto LABEL_18;
      return 1;
    case 9u:
      v19 = 0;
      v20 = &a1[2].m128i_i8[40 * *a2 + 8];
      if ( v20[265] == 5 )
        v19 = *((_DWORD *)v20 + 68);
      sub_383A0(a1, (__int64)a2, v19);
      return 1;
    case 0xBu:
      v21 = *((unsigned __int16 *)a2 + 3);
      v26 = nullptr;
      v27 = 0;
      sub_1ADE0((__int64 *)&v26, (__int64)"$fcc%d", v21);
      v22 = *(void (__fastcall **)(__m128i *, const char *, __int64))(a1->m128i_i64[0] + 56);
      if ( (a1[15].m128i_i8[12] & 0x10) != 0 )
        v22(a1, v26 + 2, 33);
      else
        v22(a1, v26, 33);
      v18 = (__int64)v26;
      if ( v26 )
      {
LABEL_18:
        v27.m128i_i64[0] = 0;
        qfree(v18);
      }
      break;
    case 0xCu:
      v23 = 0;
      if ( (unsigned __int16)(a1[15].m128i_i16[4] - 544) <= 1u )
      {
        v23 = 4;
        if ( *(_DWORD *)(a1[38].m128i_i64[1] + 260) != 2 )
          v23 = (*a2 != 1) + 2;
      }
      v24 = *((_QWORD *)a2 + 3);
      v27.m128i_i32[2] = v23;
      v26 = (const char *)v24;
      v27.m128i_i64[0] = 4294967294LL;
      sub_38E20(a1, (__int64)&v26);
      break;
    case 0xDu:
      sub_389D0(a1, (__int64)a2);
      break;
    default:
      sub_1C8A0((__int64)a1[14].m128i_i64, a3);
  }
  return 1;
}
