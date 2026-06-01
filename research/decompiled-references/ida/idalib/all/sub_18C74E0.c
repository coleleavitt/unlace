void __fastcall sub_18C74E0(__int64 a1, int a2, __int64 a3, int a4)
{
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // si
  __int64 v15; // rdi
  int *v16; // rax
  int v17; // ecx
  int v18; // edx
  __int64 *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // r12d
  void *v24; // rdi
  int v25; // eax
  _QWORD v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = *(_DWORD *)(a1 + 4528);
  if ( *(_DWORD *)(a1 + 4628) <= *(_DWORD *)(a1 + 4624) )
  {
    v9 = sub_2237400(a1 + 4616, a1 + 4632, 0, 640, v26);
    v22 = v9 + 640LL * *(unsigned int *)(a1 + 4624);
    *(_WORD *)(v22 + 4) = *(_WORD *)(a1 + 4512);
    *(_QWORD *)(v22 + 40) = v22 + 56;
    *(_QWORD *)(v22 + 48) = 0x400000000LL;
    *(_QWORD *)(v22 + 88) = v22 + 104;
    *(_QWORD *)(v22 + 208) = v22 + 224;
    *(_QWORD *)(v22 + 416) = 0x400000000LL;
    *(_QWORD *)(v22 + 96) = 0x200000000LL;
    *(_QWORD *)(v22 + 128) = v22 + 144;
    *(_QWORD *)(v22 + 288) = v22 + 312;
    *(_QWORD *)(v22 + 384) = 0x200000000LL;
    *(_QWORD *)(v22 + 456) = v22 + 480;
    *(_QWORD *)(v22 + 376) = v22 + 392;
    *(_QWORD *)(v22 + 408) = v22 + 424;
    *(_DWORD *)(v22 + 592) = a4;
    *(_DWORD *)v22 = a2;
    *(_DWORD *)(v22 + 8) = v7;
    *(_QWORD *)(v22 + 16) = 0;
    *(_QWORD *)(v22 + 24) = 0;
    *(_DWORD *)(v22 + 32) = 0;
    *(_QWORD *)(v22 + 120) = a3;
    *(_QWORD *)(v22 + 136) = 0x800000000LL;
    *(_QWORD *)(v22 + 216) = 0x800000000LL;
    *(_QWORD *)(v22 + 296) = 8;
    *(_DWORD *)(v22 + 304) = 0;
    *(_BYTE *)(v22 + 308) = 1;
    *(_QWORD *)(v22 + 464) = 4;
    *(_DWORD *)(v22 + 472) = 0;
    *(_BYTE *)(v22 + 476) = 1;
    *(_QWORD *)(v22 + 512) = v22 + 528;
    *(_QWORD *)(v22 + 520) = 0x800000000LL;
    *(_QWORD *)(v22 + 596) = 0;
    *(_BYTE *)(v22 + 632) = 0;
    sub_15F4620((__int64 *)(a1 + 4616), v9);
    v23 = v26[0];
    v24 = *(void **)(a1 + 4616);
    if ( (void *)(a1 + 4632) != v24 )
      free(v24);
    v25 = *(_DWORD *)(a1 + 4624);
    *(_QWORD *)(a1 + 4616) = v9;
    *(_DWORD *)(a1 + 4628) = v23;
    v10 = (unsigned int)(v25 + 1);
    *(_DWORD *)(a1 + 4624) = v10;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624);
    *(_WORD *)(v8 + 4) = *(_WORD *)(a1 + 4512);
    *(_QWORD *)(v8 + 40) = v8 + 56;
    *(_DWORD *)v8 = a2;
    *(_QWORD *)(v8 + 48) = 0x400000000LL;
    *(_QWORD *)(v8 + 88) = v8 + 104;
    *(_QWORD *)(v8 + 208) = v8 + 224;
    *(_QWORD *)(v8 + 416) = 0x400000000LL;
    *(_QWORD *)(v8 + 96) = 0x200000000LL;
    *(_QWORD *)(v8 + 128) = v8 + 144;
    *(_QWORD *)(v8 + 288) = v8 + 312;
    *(_QWORD *)(v8 + 384) = 0x200000000LL;
    *(_QWORD *)(v8 + 456) = v8 + 480;
    *(_QWORD *)(v8 + 136) = 0x800000000LL;
    *(_QWORD *)(v8 + 216) = 0x800000000LL;
    *(_QWORD *)(v8 + 520) = 0x800000000LL;
    *(_DWORD *)(v8 + 8) = v7;
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_DWORD *)(v8 + 32) = 0;
    *(_QWORD *)(v8 + 120) = a3;
    *(_QWORD *)(v8 + 296) = 8;
    *(_DWORD *)(v8 + 304) = 0;
    *(_BYTE *)(v8 + 308) = 1;
    *(_QWORD *)(v8 + 376) = v8 + 392;
    *(_QWORD *)(v8 + 408) = v8 + 424;
    *(_QWORD *)(v8 + 464) = 4;
    *(_DWORD *)(v8 + 472) = 0;
    *(_BYTE *)(v8 + 476) = 1;
    *(_QWORD *)(v8 + 512) = v8 + 528;
    *(_DWORD *)(v8 + 592) = a4;
    *(_QWORD *)(v8 + 596) = 0;
    v9 = *(_QWORD *)(a1 + 4616);
    *(_BYTE *)(v8 + 632) = 0;
    v10 = (unsigned int)(*(_DWORD *)(a1 + 4624) + 1);
    *(_DWORD *)(a1 + 4624) = v10;
  }
  v11 = 1;
  v12 = v9 + ((5 * v10 - 10) << 7);
  if ( *(_DWORD *)v12 != 2 )
  {
    v11 = 0;
    if ( (unsigned int)(*(_DWORD *)v12 - 4) <= 3 )
      v11 = *(_BYTE *)(v12 + 596);
  }
  *(_BYTE *)(v9 + 640 * v10 - 44) = v11;
  v13 = *(unsigned int *)(a1 + 4624);
  v14 = 1;
  v15 = *(_QWORD *)(a1 + 4616);
  v16 = (int *)(v15 + ((5 * v13 - 10) << 7));
  v17 = *v16;
  if ( *v16 != 5 && (v17 != 2 && v17 != 6 || (v14 = *((_BYTE *)v16 + 597)) == 0) )
    v14 = (unsigned int)(v17 - 4) <= 1;
  *(_BYTE *)(v15 + 640 * v13 - 43) = v14;
  *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 42) = *((_BYTE *)v16 + 598);
  v18 = *(_DWORD *)(a1 + 4448);
  *(_WORD *)(a1 + 4512) = 0;
  if ( v18 )
  {
    v19 = (__int64 *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
    v20 = *(_QWORD *)(a1 + 4416);
    v21 = v19[2];
    v19 += 5;
    *(_QWORD *)(a1 + 4416) = v21;
    LODWORD(v21) = *((_DWORD *)v19 - 4);
    *(v19 - 3) = v20;
    LODWORD(v20) = *(_DWORD *)(a1 + 4424);
    *(_DWORD *)(a1 + 4424) = v21;
    LODWORD(v21) = *((_DWORD *)v19 - 3);
    *((_DWORD *)v19 - 4) = v20;
    LODWORD(v20) = *(_DWORD *)(a1 + 4428);
    *(_DWORD *)(a1 + 4428) = v21;
    LODWORD(v21) = *((_DWORD *)v19 - 2);
    *((_DWORD *)v19 - 3) = v20;
    LODWORD(v20) = *(_DWORD *)(a1 + 4432);
    *(_DWORD *)(a1 + 4432) = v21;
    *((_DWORD *)v19 - 2) = v20;
    sub_18C7340((__int64 *)(a1 + 4440), v19);
  }
}
