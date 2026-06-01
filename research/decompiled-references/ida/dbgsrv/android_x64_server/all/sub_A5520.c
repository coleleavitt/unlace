/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5520
// Address: 0x00000000000A5520

//----- (00000000000A5520) ----------------------------------------------------
unsigned __int64 __fastcall sub_A5520(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  const char *v4; // rax
  const char *v5; // rbx
  size_t v6; // rax
  _BYTE v8[10]; // [rsp+6h] [rbp-32h] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[0] = __readfsqword(0x28u);
  v2 = pack_dq(v8, (unsigned __int64)v9, *a2 + 1LL);
  sub_56350(a1, v8, v2 - v8);
  v3 = pack_dq(v8, (unsigned __int64)v9, a2[1] + 1LL);
  sub_56350(a1, v8, v3 - v8);
  if ( a2[3] )
    v4 = (const char *)a2[2];
  else
    v4 = s1;
  v5 = &byte_EB522;
  if ( v4 )
    v5 = v4;
  v6 = strlen(v5);
  sub_56350(a1, v5, v6 + 1);
  return __readfsqword(0x28u);
}
