/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99518
// Address: 0x0000000000099518

//----- (0000000000099518) ----------------------------------------------------
void __fastcall sub_99518(__int64 a1)
{
  pthread_mutex_t *v1; // x23
  __int64 *v3; // x27
  __int64 v4; // x0
  size_t v5; // x24
  void *v6; // x8
  __int64 v7; // x25
  int v8; // w0
  __int64 v9; // x8
  __int64 v10; // x8
  int v11; // w9
  __int64 v12; // x8

  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = off_15E248;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  *(_BYTE *)(a1 + 36) = 1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 120) = 0u;
  *(_QWORD *)(a1 + 168) = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 152) = 0u;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_QWORD *)(a1 + 176) = -1;
  *(_OWORD *)(a1 + 248) = 0u;
  v1 = (pthread_mutex_t *)(a1 + 248);
  *(_QWORD *)(a1 + 240) = 0x800000028LL;
  *(_QWORD *)(a1 + 432) = a1 + 440;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_OWORD *)(a1 + 224) = 0u;
  *(_OWORD *)(a1 + 208) = 0u;
  *(_OWORD *)(a1 + 192) = 0u;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = -1;
  *(_OWORD *)(a1 + 280) = 0u;
  *(_OWORD *)(a1 + 312) = 0u;
  *(_OWORD *)(a1 + 336) = 0u;
  *(_OWORD *)(a1 + 440) = 0u;
  *(_OWORD *)(a1 + 456) = 0u;
  *(_OWORD *)(a1 + 416) = 0u;
  *(_OWORD *)(a1 + 400) = 0u;
  *(_OWORD *)(a1 + 384) = 0u;
  *(_OWORD *)(a1 + 368) = 0u;
  *(_OWORD *)(a1 + 352) = 0u;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = a1 + 312;
  *(_QWORD *)(a1 + 328) = a1 + 336;
  *(_OWORD *)(a1 + 512) = 0u;
  *(_DWORD *)(a1 + 640) = 1;
  v3 = (__int64 *)(a1 + 280);
  *(_QWORD *)(a1 + 504) = a1 + 512;
  *(_OWORD *)(a1 + 472) = 0u;
  *(_OWORD *)(a1 + 488) = 0u;
  *(_DWORD *)(a1 + 528) = -1;
  *(_QWORD *)(a1 + 632) = 0;
  *(_OWORD *)(a1 + 600) = 0u;
  *(_OWORD *)(a1 + 616) = 0u;
  *(_OWORD *)(a1 + 568) = 0u;
  *(_OWORD *)(a1 + 584) = 0u;
  *(_OWORD *)(a1 + 536) = 0u;
  *(_OWORD *)(a1 + 552) = 0u;
  *(_OWORD *)(a1 + 648) = xmmword_1066F0;
  *(_BYTE *)(a1 + 664) = 0;
  *(_OWORD *)(a1 + 704) = 0u;
  *(_QWORD *)(a1 + 720) = 0;
  *(_OWORD *)(a1 + 688) = 0u;
  *(_OWORD *)(a1 + 672) = 0u;
  *(_DWORD *)(a1 + 728) = -1;
  *(_WORD *)(a1 + 732) = 0;
  v4 = __strlen_chk("UNDEFINED", 10);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(void **)(a1 + 248);
    v7 = v4 + 1;
    if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v4 + 1) )
    {
      v6 = qvector_reserve(v1, *(void **)(a1 + 248), v4 + 1, 1u);
      v1->__align = (__int64)v6;
    }
    *(_QWORD *)(a1 + 256) = v7;
    memmove(v6, "UNDEFINED", v5);
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 256) = 0;
  }
  v8 = sub_9DA64();
  if ( *(_BYTE *)(a1 + 36) )
  {
    v9 = 8;
    if ( v8 == 8 )
      v9 = 16;
    v10 = *(_QWORD *)(a1 + v9);
    if ( v8 == 8 )
      v11 = 8;
    else
      v11 = 4;
    *(_DWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 24) = v10;
  }
  v12 = *(_QWORD *)(a1 + 280);
  *(_DWORD *)(a1 + 244) = v8;
  if ( v12 )
  {
    sub_39980(v3, 0);
    qfree((void *)*v3);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 1066F0: using guessed type __int128 xmmword_1066F0;
// 15E248: using guessed type __int64 (__fastcall *off_15E248[10])();
