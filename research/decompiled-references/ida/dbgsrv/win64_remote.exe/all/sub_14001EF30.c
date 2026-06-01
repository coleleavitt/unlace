/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001EF30
// Address: 0x000000014001EF30

//----- (000000014001EF30) ----------------------------------------------------
__int64 __fastcall sub_14001EF30(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  signed __int64 v13; // rbx
  const void *v14; // rbp
  void *v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v3 = a1[2];
  v4 = v3 - 1;
  v5 = 0;
  if ( !v3 )
    v4 = 0;
  v6 = a1[5];
  v7 = a1[9];
  if ( v6 < 0 )
  {
    v8 = v6 + 1;
    v6 = 0;
    v9 = v4 + v8;
    if ( v9 >= 0 )
      v6 = v9;
    if ( v6 > v4 )
      v6 = v4;
  }
  if ( v7 < 0 )
  {
    v10 = v7 + 1;
    v7 = 0;
    v11 = v4 + v10;
    if ( v11 >= 0 )
      v7 = v11;
    if ( v7 > v4 )
      v7 = v4;
  }
  *(_OWORD *)v16 = 0;
  v17 = 0;
  v12 = v7 - v6;
  if ( v12 > 0 )
  {
    v13 = v4 - v6;
    if ( v13 > 0 )
    {
      if ( v12 <= v13 )
        v13 = v12;
      v14 = (const void *)(v6 + a1[1]);
      v16[0] = sub_14005ABE0((__int64)v16, nullptr, v13 + 1, 1u);
      v16[1] = (void *)(v13 + 1);
      *((_BYTE *)v16[0] + v13) = 0;
      memcpy(v16[0], v14, v13);
      v5 = v17;
    }
  }
  *(_BYTE *)a2 = 7;
  *(void **)(a2 + 8) = v16[0];
  *(void **)(a2 + 16) = v16[1];
  *(_QWORD *)(a2 + 24) = v5;
  return 0;
}
// 14001EFC8: conditional instruction was optimized away because rbx.8>=1
