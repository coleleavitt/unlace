_QWORD *__fastcall sub_942AD0(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  _DWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD *result; // rax
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  char **exception; // r12
  __int64 savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(savedregs, "arith");
  v4 = sub_15DA4C0(v3 + 560, savedregs);
  sub_966710(a1, a2, v4);
  v5 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 0x100000001LL;
  *(_QWORD *)a1 = off_1C6FEB0;
  *(_QWORD *)(a1 + 56) = off_1C70070;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 112) + 248LL;
  sub_16669D0(a1 + 88, v5);
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = a1;
  *(_QWORD *)(a1 + 120) = a1 + 88;
  v6 = sub_186B270(0x180u);
  *(_QWORD *)(v6 + 32) = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  *(_OWORD *)(v6 + 144) = 0;
  *(_OWORD *)(v6 + 160) = 0;
  *(_OWORD *)(v6 + 192) = 0;
  *(_OWORD *)(v6 + 208) = 0;
  *(_OWORD *)(v6 + 240) = 0;
  *(_OWORD *)(v6 + 256) = 0;
  *(_OWORD *)(v6 + 288) = 0;
  *(_OWORD *)(v6 + 304) = 0;
  *(_OWORD *)(v6 + 336) = 0;
  *(_OWORD *)(v6 + 352) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 128) = 0;
  *(_DWORD *)(v6 + 136) = 0;
  *(_QWORD *)(v6 + 176) = 0;
  *(_DWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 224) = 0;
  *(_DWORD *)(v6 + 232) = 0;
  *(_QWORD *)(v6 + 272) = 0;
  *(_DWORD *)(v6 + 280) = 0;
  *(_QWORD *)(v6 + 320) = 0;
  *(_DWORD *)(v6 + 328) = 0;
  *(_QWORD *)(v6 + 368) = 0;
  *(_DWORD *)(v6 + 376) = 0;
  *(_QWORD *)(a1 + 128) = v6;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 136) = 8;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(__m128i *)(a1 + 288) = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v7 = (_DWORD *)sub_186B270(0x40u);
  v8 = *(_QWORD **)(a1 + 184);
  v7[1] = 0x80000000;
  v7[3] = 0x80000000;
  v7[5] = 0x80000000;
  v7[7] = 0x80000000;
  v7[9] = 0x80000000;
  v7[11] = 0x80000000;
  v7[13] = 0x80000000;
  v7[15] = 0x80000000;
  *(_QWORD *)(a1 + 304) = v7;
  *(_QWORD *)(a1 + 312) = 8;
  *(_DWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 1;
  *(_QWORD *)(a1 + 360) = 0;
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
    {
      v11 = (unsigned int)(3 * v9 + 1) >> 1;
      v12 = 16 * v11 + 8;
      if ( 16 * (int)v9 + 8 >= (unsigned int)v12 || (unsigned int)v9 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(savedregs, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, savedregs);
        sub_233E40((__int64)savedregs);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v8 - 1, v12);
      v8 = v13 + 2;
      *v13 = v11;
      v14 = v13[1];
      *(_QWORD *)(a1 + 184) = v8;
      result = &v8[2 * v14];
    }
    else
    {
      result = &v8[2 * v9];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x28u);
    v8 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 184) = v15 + 1;
    result = v15 + 1;
  }
  *result = -1;
  result[1] = 0xFFFFFFFE00000000LL;
  ++*((_DWORD *)v8 - 1);
  return result;
}

