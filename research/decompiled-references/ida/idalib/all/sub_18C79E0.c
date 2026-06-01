void __fastcall sub_18C79E0(__int64 a1, int a2, int a3)
{
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rdi
  int *v14; // rax
  int v15; // ecx
  int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  void *v21; // rdi
  int v22; // r12d
  int v23; // eax
  _QWORD v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *(_DWORD *)(a1 + 4528);
  if ( *(_DWORD *)(a1 + 4628) <= *(_DWORD *)(a1 + 4624) )
  {
    v7 = sub_2237400(a1 + 4616, a1 + 4632, 0, 640, v24);
    v20 = v7 + 640LL * *(unsigned int *)(a1 + 4624);
    *(_WORD *)(v20 + 4) = *(_WORD *)(a1 + 4512);
    *(_QWORD *)(v20 + 40) = v20 + 56;
    *(_QWORD *)(v20 + 48) = 0x400000000LL;
    *(_QWORD *)(v20 + 88) = v20 + 104;
    *(_QWORD *)(v20 + 208) = v20 + 224;
    *(_QWORD *)(v20 + 416) = 0x400000000LL;
    *(_QWORD *)(v20 + 96) = 0x200000000LL;
    *(_QWORD *)(v20 + 128) = v20 + 144;
    *(_QWORD *)(v20 + 288) = v20 + 312;
    *(_QWORD *)(v20 + 384) = 0x200000000LL;
    *(_QWORD *)(v20 + 456) = v20 + 480;
    *(_QWORD *)(v20 + 376) = v20 + 392;
    *(_QWORD *)(v20 + 408) = v20 + 424;
    *(_DWORD *)(v20 + 592) = a3;
    *(_DWORD *)v20 = a2;
    *(_DWORD *)(v20 + 8) = v5;
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 24) = 0;
    *(_DWORD *)(v20 + 32) = 0;
    *(_QWORD *)(v20 + 120) = 0;
    *(_QWORD *)(v20 + 136) = 0x800000000LL;
    *(_QWORD *)(v20 + 216) = 0x800000000LL;
    *(_QWORD *)(v20 + 296) = 8;
    *(_DWORD *)(v20 + 304) = 0;
    *(_BYTE *)(v20 + 308) = 1;
    *(_QWORD *)(v20 + 464) = 4;
    *(_DWORD *)(v20 + 472) = 0;
    *(_BYTE *)(v20 + 476) = 1;
    *(_QWORD *)(v20 + 512) = v20 + 528;
    *(_QWORD *)(v20 + 520) = 0x800000000LL;
    *(_QWORD *)(v20 + 596) = 0;
    *(_BYTE *)(v20 + 632) = 0;
    sub_15F4620((__int64 *)(a1 + 4616), v7);
    v21 = *(void **)(a1 + 4616);
    v22 = v24[0];
    if ( (void *)(a1 + 4632) != v21 )
      free(v21);
    v23 = *(_DWORD *)(a1 + 4624);
    *(_QWORD *)(a1 + 4616) = v7;
    *(_DWORD *)(a1 + 4628) = v22;
    v8 = (unsigned int)(v23 + 1);
    *(_DWORD *)(a1 + 4624) = v8;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624);
    *(_WORD *)(v6 + 4) = *(_WORD *)(a1 + 4512);
    *(_QWORD *)(v6 + 40) = v6 + 56;
    *(_DWORD *)v6 = a2;
    *(_QWORD *)(v6 + 48) = 0x400000000LL;
    *(_QWORD *)(v6 + 88) = v6 + 104;
    *(_QWORD *)(v6 + 208) = v6 + 224;
    *(_QWORD *)(v6 + 416) = 0x400000000LL;
    *(_QWORD *)(v6 + 96) = 0x200000000LL;
    *(_QWORD *)(v6 + 128) = v6 + 144;
    *(_QWORD *)(v6 + 288) = v6 + 312;
    *(_QWORD *)(v6 + 384) = 0x200000000LL;
    *(_QWORD *)(v6 + 456) = v6 + 480;
    *(_QWORD *)(v6 + 136) = 0x800000000LL;
    *(_QWORD *)(v6 + 216) = 0x800000000LL;
    *(_QWORD *)(v6 + 520) = 0x800000000LL;
    *(_DWORD *)(v6 + 8) = v5;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 120) = 0;
    *(_QWORD *)(v6 + 296) = 8;
    *(_DWORD *)(v6 + 304) = 0;
    *(_BYTE *)(v6 + 308) = 1;
    *(_QWORD *)(v6 + 376) = v6 + 392;
    *(_QWORD *)(v6 + 408) = v6 + 424;
    *(_QWORD *)(v6 + 464) = 4;
    *(_DWORD *)(v6 + 472) = 0;
    *(_BYTE *)(v6 + 476) = 1;
    *(_QWORD *)(v6 + 512) = v6 + 528;
    *(_DWORD *)(v6 + 592) = a3;
    *(_QWORD *)(v6 + 596) = 0;
    v7 = *(_QWORD *)(a1 + 4616);
    *(_BYTE *)(v6 + 632) = 0;
    v8 = (unsigned int)(*(_DWORD *)(a1 + 4624) + 1);
    *(_DWORD *)(a1 + 4624) = v8;
  }
  v9 = 1;
  v10 = v7 + ((5 * v8 - 10) << 7);
  if ( *(_DWORD *)v10 != 2 )
  {
    v9 = 0;
    if ( (unsigned int)(*(_DWORD *)v10 - 4) <= 3 )
      v9 = *(_BYTE *)(v10 + 596);
  }
  v11 = 1;
  *(_BYTE *)(v7 + 640 * v8 - 44) = v9;
  v12 = *(unsigned int *)(a1 + 4624);
  v13 = *(_QWORD *)(a1 + 4616);
  v14 = (int *)(v13 + ((5 * v12 - 10) << 7));
  v15 = *v14;
  if ( *v14 != 5 && (v15 != 2 && v15 != 6 || (v11 = *((_BYTE *)v14 + 597)) == 0) )
    v11 = (unsigned int)(v15 - 4) <= 1;
  *(_BYTE *)(v13 + 640 * v12 - 43) = v11;
  *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 42) = *((_BYTE *)v14 + 598);
  v16 = *(_DWORD *)(a1 + 4448);
  *(_WORD *)(a1 + 4512) = 0;
  if ( v16 )
  {
    v17 = (__int64 *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
    v18 = *(_QWORD *)(a1 + 4416);
    v19 = v17[2];
    v17 += 5;
    *(_QWORD *)(a1 + 4416) = v19;
    LODWORD(v19) = *((_DWORD *)v17 - 4);
    *(v17 - 3) = v18;
    LODWORD(v18) = *(_DWORD *)(a1 + 4424);
    *(_DWORD *)(a1 + 4424) = v19;
    LODWORD(v19) = *((_DWORD *)v17 - 3);
    *((_DWORD *)v17 - 4) = v18;
    LODWORD(v18) = *(_DWORD *)(a1 + 4428);
    *(_DWORD *)(a1 + 4428) = v19;
    LODWORD(v19) = *((_DWORD *)v17 - 2);
    *((_DWORD *)v17 - 3) = v18;
    LODWORD(v18) = *(_DWORD *)(a1 + 4432);
    *(_DWORD *)(a1 + 4432) = v19;
    *((_DWORD *)v17 - 2) = v18;
    sub_18C7340((__int64 *)(a1 + 4440), v17);
  }
}
