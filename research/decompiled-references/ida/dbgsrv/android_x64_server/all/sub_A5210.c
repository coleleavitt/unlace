/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5210
// Address: 0x00000000000A5210

//----- (00000000000A5210) ----------------------------------------------------
unsigned __int64 __fastcall sub_A5210(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  const char *v7; // r12
  const char *v8; // rbx
  const char *v9; // r15
  size_t v10; // rax
  size_t v11; // rax
  _BYTE v13[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v14[5]; // [rsp+13h] [rbp-35h] BYREF
  _QWORD v15[6]; // [rsp+18h] [rbp-30h] BYREF

  v15[0] = __readfsqword(0x28u);
  v3 = pack_dq(v13, (unsigned __int64)v15, *(_QWORD *)(a2 + 64) + 1LL);
  sub_56350(a1, v13, v3 - v13);
  v4 = pack_dq(v13, (unsigned __int64)v15, *(_QWORD *)a2 - 16LL * *(_QWORD *)(a2 + 64) + 1);
  sub_56350(a1, v13, v4 - v13);
  v5 = pack_dq(v13, (unsigned __int64)v15, *(_QWORD *)(a2 + 8) + 1LL - *(_QWORD *)a2);
  sub_56350(a1, v13, v5 - v13);
  v6 = pack_dd(
         v13,
         (unsigned __int64)v14,
         *(unsigned __int8 *)(a2 + 73) | (16 * (unsigned int)*(unsigned __int8 *)(a2 + 72)));
  sub_56350(a1, v13, v6 - v13);
  v7 = s1;
  v8 = s1;
  if ( *(_QWORD *)(a2 + 24) )
    v8 = *(const char **)(a2 + 16);
  v9 = &byte_EB522;
  if ( !v8 )
    v8 = &byte_EB522;
  v10 = strlen(v8);
  sub_56350(a1, v8, v10 + 1);
  if ( *(_QWORD *)(a2 + 48) )
    v7 = *(const char **)(a2 + 40);
  if ( v7 )
    v9 = v7;
  v11 = strlen(v9);
  sub_56350(a1, v9, v11 + 1);
  return __readfsqword(0x28u);
}
