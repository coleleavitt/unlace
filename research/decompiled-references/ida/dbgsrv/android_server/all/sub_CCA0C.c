/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CCA0C
// Address: 0x00000000000CCA0C

//----- (00000000000CCA0C) ----------------------------------------------------
__int64 __fastcall sub_CCA0C(_QWORD *a1)
{
  __int64 v1; // x8
  __int64 v3; // x8
  int v4; // w9

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v1 = a1[7];
  if ( !v1 )
    return 4294967294LL;
  if ( *(_QWORD **)v1 != a1 )
    return 4294967294LL;
  if ( (unsigned int)(*(_DWORD *)(v1 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  *(_DWORD *)(v1 + 60) = 0;
  *(_QWORD *)(v1 + 64) = 0;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 )
    return 4294967294LL;
  if ( *(_QWORD **)v3 != a1 )
    return 4294967294LL;
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  *(_QWORD *)(v3 + 40) = 0;
  a1[2] = 0;
  a1[5] = 0;
  a1[6] = 0;
  v4 = *(_DWORD *)(v3 + 16);
  if ( v4 )
    a1[12] = v4 & 1;
  *(_QWORD *)(v3 + 20) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v3 + 28) = 0x8000;
  *(_QWORD *)(v3 + 144) = v3 + 1368;
  *(_QWORD *)(v3 + 104) = v3 + 1368;
  *(_QWORD *)(v3 + 112) = v3 + 1368;
  *(_QWORD *)(v3 + 8) = 16180;
  *(_QWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 7144) = 0xFFFFFFFF00000001LL;
  return 0;
}
// 11D7B8: using guessed type __int64[511];
