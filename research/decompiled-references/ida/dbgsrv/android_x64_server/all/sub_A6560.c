/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6560
// Address: 0x00000000000A6560

//----- (00000000000A6560) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6560(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  _BYTE *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  __int64 v12; // [rsp+8h] [rbp-50h]
  _BYTE v13[5]; // [rsp+16h] [rbp-42h] BYREF
  _BYTE v14[5]; // [rsp+1Bh] [rbp-3Dh] BYREF
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v15[0] = __readfsqword(0x28u);
  v2 = a2[1];
  v3 = pack_dd(v13, (unsigned __int64)v14, v2);
  sub_56350(a1, v13, v3 - v13);
  if ( (int)v2 > 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 24;
    do
    {
      v12 = v4;
      v6 = *a2;
      v7 = pack_dq(v13, (unsigned __int64)v15, *(_QWORD *)(*a2 + v5 - 24) + 1LL);
      sub_56350(a1, v13, v7 - v13);
      v8 = pack_dq(v13, (unsigned __int64)v15, *(_QWORD *)(v6 + v5 - 16) + 1LL);
      sub_56350(a1, v13, v8 - v13);
      v9 = pack_dq(v13, (unsigned __int64)v15, *(_QWORD *)(v6 + v5 - 8) + 1LL);
      sub_56350(a1, v13, v9 - v13);
      v10 = pack_dd(v13, (unsigned __int64)v14, *(unsigned __int8 *)(v6 + v5));
      sub_56350(a1, v13, v10 - v13);
      v5 += 32;
      v4 = v12 - 1;
    }
    while ( v12 != 1 );
  }
  return __readfsqword(0x28u);
}
