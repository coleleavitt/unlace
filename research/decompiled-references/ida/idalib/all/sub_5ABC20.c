unsigned __int64 __fastcall sub_5ABC20(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = -1;
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 224) = -1;
  *(_BYTE *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 320) = -1;
  *(_BYTE *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 416) = -1;
  *(_BYTE *)(a1 + 424) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  v16 = a1 + 48;
  sub_5ABB20(
    (__int64 *)(a1 + 48),
    "\r\n\a\v\b\t\x1B !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
  v2 = (unsigned int *)&unk_23AF9B0;
  do
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v4 + 1) )
    {
      v6 = qvector_reserve(v16, v5, v4 + 1, 268);
      *(_QWORD *)(a1 + 48) = v6;
      v4 = *(_QWORD *)(a1 + 56);
      v5 = v6;
    }
    v3 = v5 + 268 * v4;
    *(_QWORD *)v3 = 0;
    *(_QWORD *)(v3 + 124) = 0;
    memset(
      (void *)((v3 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)v5 + 268 * (_DWORD)v4 - (((_DWORD)v3 + 8) & 0xFFFFFFF8) + 132) >> 3));
    *(_QWORD *)(v3 + 132) = 0;
    *(_QWORD *)(v3 + 256) = 0;
    memset(
      (void *)((v3 + 140) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v3 - (((_DWORD)v3 + 140) & 0xFFFFFFF8) + 264) >> 3));
    *(_WORD *)(v3 + 264) = 0;
    ++*(_QWORD *)(a1 + 56);
    sub_7A8A30(v3, *v2++);
  }
  while ( dword_23AF9C8 != v2 );
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v7 + 1) )
  {
    v14 = qvector_reserve(v16, v8, v7 + 1, 268);
    *(_QWORD *)(a1 + 48) = v14;
    v7 = *(_QWORD *)(a1 + 56);
    v8 = v14;
  }
  v9 = v8 + 268 * v7;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 124) = 0;
  memset(
    (void *)((v9 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v8 + 268 * (_DWORD)v7 - (((_DWORD)v9 + 8) & 0xFFFFFFF8) + 132) >> 3));
  *(_QWORD *)(v9 + 132) = 0;
  *(_QWORD *)(v9 + 256) = 0;
  memset(
    (void *)((v9 + 140) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v9 - (((_DWORD)v9 + 140) & 0xFFFFFFF8) + 264) >> 3));
  *(_WORD *)(v9 + 264) = 0;
  ++*(_QWORD *)(a1 + 56);
  sub_7A8B40(v9);
  sub_5AAA60(v16);
  sub_5ABB20((__int64 *)(a1 + 144), "$?@_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  v10 = *(_QWORD *)(a1 + 152);
  v11 = *(_QWORD *)(a1 + 144);
  if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v10 + 1) )
  {
    v15 = qvector_reserve(a1 + 144, v11, v10 + 1, 268);
    *(_QWORD *)(a1 + 144) = v15;
    v10 = *(_QWORD *)(a1 + 152);
    v11 = v15;
  }
  v12 = v11 + 268 * v10;
  *(_QWORD *)v12 = 0;
  *(_QWORD *)(v12 + 124) = 0;
  memset(
    (void *)((v12 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v11 + 268 * (_DWORD)v10 - (((_DWORD)v12 + 8) & 0xFFFFFFF8) + 132) >> 3));
  *(_QWORD *)(v12 + 132) = 0;
  *(_QWORD *)(v12 + 256) = 0;
  memset(
    (void *)((v12 + 140) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v12 - (((_DWORD)v12 + 140) & 0xFFFFFFF8) + 264) >> 3));
  *(_WORD *)(v12 + 264) = 0;
  ++*(_QWORD *)(a1 + 152);
  sub_7A8B40(v12);
  sub_5AAA60(a1 + 144);
  sub_5ABB20((__int64 *)(a1 + 336), "$:?([.)]@$%?@$%&");
  sub_5AAA60(a1 + 336);
  sub_5ABB20((__int64 *)(a1 + 240), "_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  sub_5ABB20((__int64 *)(a1 + 240), "_:$()`'{}");
  return sub_5AAA60(a1 + 240);
}
