__int64 __fastcall sub_3F51B0(__int64 a1)
{
  __int64 v1; // r12
  __m128i si128; // xmm1
  char *v4; // rbx
  __m128i *v5; // rax
  int tinfo_size; // eax
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rdi
  _QWORD *v10; // [rsp+0h] [rbp-100h]
  __int64 v11; // [rsp+18h] [rbp-E8h] BYREF
  _BYTE v12[24]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[7]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v14[80]; // [rsp+70h] [rbp-90h] BYREF
  char v15; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+C8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 || (getinf(57) & 0xF) != 1 || *(_BYTE *)(a1 + 876) )
    return 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v4 = &v15;
  v5 = (__m128i *)v12;
  do
  {
    v5->m128i_i32[1] = -1;
    v5 += 5;
    v5[-5].m128i_i16[0] = 0;
    v5[-5].m128i_i16[1] = 0;
    v5[-5].m128i_i64[1] = 0;
    v5[-4] = si128;
    v5[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v5[-3] + 8) = 0;
    v5[-2].m128i_i32[2] = 0;
    v5[-1].m128i_i64[0] = 0;
    v5[-1].m128i_i32[2] = 0;
  }
  while ( v5 != (__m128i *)&v15 );
  v11 = 7;
  copy_tinfo_t(v13, &v11);
  clear_tinfo_t(&v11);
  tinfo_size = get_tinfo_size(0, v13[0], 0);
  sub_120450((__int64)v12, *(_QWORD *)(a1 + 832), 18, tinfo_size, -1, 0);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 428LL);
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 800) + 232LL);
  v8 = get_tinfo_size(0, *v10, 0);
  sub_32F3F0((__int64)v14, v7, v8, (__int64)v10);
  v11 = 1;
  v1 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)"__setReg", &v11, 2, (__int64)v12, 0);
  clear_tinfo_t(&v11);
  *(_DWORD *)(*(_QWORD *)(v1 + 72) + 280LL) |= 4u;
  sub_B4CD0(*(_QWORD **)(a1 + 16), v1);
  do
  {
    v4 -= 80;
    cleanup_argloc(v4 + 56);
    v9 = *((_QWORD *)v4 + 4);
    if ( v9 )
    {
      *((_QWORD *)v4 + 5) = 0;
      qfree(v9);
    }
    clear_tinfo_t(v4 + 24);
    sub_11C7E0((__int64)v4);
  }
  while ( v4 != v12 );
  return v1;
}
