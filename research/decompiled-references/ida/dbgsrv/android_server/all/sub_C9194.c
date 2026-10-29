/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9194
// Address: 0x00000000000C9194

//----- (00000000000C9194) ----------------------------------------------------
__int64 __fastcall sub_C9194(__int64 a1)
{
  __int64 v2; // x20
  int v4; // w8
  int v5; // w8
  bool v6; // zf
  int v7; // w8
  __int64 v8; // x0

  if ( !a1 )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 4294967294LL;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 || *(_QWORD *)v2 != a1 )
    return 4294967294LL;
  v4 = *(_DWORD *)(v2 + 8);
  if ( ((unsigned int)(v4 - 57) > 0x38 || ((1LL << ((unsigned __int8)v4 - 57)) & 0x100400400011001LL) == 0)
    && v4 != 666
    && v4 != 42 )
  {
    return 4294967294LL;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 88) = 2;
  v5 = *(_DWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(v2 + 40) = 0;
  if ( v5 < 0 )
  {
    v5 = -v5;
    *(_DWORD *)(v2 + 48) = v5;
  }
  v6 = v5 == 2;
  if ( v5 == 2 )
    v7 = 57;
  else
    v7 = 42;
  *(_DWORD *)(v2 + 8) = v7;
  if ( v6 )
    v8 = sub_C8324(0, nullptr, 0);
  else
    v8 = sub_D4634(0, nullptr, 0);
  *(_QWORD *)(a1 + 96) = v8;
  *(_DWORD *)(v2 + 76) = -2;
  sub_CF950(v2);
  return 0;
}
