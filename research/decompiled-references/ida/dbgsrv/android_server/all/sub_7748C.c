/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7748C
// Address: 0x000000000007748C

//----- (000000000007748C) ----------------------------------------------------
__int64 __fastcall sub_7748C(__int64 *a1, unsigned __int8 *a2)
{
  int v3; // w0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  unsigned __int8 v10[8]; // [xsp+8h] [xbp-48h] BYREF
  void *ptr; // [xsp+10h] [xbp-40h]
  __int64 v12; // [xsp+18h] [xbp-38h]
  __int64 v13; // [xsp+20h] [xbp-30h]
  __int64 v14; // [xsp+28h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  move_idcv(a2, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
  if ( v3 )
    return 0;
  v5 = *a1;
  v6 = a1[1];
  v10[0] = 2;
  v12 = 0;
  v13 = 0;
  ptr = nullptr;
  copy_idcv(v10, (unsigned __int8 *)(v5 + 32 * v6 - 32));
  v7 = a1[1];
  if ( v7 )
  {
    v8 = *a1;
    v9 = v7 - 1;
    a1[1] = v9;
    free_idcv((__int64 *)(v8 + 32 * v9));
  }
  if ( v10[0] == 5 )
  {
    sub_6F17C((__int64)ptr, v10);
  }
  else if ( v10[0] == 7 )
  {
    if ( ptr )
    {
      v12 = 0;
      qfree(ptr);
      ptr = nullptr;
      v13 = 0;
    }
  }
  return 1;
}
// 774C0: variable 'v3' is possibly undefined
