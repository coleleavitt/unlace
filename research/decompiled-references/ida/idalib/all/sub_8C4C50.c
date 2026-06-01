unsigned __int64 __fastcall sub_8C4C50(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_7C2540(a1, 1, -1, (__int64)&unk_2C820C8, 1);
  *(_QWORD *)(a1 + 96) = a2;
  *(_BYTE *)(a1 + 104) = 1;
  *(_DWORD *)(a1 + 108) = 8;
  *(_QWORD *)a1 = &off_2BFBD68;
  sub_7C25A0((_QWORD *)a1, byte_2B3F420, 0x67u);
  *(_QWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  memset(
    (void *)((a1 + 128) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 128) & 0xFFFFFFF8) + 248) >> 3));
  *(_QWORD *)a1 = &off_2BFC4A8;
  *(_QWORD *)(a1 + 296) = qmutex_create();
  *(_QWORD *)(a1 + 304) = a3;
  *(_BYTE *)(a1 + 312) = 10;
  if ( (unsigned __int8)qgetenv("VAULT_RECV_TIMEOUT_SECS") )
  {
    v4 = strtol(haystack, nullptr, 10);
    if ( v4 > 0 || v4 == -1 )
      dword_2C820CC = 1000 * v4;
  }
  return v6 - __readfsqword(0x28u);
}
