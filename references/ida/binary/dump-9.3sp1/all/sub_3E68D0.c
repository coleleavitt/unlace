unsigned __int64 __fastcall sub_3E68D0(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rax
  char *v3; // rbx
  __m128i si128; // xmm1
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // [rsp+8h] [rbp-108h]
  int v16; // [rsp+10h] [rbp-100h]
  __int64 v17; // [rsp+10h] [rbp-100h]
  __int64 v19; // [rsp+28h] [rbp-E8h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-E0h] BYREF
  _BYTE v21[24]; // [rsp+80h] [rbp-90h] BYREF
  char v22; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+D8h] [rbp-38h]

  v2 = (__m128i *)v20;
  v3 = &v22;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v23 = __readfsqword(0x28u);
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
  while ( v2 != (__m128i *)&v22 );
  v6 = sub_339CA0();
  sub_120A10((__int64)v20, v6, 0, 8, -1, 0);
  v19 = 37;
  copy_tinfo_t();
  v7 = &v19;
  clear_tinfo_t();
  v16 = *(_DWORD *)(sub_339CA0() + 80);
  v8 = a1[67].m128i_i16[2];
  if ( v8 != 45 )
  {
    if ( v8 == 3 )
    {
      v15 = a1[66].m128i_i64[0];
      goto LABEL_6;
    }
LABEL_15:
    sub_5C092(v7, &v19, 0.0);
  }
  v7 = (__int64 *)a1;
  sub_3E65E0(a1);
  if ( a1[67].m128i_i16[2] != 3 )
    goto LABEL_15;
  v15 = -a1[66].m128i_i64[0];
LABEL_6:
  sub_3E65E0(a1);
  v9 = sub_339CA0();
  sub_120A10((__int64)v21, v9, v15, v16, -1, 0);
  copy_tinfo_t();
  v19 = 50;
  v10 = a1[68].m128i_i64[0];
  v11 = *(_QWORD *)(v10 + 40);
  v17 = sub_335B10(v10, v11, (__int64)"$present", (__int64)&v19, 2, (__int64)v20, 1);
  clear_tinfo_t();
  *(_BYTE *)a2 = 4;
  *(_QWORD *)(a2 + 8) = v17;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v17 + 68);
  v12 = *(_QWORD *)(v17 + 72);
  *(_DWORD *)(v12 + 280) |= 0x10u;
  *(_DWORD *)(v12 + 284) = 13;
  if ( a1[67].m128i_i16[2] != 41 )
    sub_5C092(&v19, v11, 0.0);
  sub_3E65E0(a1);
  do
  {
    v3 -= 80;
    cleanup_argloc();
    v13 = *((_QWORD *)v3 + 4);
    if ( v13 )
    {
      *((_QWORD *)v3 + 5) = 0;
      qfree(v13);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v3);
  }
  while ( v3 != v20 );
  return v23 - __readfsqword(0x28u);
}
