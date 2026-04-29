unsigned __int64 __fastcall sub_3E0850(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rax
  char *v3; // rbx
  __m128i si128; // xmm1
  int v5; // eax
  __int16 v6; // ax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // [rsp+8h] [rbp-108h]
  int v12; // [rsp+10h] [rbp-100h]
  __int64 v13; // [rsp+10h] [rbp-100h]
  __int64 v14; // [rsp+28h] [rbp-E8h] BYREF
  _BYTE v15[24]; // [rsp+30h] [rbp-E0h] BYREF
  _BYTE v16[56]; // [rsp+48h] [rbp-C8h] BYREF
  _BYTE v17[24]; // [rsp+80h] [rbp-90h] BYREF
  _BYTE v18[56]; // [rsp+98h] [rbp-78h] BYREF
  char v19; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+D8h] [rbp-38h]

  v2 = (__m128i *)v15;
  v3 = &v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
  v20 = __readfsqword(0x28u);
  do
  {
    v2->m128i_i32[1] = -1;
    v2 += 5;
    v2[-5].m128i_i16[0] = 0;
    v2[-5].m128i_i16[1] = 0;
    v2[-5].m128i_i64[1] = 0;
    v2[-4] = si128;
    v2[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v2[-3] + 8) = 0;
    v2[-2].m128i_i32[2] = 0;
    v2[-1].m128i_i64[0] = 0;
    v2[-1].m128i_i32[2] = 0;
  }
  while ( v2 != (__m128i *)&v19 );
  v5 = sub_3338F0();
  sub_11BE50((__int64)v15, v5, 0, 8, -1, 0);
  v14 = 37;
  copy_tinfo_t(v16, &v14);
  clear_tinfo_t(&v14);
  v12 = *(_DWORD *)(sub_3338F0() + 80);
  v6 = a1[67].m128i_i16[2];
  if ( v6 != 45 )
  {
    if ( v6 == 3 )
    {
      v11 = a1[66].m128i_i64[0];
      goto LABEL_6;
    }
LABEL_15:
    sub_5AD18(0.0);
  }
  sub_3E0560(a1);
  if ( a1[67].m128i_i16[2] != 3 )
    goto LABEL_15;
  v11 = -a1[66].m128i_i64[0];
LABEL_6:
  sub_3E0560(a1);
  v7 = sub_3338F0();
  sub_11BE50((__int64)v17, v7, v11, v12, -1, 0);
  copy_tinfo_t(v18, a1->m128i_i64[0] + 264);
  v14 = 50;
  v13 = sub_32FDB0(
          a1[68].m128i_i64[0],
          *(_QWORD *)(a1[68].m128i_i64[0] + 40),
          (__int64)"$present",
          &v14,
          2,
          (__int64)v15,
          1);
  clear_tinfo_t(&v14);
  *(_BYTE *)a2 = 4;
  *(_QWORD *)(a2 + 8) = v13;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v13 + 68);
  v8 = *(_QWORD *)(v13 + 72);
  *(_DWORD *)(v8 + 280) |= 0x10u;
  *(_DWORD *)(v8 + 284) = 13;
  if ( a1[67].m128i_i16[2] != 41 )
    sub_5AD18(0.0);
  sub_3E0560(a1);
  do
  {
    v3 -= 80;
    cleanup_argloc(v3 + 56);
    v9 = *((_QWORD *)v3 + 4);
    if ( v9 )
    {
      *((_QWORD *)v3 + 5) = 0;
      qfree(v9);
    }
    clear_tinfo_t(v3 + 24);
    sub_1181E0((__int64)v3);
  }
  while ( v3 != v15 );
  return v20 - __readfsqword(0x28u);
}
