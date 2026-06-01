/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400692E0
// Address: 0x00000001400692E0

//----- (00000001400692E0) ----------------------------------------------------
__int64 __fastcall sub_1400692E0(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rbx
  char v6[4096]; // [rsp+20h] [rbp-1018h] BYREF

  sub_140063BF0(a1, 0, 0);
  v2 = 0;
  v3 = sub_140063C70(a1);
  if ( v3 <= 0 )
    return v2;
  while ( 1 )
  {
    v4 = 4096;
    if ( (unsigned __int64)v3 < 0x1000 )
      v4 = v3;
    if ( sub_140063BD0(a1, v6, v4) != v4 )
      break;
    v3 -= v4;
    v2 = sub_14006A3F0(v2, v6, v4);
    if ( v3 <= 0 )
      return v2;
  }
  return 0xFFFFFFFFLL;
}
