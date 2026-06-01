/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5B10
// Address: 0x00000000000A5B10

//----- (00000000000A5B10) ----------------------------------------------------
unsigned __int64 __fastcall sub_A5B10(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  const char *v5; // rax
  const char *v6; // rbx
  size_t v7; // rax
  _BYTE v9[5]; // [rsp+6h] [rbp-32h] BYREF
  _BYTE v10[5]; // [rsp+Bh] [rbp-2Dh] BYREF
  unsigned __int64 v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[0] = __readfsqword(0x28u);
  v2 = pack_dd(v9, (unsigned __int64)v10, *(_DWORD *)a2);
  sub_56350(a1, v9, v2 - v9);
  v3 = pack_dd(v9, (unsigned __int64)v10, *(unsigned __int8 *)(a2 + 4));
  sub_56350(a1, v9, v3 - v9);
  v4 = pack_dq(v9, (unsigned __int64)v11, *(_QWORD *)(a2 + 8) + 1LL);
  sub_56350(a1, v9, v4 - v9);
  if ( *(_QWORD *)(a2 + 24) )
    v5 = *(const char **)(a2 + 16);
  else
    v5 = s1;
  v6 = &byte_EB522;
  if ( v5 )
    v6 = v5;
  v7 = strlen(v6);
  sub_56350(a1, v6, v7 + 1);
  return __readfsqword(0x28u);
}
