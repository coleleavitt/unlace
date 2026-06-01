/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F0A8
// Address: 0x0002F0A8

//----- (0002F0A8) --------------------------------------------------------
int __fastcall sub_2F0A8(int *a1, void *a2)
{
  __int64 v3; // r0
  int v4; // r3
  int v5; // r7
  unsigned int v6; // r4
  __int64 v7; // r0
  int v8; // r5
  int v9; // r5
  void (__fastcall *v10)(int *, int, int, int, _DWORD, _DWORD); // r4
  __int64 v11; // r0
  bool v12; // nf
  int v15; // [sp+14h] [bp-28h]
  int v16; // [sp+1Ch] [bp-20h]
  int v17; // [sp+20h] [bp-1Ch]
  int *v18; // [sp+20h] [bp-1Ch]
  int v19; // [sp+24h] [bp-18h]
  _QWORD *v20; // [sp+24h] [bp-18h]
  unsigned int v21; // [sp+28h] [bp-14h]
  unsigned int v22; // [sp+2Ch] [bp-10h]
  int v23; // [sp+30h] [bp-Ch]
  int *v24; // [sp+30h] [bp-Ch]
  int v25; // [sp+34h] [bp-8h] BYREF

  v23 = a1[93];
  v19 = a1[95];
  v17 = a1[92];
  v16 = a1[94];
  v3 = qlseek(a1[91], 0, 1);
  v4 = a1[93];
  v15 = a1[92];
  v22 = v3 - v15;
  v21 = (v3 - __PAIR64__(v4, v15)) >> 32;
  HIDWORD(v3) = (__PAIR64__(v19, v16) - __PAIR64__(v23, v17)) >> 32;
  v5 = v16 - v17;
  v24 = a1 + 91;
  v20 = a1 + 92;
  v18 = a1;
  LODWORD(v3) = a1[91];
  v6 = HIDWORD(v3);
  v7 = qlseek(v3, __PAIR64__(HIDWORD(v3) + (unsigned int)__CFADD__(v5, v15) + v4, v5 + v15) - 4, 0);
  v8 = 0;
  if ( ((unsigned int)v7 & HIDWORD(v7)) != 0xFFFFFFFF )
  {
    v8 = 0;
    if ( qlread(*v24, &v25, 4) == 4 && v25 == 541413968 )
    {
      v8 = 0;
      if ( qlseek(*v24, __PAIR64__(v6, v5) - 8, 0) != -1 )
      {
        v9 = lreadbytes(*v24, a2, 4, *((unsigned __int8 *)v18 + 480));
        if ( v9 < 0 )
        {
          v10 = (void (__fastcall *)(int *, int, int, int, _DWORD, _DWORD))v18[96];
          v11 = qlseek(*v24, 0, 1);
          v10(v18, 19, 4, v9, v11, HIDWORD(v11));
        }
        v12 = v9 < 0;
        v8 = 1;
        if ( v12 )
          v8 = 0;
      }
    }
  }
  qlseek(*v24, *v20 + __PAIR64__(v21, v22), 0);
  return v8;
}
