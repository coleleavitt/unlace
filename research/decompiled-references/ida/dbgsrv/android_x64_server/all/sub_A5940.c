/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5940
// Address: 0x00000000000A5940

//----- (00000000000A5940) ----------------------------------------------------
unsigned __int64 __fastcall sub_A5940(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  const char *v3; // rbx
  size_t v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  _BYTE v9[10]; // [rsp+6h] [rbp-32h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[0] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
    v2 = *(const char **)a2;
  else
    v2 = s1;
  v3 = &byte_EB522;
  if ( v2 )
    v3 = v2;
  v4 = strlen(v3);
  sub_56350(a1, v3, v4 + 1);
  v5 = pack_dq(v9, (unsigned __int64)v10, *(_QWORD *)(a2 + 24) + 1LL);
  sub_56350(a1, v9, v5 - v9);
  v6 = pack_dq(v9, (unsigned __int64)v10, *(_QWORD *)(a2 + 32) + 1LL);
  sub_56350(a1, v9, v6 - v9);
  v7 = pack_dq(v9, (unsigned __int64)v10, *(_QWORD *)(a2 + 40) + 1LL);
  sub_56350(a1, v9, v7 - v9);
  return __readfsqword(0x28u);
}
