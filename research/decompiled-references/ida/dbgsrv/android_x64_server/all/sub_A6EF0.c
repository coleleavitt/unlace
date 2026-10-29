/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6EF0
// Address: 0x00000000000A6EF0

//----- (00000000000A6EF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6EF0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  const char *v3; // rax
  const char *v4; // rbx
  size_t v5; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v8[0] = __readfsqword(0x28u);
  v2 = pack_dd(v7, (unsigned __int64)v8, *(_DWORD *)(a2 + 4));
  sub_56350(a1, v7, v2 - v7);
  if ( *(_QWORD *)(a2 + 16) )
    v3 = *(const char **)(a2 + 8);
  else
    v3 = s1;
  v4 = &byte_EB522;
  if ( v3 )
    v4 = v3;
  v5 = strlen(v4);
  sub_56350(a1, v4, v5 + 1);
  return __readfsqword(0x28u);
}
