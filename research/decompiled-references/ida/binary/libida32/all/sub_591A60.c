unsigned __int64 __fastcall sub_591A60(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  void *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-40h]

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
  v18 = a1 + 48;
  sub_591960(
    (__int64 *)(a1 + 48),
    "\r\n\a\v\b\t\x1B !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
  v2 = (unsigned int *)&unk_238B850;
  do
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v4 + 1) )
    {
      v6 = qvector_reserve(v18, v5, v4 + 1, 268);
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
    sub_788700(v3, *v2++);
  }
  while ( dword_238B868 != v2 );
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v7 + 1) )
  {
    v16 = qvector_reserve(v18, v8, v7 + 1, 268);
    *(_QWORD *)(a1 + 48) = v16;
    v7 = *(_QWORD *)(a1 + 56);
    v8 = v16;
  }
  v9 = v8 + 268 * v7;
  v10 = v8 + 268 * v7;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 124) = 0;
  v11 = (void *)((v9 + 140) & 0xFFFFFFFFFFFFFFF8LL);
  memset((void *)((v9 + 8) & 0xFFFFFFFFFFFFFFF8LL), 0, 8LL * ((v10 - (((_DWORD)v9 + 8) & 0xFFFFFFF8) + 132) >> 3));
  *(_QWORD *)(v9 + 132) = 0;
  *(_QWORD *)(v9 + 256) = 0;
  memset(v11, 0, 8LL * ((unsigned int)(v9 - (_DWORD)v11 + 264) >> 3));
  *(_WORD *)(v9 + 264) = 0;
  ++*(_QWORD *)(a1 + 56);
  sub_788810(v9);
  sub_5908A0(v18, (const char *)v11);
  sub_591960((__int64 *)(a1 + 144), "$?@_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  v12 = *(_QWORD *)(a1 + 152);
  v13 = *(_QWORD *)(a1 + 144);
  if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v12 + 1) )
  {
    v17 = qvector_reserve(a1 + 144, v13, v12 + 1, 268);
    *(_QWORD *)(a1 + 144) = v17;
    v12 = *(_QWORD *)(a1 + 152);
    v13 = v17;
  }
  v14 = v13 + 268 * v12;
  *(_QWORD *)v14 = 0;
  *(_QWORD *)(v14 + 124) = 0;
  memset(
    (void *)((v14 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v13 + 268 * (_DWORD)v12 - (((_DWORD)v14 + 8) & 0xFFFFFFF8) + 132) >> 3));
  *(_QWORD *)(v14 + 132) = 0;
  *(_QWORD *)(v14 + 256) = 0;
  memset(
    (void *)((v14 + 140) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v14 - (((_DWORD)v14 + 140) & 0xFFFFFFF8) + 264) >> 3));
  *(_WORD *)(v14 + 264) = 0;
  ++*(_QWORD *)(a1 + 152);
  sub_788810(v14);
  sub_5908A0(a1 + 144, nullptr);
  sub_591960((__int64 *)(a1 + 336), "$:?([.)]@$%?@$%&");
  sub_5908A0(a1 + 336, "$:?([.)]@$%?@$%&");
  sub_591960((__int64 *)(a1 + 240), "_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  sub_591960((__int64 *)(a1 + 240), "_:$()`'{}");
  return sub_5908A0(a1 + 240, "_:$()`'{}");
}

