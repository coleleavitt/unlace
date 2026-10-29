/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_775F4
// Address: 0x000775F4

//----- (000775F4) --------------------------------------------------------
int __fastcall sub_775F4(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // kr00_4
  int v6; // r1
  int v7; // kr04_4
  __int64 v8; // r2
  __int64 v9; // r10
  int v10; // r1
  int v11; // r6
  __int64 v12; // r6
  int v13; // r1
  __int64 v14; // r8
  __int64 v15; // r6
  __int64 v16; // [sp+0h] [bp-74h] BYREF
  int v17; // [sp+10h] [bp-64h]
  int v18; // [sp+14h] [bp-60h]
  int v19; // [sp+18h] [bp-5Ch]
  int v20; // [sp+1Ch] [bp-58h]
  __int64 v21; // [sp+20h] [bp-54h]
  __int64 v22; // [sp+30h] [bp-44h]
  int v23; // [sp+38h] [bp-3Ch]
  int v24; // [sp+40h] [bp-34h]
  int v25; // [sp+48h] [bp-2Ch]
  int v26; // [sp+4Ch] [bp-28h]
  int v27; // [sp+50h] [bp-24h]
  int v28; // [sp+54h] [bp-20h]
  int v29; // [sp+58h] [bp-1Ch]
  int v30; // [sp+5Ch] [bp-18h]
  int v31; // [sp+60h] [bp-14h]

  result = _fxstat64(3, a1, &v16);
  v4 = a2;
  if ( a2 )
    v4 = 1;
  if ( result )
    v4 = 0;
  if ( v4 )
  {
    v5 = v28;
    v6 = v25;
    v7 = v30;
    v8 = v26 / 1000;
    *(_DWORD *)(a2 + 56) = v8;
    LODWORD(v8) = v27;
    v9 = v16;
    *(_DWORD *)(a2 + 64) = v5 / 1000;
    *(_DWORD *)(a2 + 60) = v6 | HIDWORD(v8);
    v10 = v29;
    v11 = v31;
    *(_DWORD *)(a2 + 72) = v7 / 1000;
    HIDWORD(v8) = v20;
    *(_DWORD *)(a2 + 68) = ((v5 / 1000) >> 31) | v8;
    *(_DWORD *)(a2 + 76) = v10 | ((v7 / 1000) >> 31);
    HIDWORD(v12) = v18;
    v13 = v19;
    *(_DWORD *)(a2 + 8) = v11;
    LODWORD(v12) = v17;
    LODWORD(v8) = v23;
    *(_DWORD *)(a2 + 20) = v13;
    *(_DWORD *)(a2 + 24) = HIDWORD(v8);
    *(_QWORD *)(a2 + 12) = v12;
    v14 = v22;
    v15 = v21;
    HIDWORD(v8) = v24;
    *(_QWORD *)a2 = v9;
    *(_QWORD *)(a2 + 32) = v15;
    *(_DWORD *)(a2 + 48) = v8;
    *(_QWORD *)(a2 + 40) = v14;
    *(_DWORD *)(a2 + 52) = HIDWORD(v8);
  }
  return result;
}
// 14160: using guessed type int __fastcall _fxstat64(_DWORD, _DWORD, _DWORD);
