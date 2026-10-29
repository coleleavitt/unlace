unsigned __int64 __fastcall sub_30FD0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_6D7F0(a1, 1, 0xFFFFFFFFLL, byte_165648, 1);
  *(_QWORD *)(a1 + 96) = a2;
  *(_BYTE *)(a1 + 104) = 1;
  *(_DWORD *)(a1 + 108) = 8;
  *(_QWORD *)a1 = &off_164A08;
  sub_6D840(a1, &qword_162740, 103);
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
  *(_QWORD *)a1 = &off_164460;
  *(_QWORD *)(a1 + 296) = sub_98180();
  *(_QWORD *)(a1 + 304) = a3;
  *(_BYTE *)(a1 + 312) = 10;
  if ( (unsigned __int8)sub_98D10("VAULT_RECV_TIMEOUT_SECS") )
  {
    v4 = strtol(haystack, nullptr, 10);
    if ( v4 > 0 || v4 == -1 )
      dword_16564C = 1000 * v4;
  }
  return v6 - __readfsqword(0x28u);
}

