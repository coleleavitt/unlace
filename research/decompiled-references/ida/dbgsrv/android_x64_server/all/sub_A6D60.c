/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6D60
// Address: 0x00000000000A6D60

//----- (00000000000A6D60) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6D60(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rsi
  size_t v5; // rdx
  _BYTE *v6; // rax
  _BYTE v8[5]; // [rsp+6h] [rbp-32h] BYREF
  _BYTE v9[5]; // [rsp+Bh] [rbp-2Dh] BYREF
  unsigned __int64 v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[0] = __readfsqword(0x28u);
  v3 = pack_dd(v8, (unsigned __int64)v9, *(_DWORD *)a2 + 3);
  sub_56350(a1, v8, v3 - v8);
  if ( *(_DWORD *)a2 != -3 )
  {
    if ( *(_DWORD *)a2 == -2 )
    {
      v4 = v8;
      v5 = pack_dq(v8, (unsigned __int64)v10, *(_QWORD *)(a2 + 8) + 1LL) - v8;
    }
    else
    {
      v6 = pack_dd(v8, (unsigned __int64)v9, *(_DWORD *)(a2 + 16));
      sub_56350(a1, v8, v6 - v8);
      v4 = *(_BYTE **)(a2 + 8);
      v5 = *(_QWORD *)(a2 + 16);
    }
    sub_56350(a1, v4, v5);
  }
  return __readfsqword(0x28u);
}
