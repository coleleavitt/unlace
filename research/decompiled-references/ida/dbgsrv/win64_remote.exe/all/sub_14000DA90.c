/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000DA90
// Address: 0x000000014000DA90

//----- (000000014000DA90) ----------------------------------------------------
void __fastcall sub_14000DA90(__int64 a1, __int128 *a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // xmm1_8
  int v8; // ecx
  unsigned int v9; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+28h] [rbp-D0h]
  __int64 v11; // [rsp+38h] [rbp-C0h]
  __int64 v12; // [rsp+40h] [rbp-B8h]
  unsigned int v13; // [rsp+48h] [rbp-B0h]
  int v14; // [rsp+4Ch] [rbp-ACh]
  __int64 v15; // [rsp+50h] [rbp-A8h]
  int v16; // [rsp+58h] [rbp-A0h]
  void *Block[2]; // [rsp+60h] [rbp-98h]
  __int128 v18; // [rsp+70h] [rbp-88h]
  __int128 v19; // [rsp+80h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-68h]
  __int64 v21; // [rsp+98h] [rbp-60h]
  unsigned int v22; // [rsp+A0h] [rbp-58h]
  int v23; // [rsp+A4h] [rbp-54h]
  __int64 v24; // [rsp+A8h] [rbp-50h]
  int v25; // [rsp+B0h] [rbp-48h]
  __int64 v26; // [rsp+B8h] [rbp-40h]
  __int128 v27; // [rsp+C0h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-28h]
  _BYTE v29[16]; // [rsp+E0h] [rbp-18h] BYREF

  v6 = sub_14001DA00(a1);
  v19 = *a2;
  v7 = *((_QWORD *)a2 + 2);
  v20 = v7;
  v21 = a1;
  v22 = a3;
  v23 = 0;
  v24 = -1;
  v8 = 0;
  if ( v6 > 0 )
    v8 = 2;
  v25 = v8;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v9 = a3;
  v10 = *a2;
  v11 = v7;
  v12 = a1;
  v13 = a3;
  v14 = 0;
  v15 = -1;
  v16 = v8;
  *(_OWORD *)Block = 0;
  v18 = 0;
  sub_140009400((_QWORD *)(a1 + 1088), (__int64)v29, &v9);
  if ( Block[1] )
    j_free(Block[1]);
}
