/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024D70
// Address: 0x0000000100024D70

//----- (0000000100024D70) ----------------------------------------------------
__int64 __fastcall sub_100024D70(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 v3; // r14
  __int64 v4; // rax
  _OWORD v6[2]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int8 v7; // [rsp+27h] [rbp-19h] BYREF

  v2 = 0;
  memset(v6, 0, 24);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 <= 0 )
  {
    v4 = 0;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 8);
    sub_10001D550((__int64)v6, v3 + 1, &v7);
    *(_BYTE *)(*(_QWORD *)&v6[0] + v3) = 0;
    v4 = *(_QWORD *)&v6[0];
    v2 = *(_OWORD *)((char *)v6 + 8);
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v4;
  *(_OWORD *)(a2 + 16) = v2;
  return 0;
}
