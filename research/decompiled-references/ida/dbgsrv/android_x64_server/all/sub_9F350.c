/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F350
// Address: 0x000000000009F350

//----- (000000000009F350) ----------------------------------------------------
void __fastcall sub_9F350(__int64 a1)
{
  __int64 *v1; // r13
  __int64 v2; // rax
  size_t v3; // r15
  __int64 v4; // r12
  void *v5; // rax
  int v6; // eax
  _BOOL8 v7; // rcx

  *(_QWORD *)a1 = off_14E9F8;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 176) = -1;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 240) = 40;
  *(_DWORD *)(a1 + 244) = 8;
  *(_OWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = -1;
  v1 = (__int64 *)(a1 + 280);
  *(_OWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 304) = a1 + 312;
  *(_OWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 328) = a1 + 336;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 416) = 0;
  *(_OWORD *)(a1 + 400) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 432) = a1 + 440;
  *(_OWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 472) = 0;
  *(_OWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 504) = a1 + 512;
  *(_DWORD *)(a1 + 528) = -1;
  *(_OWORD *)(a1 + 616) = 0;
  *(_OWORD *)(a1 + 600) = 0;
  *(_OWORD *)(a1 + 584) = 0;
  *(_OWORD *)(a1 + 568) = 0;
  *(_OWORD *)(a1 + 552) = 0;
  *(_OWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_DWORD *)(a1 + 640) = 1;
  *(_OWORD *)(a1 + 648) = xmmword_FE300;
  *(_BYTE *)(a1 + 664) = 0;
  *(_OWORD *)(a1 + 704) = 0;
  *(_OWORD *)(a1 + 688) = 0;
  *(_OWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_DWORD *)(a1 + 728) = -1;
  *(_BYTE *)(a1 + 732) = 0;
  *(_BYTE *)(a1 + 733) = 0;
  v2 = __strlen_chk("UNDEFINED", 10);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2 + 1;
    v5 = *(void **)(a1 + 248);
    if ( *(_QWORD *)(a1 + 264) < v3 + 1 )
    {
      v5 = qvector_reserve(a1 + 248, *(char **)(a1 + 248), v3 + 1, 1u);
      *(_QWORD *)(a1 + 248) = v5;
    }
    *(_QWORD *)(a1 + 256) = v4;
    memmove(v5, "UNDEFINED", v3);
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 256) = 0;
  }
  v6 = sub_A3F40();
  if ( *(_BYTE *)(a1 + 36) )
  {
    v7 = v6 == 8;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8 * v7 + 8);
    *(_DWORD *)(a1 + 32) = 4 * v7 + 4;
  }
  *(_DWORD *)(a1 + 244) = v6;
  if ( *(_QWORD *)(a1 + 280) )
  {
    sub_38980(v1, 0);
    qfree((void *)*v1);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// FE300: using guessed type __int128 xmmword_FE300;
// 14E9F8: using guessed type __int64 (__fastcall *off_14E9F8[5])();
