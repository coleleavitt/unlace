unsigned __int64 __fastcall sub_1FEF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi

  *(_QWORD *)(a1 + 8) = a2;
  v4 = a1 + 32;
  *(_QWORD *)(v4 - 16) = a3;
  *(_QWORD *)(v4 - 8) = 0;
  *(_QWORD *)(v4 + 240) = 0;
  memset(
    (void *)(v4 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v4 & 0xFFFFFFF8) + 280) >> 3));
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)a1 = &off_88658;
  *(_WORD *)(a1 + 356) = 0x8000;
  *(_QWORD *)(a1 + 384) = a1 + 368;
  *(_QWORD *)(a1 + 392) = a1 + 368;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 352) = -2147450880;
  *(_DWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 344) = 0x80008000C0040002LL;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  return 0x80008000C0040002LL;
}

