/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CC93C
// Address: 0x00000000000CC93C

//----- (00000000000CC93C) ----------------------------------------------------
__int64 __fastcall sub_CC93C(_QWORD *a1)
{
  __int64 v1; // x8
  int v3; // w9

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
  *(_QWORD *)(v1 + 40) = 0;
  a1[2] = 0;
  a1[5] = 0;
  a1[6] = 0;
  v3 = *(_DWORD *)(v1 + 16);
  if ( v3 )
    a1[12] = v3 & 1;
  *(_QWORD *)(v1 + 20) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v1 + 28) = 0x8000;
  *(_QWORD *)(v1 + 144) = v1 + 1368;
  *(_QWORD *)(v1 + 104) = v1 + 1368;
  *(_QWORD *)(v1 + 112) = v1 + 1368;
  *(_QWORD *)(v1 + 8) = 16180;
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 7144) = 0xFFFFFFFF00000001LL;
  return 0;
}
// 11D7B8: using guessed type __int64[511];
