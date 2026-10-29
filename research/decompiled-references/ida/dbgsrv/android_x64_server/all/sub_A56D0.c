/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A56D0
// Address: 0x00000000000A56D0

//----- (00000000000A56D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A56D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  __int64 v4; // r12
  __int64 v5; // r14
  _BYTE *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  _BYTE v10[5]; // [rsp+Bh] [rbp-3Dh] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[0] = __readfsqword(0x28u);
  v2 = a2[1];
  v3 = pack_dd(v10, (unsigned __int64)v11, v2);
  sub_56350(a1, v10, v3 - v10);
  if ( v2 )
  {
    v4 = 16;
    do
    {
      v5 = *a2;
      v6 = pack_dd(v10, (unsigned __int64)v11, *(_DWORD *)(*a2 + v4 - 16));
      sub_56350(a1, v10, v6 - v10);
      v7 = s1;
      if ( *(_QWORD *)(v5 + v4) )
        v7 = *(const char **)(v5 + v4 - 8);
      if ( !v7 )
        v7 = &byte_EB522;
      v8 = strlen(v7);
      sub_56350(a1, v7, v8 + 1);
      v4 += 32;
      --v2;
    }
    while ( v2 );
  }
  return __readfsqword(0x28u);
}
