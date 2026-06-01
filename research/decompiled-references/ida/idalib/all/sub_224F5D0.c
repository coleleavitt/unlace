_QWORD *sub_224F5D0()
{
  _QWORD *v0; // rbx
  __int64 *v1; // rax
  __int64 v2; // rcx
  __m128 v3; // xmm0
  char v4; // al
  bool v5; // zf
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __m128 v9; // xmm0
  __int64 *v10; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm0
  char v13; // al
  int v14; // eax
  __int64 v15; // rax
  __m128i v17; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v18; // [rsp+18h] [rbp-70h]
  const char *v19; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+40h] [rbp-48h]

  v0 = (_QWORD *)operator new(0x338u);
  memset(v0, 0, 0x338u);
  v0[12] = v0 + 14;
  *v0 = v0 + 2;
  v0[4] = &off_2C758B0;
  v0[13] = 0x100000000LL;
  v0[5] = 0;
  v0[15] = v0 + 18;
  v0[16] = 1;
  *((_BYTE *)v0 + 140) = 1;
  v1 = sub_2210FF0((const char *)v0 + 824);
  v2 = *((unsigned int *)v0 + 26);
  if ( v2 + 1 > (unsigned __int64)*((unsigned int *)v0 + 27) )
  {
    v17.m128i_i64[0] = (__int64)v1;
    sub_2237220((__int64)(v0 + 12), v0 + 14, v2 + 1, 8);
    v2 = *((unsigned int *)v0 + 26);
    v1 = (__int64 *)v17.m128i_i64[0];
  }
  *(_QWORD *)(v0[12] + 8 * v2) = v1;
  v3 = _mm_loadh_ps((const double *)off_2C77C68);
  v0[21] = v0 + 23;
  ++*((_DWORD *)v0 + 26);
  *((_BYTE *)v0 + 184) = 0;
  v0[20] = off_2BEAAE8;
  v0[19] = 0;
  *((_BYTE *)v0 + 200) = 0;
  v0[4] = off_2C75E48;
  v0[22] = 0;
  *(__m128 *)(v0 + 29) = v3;
  v0[26] = off_2BEAC58;
  sub_2217250((__int64)(v0 + 4), (__int64 *)"info-output-file", 0x10u);
  v0[11] = 8;
  v0[10] = "filename";
  v0[8] = "File to append -stats and -timer output to";
  v4 = *((_BYTE *)v0 + 42);
  v0[9] = 42;
  v5 = v0[19] == 0;
  *((_BYTE *)v0 + 42) = v4 & 0x9F | 0x20;
  if ( v5 )
  {
    v0[19] = v0;
    *((_BYTE *)v0 + 200) = 1;
    sub_9EE8A0((__int64)(v0 + 21), (__int64)v0);
  }
  else
  {
    v6 = sub_227D6D0(v0 + 4, "info-output-file");
    v20 = 259;
    v19 = "cl::location(x) specified more than once!";
    sub_22116C0((__int64)(v0 + 4), (__int64)&v19, 0, 0, v6);
  }
  sub_2218140((__int64)(v0 + 4));
  v0[33] = 0;
  v0[31] = &off_2C758B0;
  v0[32] &= 0x80000000uLL;
  v0[40] = 0x100000000LL;
  v0[34] = 0;
  v0[35] = 0;
  v0[36] = 0;
  v0[37] = 0;
  v0[38] = 0;
  v0[39] = v0 + 41;
  v0[42] = v0 + 45;
  v0[43] = 1;
  *((_DWORD *)v0 + 88) = 0;
  *((_BYTE *)v0 + 356) = 1;
  v7 = sub_2210FF0((const char *)v0 + 32);
  v8 = *((unsigned int *)v0 + 80);
  if ( v8 + 1 > (unsigned __int64)*((unsigned int *)v0 + 81) )
  {
    v17.m128i_i64[0] = (__int64)v7;
    sub_2237220((__int64)(v0 + 39), v0 + 41, v8 + 1, 8);
    v8 = *((unsigned int *)v0 + 80);
    v7 = (__int64 *)v17.m128i_i64[0];
  }
  *(_QWORD *)(v0[39] + 8 * v8) = v7;
  v0[47] = off_2C714E8;
  v9 = _mm_loadh_ps((const double *)off_2C78368);
  v0[31] = off_2C75848;
  *((_WORD *)v0 + 192) = 0;
  *((__m128 *)v0 + 26) = v9;
  v17 = (__m128i)v9;
  ++*((_DWORD *)v0 + 80);
  v0[49] = off_2BEAB08;
  *((_BYTE *)v0 + 368) = 0;
  sub_2217250((__int64)(v0 + 31), (__int64 *)"track-memory", 0xCu);
  v0[36] = 54;
  v0[35] = "Enable -time-passes memory tracking (this may be slow)";
  *((_BYTE *)v0 + 258) = *((_BYTE *)v0 + 258) & 0x9F | 0x20;
  sub_2218140((__int64)(v0 + 31));
  v0[56] = 0;
  v0[54] = &off_2C758B0;
  v0[55] &= 0x80000000uLL;
  v0[63] = 0x100000000LL;
  v0[57] = 0;
  v0[58] = 0;
  v0[59] = 0;
  v0[60] = 0;
  v0[61] = 0;
  v0[62] = v0 + 64;
  v0[65] = v0 + 68;
  v0[66] = 1;
  *((_DWORD *)v0 + 134) = 0;
  *((_BYTE *)v0 + 540) = 1;
  v10 = sub_2210FF0((const char *)v0 + 248);
  v11 = *((unsigned int *)v0 + 126);
  v12 = _mm_load_si128(&v17);
  if ( v11 + 1 > (unsigned __int64)*((unsigned int *)v0 + 127) )
  {
    v18 = v10;
    sub_2237220((__int64)(v0 + 62), v0 + 64, v11 + 1, 8);
    v11 = *((unsigned int *)v0 + 126);
    v10 = v18;
    v12 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(v0[62] + 8 * v11) = v10;
  *((_WORD *)v0 + 284) = 0;
  v0[70] = off_2C714E8;
  v0[54] = off_2C75848;
  *(__m128i *)(v0 + 75) = v12;
  v0[72] = off_2BEAB08;
  ++*((_DWORD *)v0 + 126);
  *((_BYTE *)v0 + 552) = 0;
  sub_2217250((__int64)(v0 + 54), (__int64 *)"sort-timers", 0xBu);
  v0[58] = "In the report, sort the timers in each group in wall clock time order";
  v13 = *((_BYTE *)v0 + 442);
  *((_WORD *)v0 + 284) = 257;
  *((_BYTE *)v0 + 552) = 1;
  v0[59] = 69;
  *((_BYTE *)v0 + 442) = v13 & 0x9F | 0x20;
  sub_2218140((__int64)(v0 + 54));
  *(_OWORD *)(v0 + 79) = 0;
  *(_OWORD *)(v0 + 77) = 0;
  v0[83] = v0 + 85;
  v0[81] = 0;
  *((_DWORD *)v0 + 158) = 1;
  *((_DWORD *)v0 + 164) = 0;
  sub_224D960(v0 + 83, "misc", (__int64)"");
  v0[87] = v0 + 89;
  sub_224D960(v0 + 87, "Miscellaneous Ungrouped Timers", (__int64)"");
  v0[91] = 0;
  v0[92] = 0;
  v0[93] = 0;
  v0[94] = 0;
  if ( &_pthread_key_create )
  {
    v14 = pthread_mutex_lock((pthread_mutex_t *)(v0 + 77));
    if ( v14 )
      std::__throw_system_error(v14);
  }
  v15 = qword_2D0ABC8;
  if ( qword_2D0ABC8 )
    *(_QWORD *)(qword_2D0ABC8 + 96) = v0 + 96;
  v0[96] = v15;
  v0[95] = &qword_2D0ABC8;
  qword_2D0ABC8 = (__int64)(v0 + 83);
  if ( &_pthread_key_create )
    pthread_mutex_unlock((pthread_mutex_t *)(v0 + 77));
  sub_22361C0(v0 + 97);
  *((_BYTE *)v0 + 816) = 0;
  *((_DWORD *)v0 + 196) = 0;
  return v0;
}
