__int64 *__fastcall sub_818270(__int64 a1, _QWORD *a2, int a3)
{
  __m128i v5; // xmm0
  __int64 v6; // rsi
  __int64 v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // rax
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  _QWORD *v12; // rax
  _OWORD *v13; // rax
  __int64 *result; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rbp
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_1C6DE00, (__m128i)(unsigned __int64)off_1C6DE50);
  sub_180C5A0(v18, "array");
  sub_7E4DF0(a1, a2, v18, a3);
  v5 = _mm_load_si128(&v17);
  v6 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)a1 = &off_1C6DB80;
  *(_QWORD *)(a1 + 48) = off_1C6DE78;
  *(__m128i *)(a1 + 32) = v5;
  sub_1684300(a1 + 112, v6);
  v7 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = v7;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = v7;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 224) = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 232) = 8;
  *(_DWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = v9;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = v9;
  *(_QWORD *)(a1 + 272) = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 280) = v10;
  *(_QWORD *)(a1 + 288) = 8;
  *(_DWORD *)(a1 + 296) = 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v11 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 304) = v11;
  *(_QWORD *)(a1 + 312) = 8;
  *(_DWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = a1;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  *(_QWORD *)(a1 + 336) = sub_7E4EF0(a1);
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = off_1C54EC0;
  *(_QWORD *)(a1 + 376) = a1 + 328;
  *(_QWORD *)(a1 + 384) = a1;
  *(_QWORD *)(a1 + 392) = a1;
  *(_QWORD *)(a1 + 400) = a1;
  *(_QWORD *)(a1 + 408) = a1;
  v12 = (_QWORD *)sub_186B270(0x60u);
  *v12 = 0;
  *(_QWORD *)((char *)v12 + 12) = 0;
  v12[3] = 0;
  *(_QWORD *)((char *)v12 + 36) = 0;
  v12[6] = 0;
  *(_QWORD *)((char *)v12 + 60) = 0;
  v12[9] = 0;
  *(_QWORD *)((char *)v12 + 84) = 0;
  *(_QWORD *)(a1 + 416) = v12;
  *(_QWORD *)(a1 + 424) = 8;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_BYTE *)(a1 + 456) = 1;
  *(_OWORD *)(a1 + 464) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  v13 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 496) = v13;
  *(_QWORD *)(a1 + 504) = 8;
  *(_DWORD *)(a1 + 512) = 0;
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v13[4] = 0;
  v13[5] = 0;
  v13[6] = 0;
  v13[7] = 0;
  *(_OWORD *)(a1 + 520) = 0;
  result = (__int64 *)sub_186B270(8u);
  v15 = *(__int64 **)(a1 + 464);
  *result = 0;
  v16 = result;
  if ( result != v15 )
  {
    if ( v15 )
      result = (__int64 *)sub_186B220(v15);
    *(_QWORD *)(a1 + 464) = v16;
  }
  *v16 = a1;
  return result;
}

