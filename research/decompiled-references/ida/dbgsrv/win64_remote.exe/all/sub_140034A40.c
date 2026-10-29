/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034A40
// Address: 0x0000000140034A40

//----- (0000000140034A40) ----------------------------------------------------
void __fastcall sub_140034A40(__int64 a1, unsigned __int64 a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  void *Block; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  char v10[8]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp+8h]
  char *v14; // [rsp+70h] [rbp+8h]

  v4 = *(char **)a1;
  if ( a2 < (unsigned __int64)v4 || a2 >= (unsigned __int64)&v4[56 * *(_QWORD *)(a1 + 16)] )
  {
    v6 = *(_QWORD *)(a1 + 8) + 1LL;
    if ( v6 > *(_QWORD *)(a1 + 16) )
    {
      v4 = (char *)sub_14005ABE0(a1, v4, v6, 0x38u);
      *(_QWORD *)a1 = v4;
    }
    v14 = &v4[56 * *(_QWORD *)(a1 + 8)];
    *(_QWORD *)v14 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    *((_QWORD *)v14 + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    *((_QWORD *)v14 + 2) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    v14[24] = 2;
    *((_OWORD *)v14 + 2) = 0;
    *((_QWORD *)v14 + 6) = 0;
    sub_140028E70(v14 + 24, (char *)(a2 + 24));
  }
  else
  {
    Block = *(void **)a2;
    *(_QWORD *)a2 = 0;
    v8 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    v9 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    v10[0] = 2;
    v11 = 0;
    v12 = 0;
    sub_140028E70(v10, (char *)(a2 + 24));
    v5 = *(_QWORD *)(a1 + 8) + 1LL;
    if ( v5 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v5, 0x38u);
    v13 = *(_QWORD *)a1 + 56LL * *(_QWORD *)(a1 + 8);
    *(_QWORD *)v13 = Block;
    *(_QWORD *)(v13 + 8) = v8;
    *(_QWORD *)(v13 + 16) = v9;
    *(_BYTE *)(v13 + 24) = 2;
    *(_OWORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 48) = 0;
    sub_140028E70((char *)(v13 + 24), v10);
    sub_140029390((__int64)v10);
  }
  ++*(_QWORD *)(a1 + 8);
}
// 140034B45: conditional instruction was optimized away because %Block.8==0
