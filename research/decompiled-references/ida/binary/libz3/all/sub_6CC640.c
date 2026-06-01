void __fastcall sub_6CC640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  __int64 v31; // rax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // [rsp+0h] [rbp-68h]
  char v39; // [rsp+0h] [rbp-68h]
  int v40[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+18h] [rbp-50h]
  __int64 v42; // [rsp+20h] [rbp-48h] BYREF
  __int64 v43; // [rsp+28h] [rbp-40h]

  v4 = a1 + 16;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a4;
  sub_16669D0(a1 + 16, a2);
  *(_QWORD *)v40 = 0;
  sub_14B7810(a1 + 32, a2, (int)v40, v6, v7, v8, v38);
  sub_18572D0(v40);
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)v40 = 0;
  sub_94BBD0(a1 + 64, a2, (unsigned int)v40, v9, v10, v11, v39);
  sub_18572D0(v40);
  sub_16744A0(a1 + 192, a2);
  *(_QWORD *)v40 = 0;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  v15 = *(_QWORD *)(a1 + 24);
  BYTE4(v42) &= ~1u;
  LODWORD(v42) = 1;
  if ( !v15 )
  {
    sub_16669E0(v4);
    v15 = *(_QWORD *)(a1 + 24);
  }
  v16 = sub_166A700(v15, (unsigned int)v40, 1, v12, v13, v14);
  *(_QWORD *)(a1 + 216) = v16;
  *(_QWORD *)(a1 + 224) = a2;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_25A130((char *)v40);
  *(_QWORD *)v40 = 1;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  v20 = *(_QWORD *)(a1 + 24);
  BYTE4(v42) &= ~1u;
  LODWORD(v42) = 1;
  if ( !v20 )
  {
    sub_16669E0(v4);
    v20 = *(_QWORD *)(a1 + 24);
  }
  v21 = sub_166A700(v20, (unsigned int)v40, 1, v17, v18, v19);
  *(_QWORD *)(a1 + 232) = v21;
  *(_QWORD *)(a1 + 240) = a2;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_25A130((char *)v40);
  *(_QWORD *)v40 = 0xFFFFFFFFLL;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  v25 = *(_QWORD *)(a1 + 24);
  BYTE4(v42) &= ~1u;
  LODWORD(v42) = 1;
  if ( !v25 )
  {
    sub_16669E0(v4);
    v25 = *(_QWORD *)(a1 + 24);
  }
  v26 = sub_166A700(v25, (unsigned int)v40, 1, v22, v23, v24);
  *(_QWORD *)(a1 + 248) = v26;
  *(_QWORD *)(a1 + 256) = a2;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_25A130((char *)v40);
  *(_QWORD *)v40 = 0;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  v30 = *(_QWORD *)(a1 + 24);
  BYTE4(v42) &= ~1u;
  LODWORD(v42) = 1;
  if ( !v30 )
  {
    sub_16669E0(v4);
    v30 = *(_QWORD *)(a1 + 24);
  }
  v31 = sub_166A700(v30, (unsigned int)v40, 0, v27, v28, v29);
  *(_QWORD *)(a1 + 264) = v31;
  *(_QWORD *)(a1 + 272) = a2;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  sub_25A130((char *)v40);
  *(_QWORD *)v40 = 1;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  v35 = *(_QWORD *)(a1 + 24);
  BYTE4(v42) &= ~1u;
  LODWORD(v42) = 1;
  if ( !v35 )
  {
    sub_16669E0(v4);
    v35 = *(_QWORD *)(a1 + 24);
  }
  v36 = sub_166A700(v35, (unsigned int)v40, 0, v32, v33, v34);
  *(_QWORD *)(a1 + 280) = v36;
  *(_QWORD *)(a1 + 288) = a2;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  sub_25A130((char *)v40);
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 392) = a1 + 440;
  *(_QWORD *)(a1 + 304) = a2;
  *(_QWORD *)(a1 + 312) = a2;
  *(_QWORD *)(a1 + 320) = a2;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = a2;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = a2;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 400) = 1;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 424) = 1065353216;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a2;
  *(_DWORD *)(a1 + 456) = 256;
  *(_WORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_QWORD *)(a1 + 520) = a1 + 536;
  *(_QWORD *)(a1 + 528) = 0x1000000000LL;
  *(_OWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 504) = 0;
  *(_QWORD *)v40 = 0;
  sub_14DC230(a1 + 448, v40);
  sub_18572D0(v40);
  *(_QWORD *)(a1 + 664) = a2;
  *(_QWORD *)v40 = 0;
  sub_16669D0(a1 + 672, a2);
  *(_QWORD *)(a1 + 688) = 0;
  *(_WORD *)(a1 + 696) = 0;
  *(_BYTE *)(a1 + 698) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  v37 = sub_186B270(0x80u);
  *(_QWORD *)v37 = 0;
  *(_DWORD *)(v37 + 8) = 0;
  *(_QWORD *)(v37 + 16) = 0;
  *(_DWORD *)(v37 + 24) = 0;
  *(_QWORD *)(v37 + 32) = 0;
  *(_DWORD *)(v37 + 40) = 0;
  *(_QWORD *)(v37 + 48) = 0;
  *(_DWORD *)(v37 + 56) = 0;
  *(_QWORD *)(v37 + 64) = 0;
  *(_DWORD *)(v37 + 72) = 0;
  *(_QWORD *)(v37 + 80) = 0;
  *(_DWORD *)(v37 + 88) = 0;
  *(_QWORD *)(v37 + 96) = 0;
  *(_DWORD *)(v37 + 104) = 0;
  *(_QWORD *)(v37 + 112) = 0;
  *(_DWORD *)(v37 + 120) = 0;
  *(_QWORD *)(a1 + 712) = v37;
  *(_QWORD *)(a1 + 720) = 8;
  *(_DWORD *)(a1 + 728) = 0;
  *(_BYTE *)(a1 + 744) = 0;
  sub_15079C0(a1 + 664, v40);
  sub_14ECFD0(a1 + 664, v40);
  sub_18572D0(v40);
}

