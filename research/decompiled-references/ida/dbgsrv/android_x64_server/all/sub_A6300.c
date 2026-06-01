/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6300
// Address: 0x00000000000A6300

//----- (00000000000A6300) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6300(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  const char *v7; // rbx
  size_t v8; // rax
  const char *v9; // rbx
  size_t v10; // rax
  _BYTE v12[5]; // [rsp+Bh] [rbp-3Dh] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v13[0] = __readfsqword(0x28u);
  if ( a3 > 0 )
  {
    v4 = (unsigned int)a3;
    do
    {
      v5 = pack_dd(v12, (unsigned __int64)v13, *(_DWORD *)a2);
      sub_56350(a1, v12, v5 - v12);
      v6 = pack_dd(v12, (unsigned __int64)v13, *(_DWORD *)(a2 + 4));
      sub_56350(a1, v12, v6 - v12);
      v7 = s1;
      if ( *(_QWORD *)(a2 + 16) )
        v7 = *(const char **)(a2 + 8);
      if ( !v7 )
        v7 = &byte_EB522;
      v8 = strlen(v7);
      sub_56350(a1, v7, v8 + 1);
      v9 = s1;
      if ( *(_QWORD *)(a2 + 40) )
        v9 = *(const char **)(a2 + 32);
      if ( !v9 )
        v9 = &byte_EB522;
      v10 = strlen(v9);
      sub_56350(a1, v9, v10 + 1);
      a2 += 56;
      --v4;
    }
    while ( v4 );
  }
  return __readfsqword(0x28u);
}
