void __fastcall sub_185DED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD v23[5]; // [rsp+0h] [rbp-A8h] BYREF
  int v24; // [rsp+28h] [rbp-80h]
  int v25; // [rsp+2Ch] [rbp-7Ch]
  char v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  __int128 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+68h] [rbp-40h]
  __int64 v32; // [rsp+70h] [rbp-38h]
  __int64 v33; // [rsp+78h] [rbp-30h]

  if ( *(char *)(a3 + 28) >= 0 )
  {
    v3 = a3 + 72;
    v10 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
    if ( (v10 & 4) != 0 )
      v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v23[0] = a1;
    if ( v11 )
      v11 -= 64LL;
    v12 = *(_QWORD *)(a1 + 544);
    v23[1] = a1;
    *(_QWORD *)(a1 + 544) = v3;
    v23[2] = v12;
    v13 = *(_QWORD *)(a1 + 512);
    v26 = 0;
    v23[3] = v13;
    v14 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    v23[4] = v14;
    LODWORD(v14) = *(_DWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 512) = 0;
    v24 = v14;
    v25 = *(_DWORD *)(a1 + 2632);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
    if ( (*(_BYTE *)(a3 + 80) & 0x7Fu) - 34 > 5 )
    {
      sub_15F1950(a1, a2, v6, v7, v8, v9);
      sub_18C7FE0(a1, 6, 0);
    }
    else
    {
      sub_15F1950(a1, a2, v6, v7, v8, v9);
      sub_18C7FE0(a1, 6, a3);
      *(_BYTE *)(a3 + 84) |= 0x40u;
    }
    LODWORD(v28) = a2;
    WORD2(v27) = 0;
    v30 = 0;
    v15 = *(_QWORD *)(v23[0] + 544LL);
    LODWORD(v31) = 0;
    v32 = 0;
    v33 = 0;
    LODWORD(v27) = 14;
    v29 = sub_B8C1B0(v15);
    sub_1DBA9B0(v23[0], 6, v16, v17, v18, v19, v27, v28, v29, 0, 0, v31, 0, 0);
    v20 = *(unsigned int *)(a3 + 24);
    v26 = 1;
    sub_1850540((_QWORD *)a1, v20, v11, 0, v21, v22);
    sub_185CCD0(v23, v20);
  }
}
