_UNKNOWN **__fastcall sub_157540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v9; // r15
  _UNKNOWN **result; // rax
  size_t v11; // r13
  size_t v12; // r12
  void *v13; // rax
  const void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  const void *v18; // rsi

  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &off_22FFC8;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
  {
    v13 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 144) = v13;
    v14 = *(const void **)a2;
    *(_QWORD *)(a1 + 160) = v9;
    memcpy(v13, v14, v9);
    *(_QWORD *)(a1 + 152) = v9;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &off_230028;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_155750(a1 + 176, 2, -1);
  sub_155750(a1 + 176, 4, -1);
  *(_QWORD *)(a1 + 264) = 0;
  result = &off_235470;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  v11 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a1 = &off_235470;
  *(_QWORD *)(a1 + 256) = a3;
  if ( v11 )
  {
    v17 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 312) = v17;
    v18 = *(const void **)a5;
    *(_QWORD *)(a1 + 328) = v11;
    result = (_UNKNOWN **)memcpy(v17, v18, v11);
    *(_QWORD *)(a1 + 320) = v11;
  }
  *(_QWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  v12 = *(_QWORD *)(a6 + 8);
  if ( v12 )
  {
    v15 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 352) = v12;
    v16 = *(const void **)a6;
    *(_QWORD *)(a1 + 336) = v15;
    result = (_UNKNOWN **)memcpy(v15, v16, v12);
    *(_QWORD *)(a1 + 344) = v12;
  }
  return result;
}

