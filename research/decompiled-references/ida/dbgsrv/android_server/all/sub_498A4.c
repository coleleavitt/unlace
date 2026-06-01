/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498A4
// Address: 0x00000000000498A4

//----- (00000000000498A4) ----------------------------------------------------
__int64 __fastcall sub_498A4(__int64 a1, __int64 a2)
{
  __int64 v3; // x23
  void *v5; // x0
  const void *v6; // x1
  void *v7; // x20
  void *v8; // x0
  __int64 v9; // x8
  void *v11; // [xsp+0h] [xbp-50h]
  __int64 v12; // [xsp+8h] [xbp-48h]
  __int64 v13; // [xsp+10h] [xbp-40h]
  __int64 v14; // [xsp+18h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v5 = qalloc_or_throw(8 * v3);
    v6 = *(const void **)a2;
    v7 = v5;
    memcpy(v5, v6, 8 * v3);
  }
  else
  {
    v7 = nullptr;
  }
  v11 = v7;
  v12 = v3;
  v13 = v3;
  v8 = *(void **)a1;
  v9 = v3;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v8);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    v7 = v11;
    v9 = v12;
    v3 = v13;
  }
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v3;
  return a1;
}
