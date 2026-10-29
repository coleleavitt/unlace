/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_731E8
// Address: 0x00000000000731E8

//----- (00000000000731E8) ----------------------------------------------------
void __fastcall sub_731E8(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x10
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  unsigned __int8 v7[8]; // [xsp+8h] [xbp-48h] BYREF
  void *ptr; // [xsp+10h] [xbp-40h]
  __int64 v9; // [xsp+18h] [xbp-38h]
  __int64 v10; // [xsp+20h] [xbp-30h]
  __int64 v11; // [xsp+28h] [xbp-28h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  v7[0] = 2;
  v9 = 0;
  v10 = 0;
  ptr = nullptr;
  copy_idcv(v7, (unsigned __int8 *)(v2 + 32 * v3 - 32));
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = v4 - 1;
    *(_QWORD *)(a1 + 32) = v6;
    free_idcv((__int64 *)(v5 + 32 * v6));
  }
  if ( v7[0] == 5 )
  {
    sub_6F17C((__int64)ptr, v7);
  }
  else if ( v7[0] == 7 )
  {
    if ( ptr )
    {
      v9 = 0;
      qfree(ptr);
      ptr = nullptr;
      v10 = 0;
    }
  }
}
