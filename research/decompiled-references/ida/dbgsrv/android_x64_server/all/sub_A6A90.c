/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6A90
// Address: 0x00000000000A6A90

//----- (00000000000A6A90) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6A90(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // rbx
  _BYTE *v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r15
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  _BYTE v13[5]; // [rsp+1Bh] [rbp-3Dh] BYREF
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__int64 *)a2;
  v14[0] = __readfsqword(0x28u);
  v4 = pack_dd(v13, (unsigned __int64)v14, *(_DWORD *)(a2 + 8));
  sub_56350(a1, v13, v4 - v13);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v5 = 0;
    v6 = 16;
    do
    {
      v7 = *v3;
      v8 = pack_dd(v13, (unsigned __int64)v14, *(_DWORD *)(*v3 + v6 - 16));
      sub_56350(a1, v13, v8 - v13);
      v9 = pack_dd(v13, (unsigned __int64)v14, *(_DWORD *)(v7 + v6));
      sub_56350(a1, v13, v9 - v13);
      if ( a3 )
      {
        v10 = pack_dd(v13, (unsigned __int64)v14, *(_DWORD *)(v7 + v6 - 12));
        sub_56350(a1, v13, v10 - v13);
        sub_56350(a1, *(const void **)(v7 + v6 - 8), *(_QWORD *)(v7 + v6));
      }
      ++v5;
      v6 += 32;
      v3 = (__int64 *)a2;
    }
    while ( v5 < *(_QWORD *)(a2 + 8) );
  }
  return __readfsqword(0x28u);
}
