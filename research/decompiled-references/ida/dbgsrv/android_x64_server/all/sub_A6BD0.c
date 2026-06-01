/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6BD0
// Address: 0x00000000000A6BD0

//----- (00000000000A6BD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6BD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v6; // rbp
  const void *v7; // r13
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  size_t v10; // rbp
  const void *v11; // rbx
  _BYTE *v12; // rax
  _BYTE v14[5]; // [rsp+6h] [rbp-42h] BYREF
  _BYTE v15[5]; // [rsp+Bh] [rbp-3Dh] BYREF
  unsigned __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v16[0] = __readfsqword(0x28u);
  sub_A6A90(a1, a2, 1);
  v6 = *(_QWORD *)(a3 + 8);
  if ( HIDWORD(v6)
    || (v7 = *(const void **)a3,
        v8 = pack_dd(v14, (unsigned __int64)v15, v6),
        sub_56350(a1, v14, v8 - v14),
        sub_56350(a1, v7, v6),
        v9 = pack_dq(v14, (unsigned __int64)v16, *(_QWORD *)(a3 + 24) + 1LL),
        sub_56350(a1, v14, v9 - v14),
        v10 = *(_QWORD *)(a3 + 40),
        HIDWORD(v10)) )
  {
    if ( !(_BYTE)under_debugger )
      interr(5);
    BUG();
  }
  v11 = *(const void **)(a3 + 32);
  v12 = pack_dd(v14, (unsigned __int64)v15, v10);
  sub_56350(a1, v14, v12 - v14);
  sub_56350(a1, v11, v10);
  if ( a4 )
    sub_A6A90(a1, a4, 0);
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
