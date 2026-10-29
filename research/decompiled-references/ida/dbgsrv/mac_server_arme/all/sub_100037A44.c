/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100037A44
// Address: 0x0000000100037A44

//----- (0000000100037A44) ----------------------------------------------------
void __fastcall sub_100037A44(__int64 a1)
{
  _QWORD *v2; // x20
  unsigned __int8 *v3; // x1
  __int64 v4; // x9
  __int64 v5; // x8
  unsigned __int8 v6[8]; // [xsp+8h] [xbp-38h] BYREF
  void *v7; // [xsp+10h] [xbp-30h]
  __int64 v8; // [xsp+18h] [xbp-28h]
  __int64 v9; // [xsp+20h] [xbp-20h]

  v2 = (_QWORD *)(a1 + 32);
  v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
  v6[0] = 2;
  v8 = 0;
  v9 = 0;
  v7 = nullptr;
  copy_idcv(v6, v3);
  if ( *v2 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = *v2 - 1LL;
    *(_QWORD *)(a1 + 32) = v5;
    sub_10003E3A4((unsigned __int8 *)(v4 + 32 * v5));
  }
  if ( v6[0] == 5 )
  {
    sub_10003307C((__int64)v7, v6);
  }
  else if ( v6[0] == 7 )
  {
    if ( v7 )
    {
      v8 = 0;
      qfree(v7);
    }
  }
}
