__int64 __fastcall sub_3D9420(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r9
  __m128i v12; // xmm0
  __int64 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __m128i v16; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 8) <= 1u )
    goto LABEL_11;
  v4 = netnode_altval();
  v5 = v4 - 1;
  if ( v4 == 1 || (v6 = netnode_altval(), v15 = v5, v7 = v6 - 1, v8 = v6, netnode_supset(), v7 == -1) )
  {
    v8 = netnode_altval();
    v7 = v8 - 1;
    v15 = v8 + 1;
    netnode_supset();
  }
  else if ( !*(_QWORD *)(a3 + 8) )
  {
    netnode_supset();
    v14 = netnode_altval();
    v9 = v14 - 1;
    v15 = v8;
    netnode_supset();
    v10 = v14;
    goto LABEL_6;
  }
  netnode_supset();
  v13 = netnode_altval();
  v9 = v13 - 1;
  v15 = v8;
  netnode_supset();
  v10 = v13;
  if ( v7 == -1 )
  {
LABEL_11:
    sub_3D8380((__int64)&v15);
    *(_QWORD *)a1 = v15;
    v12 = _mm_loadu_si128(&v16);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v12;
    return a1;
  }
LABEL_6:
  v15 = v10;
  netnode_supset();
  if ( v9 != -1 )
  {
    v15 = v8;
    netnode_supset();
  }
  v15 = 0;
  netnode_supset();
  *(_QWORD *)a1 = v7;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
