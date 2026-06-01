_QWORD *__fastcall sub_19B550(__int64 a1, int a2, int a3, int a4, int a5)
{
  __m128i si128; // xmm1
  char *v8; // rbx
  __m128i *v9; // rax
  int v10; // eax
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // r12
  int v15; // eax
  const char *v16; // rax
  __int64 v17; // rdi
  int tinfo_size; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp-8h] [rbp-128h]
  int v22; // [rsp+0h] [rbp-120h]
  __int64 v23; // [rsp+0h] [rbp-120h]
  __int64 v25; // [rsp+8h] [rbp-118h]
  __int64 v26; // [rsp+10h] [rbp-110h]
  const char *v28; // [rsp+18h] [rbp-108h]
  _QWORD *v29; // [rsp+20h] [rbp-100h]
  __int64 v30; // [rsp+28h] [rbp-F8h]
  __int64 v31; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-E8h]
  _BYTE v33[84]; // [rsp+40h] [rbp-E0h] BYREF
  int v34; // [rsp+94h] [rbp-8Ch]
  __int64 v35; // [rsp+98h] [rbp-88h]
  char v36; // [rsp+E0h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+E8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v30 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    sub_195160();
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v8 = &v36;
  v26 = *(_QWORD *)(v30 + 480);
  v9 = (__m128i *)v33;
  do
  {
    v9->m128i_i32[1] = -1;
    v9 += 5;
    v9[-5].m128i_i16[0] = 0;
    v9[-5].m128i_i16[1] = 0;
    v9[-5].m128i_i64[1] = 0;
    v9[-4] = si128;
    v9[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v9[-3] + 8) = 0;
    v9[-2].m128i_i32[2] = 0;
    v9[-1].m128i_i64[0] = 0;
    v9[-1].m128i_i32[2] = 0;
  }
  while ( v9 != (__m128i *)&v36 );
  v10 = *(_DWORD *)(a1 + 8) & 0x20;
  v31 = *(_QWORD *)(a1 + 72);
  LOBYTE(v32) = v10 == 0 ? 5 : 1;
  sub_195BA0((__int64)v33, *(_QWORD *)(v30 + 64), &v31, -1, 1);
  v11 = 1;
  if ( a5 == 25 )
  {
    v33[80] = 11;
    v35 = qstrdup();
    copy_tinfo_t();
    v11 = 2;
    v34 = *(_DWORD *)(*(_QWORD *)(v26 + 112) + 84LL);
  }
  v12 = *(_QWORD *)(v30 + 64);
  v31 = 1;
  v29 = (_QWORD *)sub_335B10(v12, a2, a4, (unsigned int)&v31, v11, (unsigned int)v33, 0, v21, v22, a3, v26, a4);
  clear_tinfo_t();
  v13 = v29[9];
  *(_DWORD *)(v13 + 280) |= 4u;
  *(_DWORD *)(v13 + 284) = a5;
  v23 = v13;
  if ( (*(_BYTE *)(a1 + 8) & 0x20) == 0 )
  {
    tinfo_size = get_tinfo_size();
    v20 = *(_QWORD *)(*(_QWORD *)(v30 + 64) + 1440LL) + *(_QWORD *)(a1 + 72);
    v32 = tinfo_size;
    v31 = v20;
    sub_316BB0(v23 + 152, &v31);
  }
  v14 = sub_A3160(v30, v29, v25);
  v15 = *(_DWORD *)(v30 + 24);
  BYTE1(v15) &= ~2u;
  LOBYTE(v15) = v15 | 0x80;
  *(_DWORD *)(v30 + 24) = v15;
  v16 = (const char *)sub_1B5B40(v14, v29);
  sub_A2520(v30, (__int64)"added %s: %s", v28, v16);
  do
  {
    v8 -= 80;
    cleanup_argloc();
    v17 = *((_QWORD *)v8 + 4);
    if ( v17 )
    {
      *((_QWORD *)v8 + 5) = 0;
      qfree(v17);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v8);
  }
  while ( v8 != v33 );
  return v14;
}
