__int64 __fastcall sub_901890(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r14
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  __int64 v8; // rax

  v2 = sub_186B270(0x190u);
  sub_966710(v2, a2, 6);
  *(_QWORD *)v2 = off_1C6F538;
  *(_OWORD *)(v2 + 56) = 0;
  sub_180C0A0(v2 + 72);
  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(v2 + 144) = 0;
  *(__m128i *)(v2 + 112) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(unsigned __int64)(v2 + 56));
  *(__m128i *)(v2 + 128) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v2 + 152) = v4;
  *(_DWORD *)(v2 + 168) = 0;
  *(_QWORD *)(v2 + 160) = 8;
  *(_DWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 184) = v3;
  *(_QWORD *)(v2 + 192) = 0;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v2 + 200) = v5;
  *(_QWORD *)(v2 + 208) = 8;
  *(_DWORD *)(v2 + 216) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v6 = (_OWORD *)sub_186B270(0x100u);
  *(_QWORD *)(v2 + 224) = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  v6[12] = 0;
  v6[13] = 0;
  v6[14] = 0;
  v6[15] = 0;
  *(_QWORD *)(v2 + 232) = 8;
  *(_DWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = v3;
  *(_QWORD *)(v2 + 256) = 0;
  *(_DWORD *)(v2 + 264) = 0;
  *(_QWORD *)(v2 + 272) = &off_1C62200;
  *(_QWORD *)(v2 + 288) = 0;
  *(_QWORD *)(v2 + 296) = 0;
  *(_QWORD *)(v2 + 312) = 0;
  *(_QWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 328) = v3;
  *(_QWORD *)(v2 + 336) = 0;
  *(_DWORD *)(v2 + 344) = 0;
  v7 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v2 + 352) = v7;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v8 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(v2 + 360) = 8;
  *(_QWORD *)(v2 + 384) = v8;
  *(_DWORD *)(v2 + 368) = 0;
  *(_QWORD *)(v2 + 376) = 0;
  *(_DWORD *)(v2 + 392) = 0;
  *(_BYTE *)(v2 + 396) = 1;
  return v2;
}

