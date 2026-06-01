/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73FE0
// Address: 0x0000000000073FE0

//----- (0000000000073FE0) ----------------------------------------------------
__int64 __fastcall sub_73FE0(__int64 a1)
{
  _DWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  char v8; // w19
  void *v9; // x0
  __int128 v11; // [xsp+0h] [xbp-60h] BYREF
  __int64 v12; // [xsp+10h] [xbp-50h]
  unsigned __int8 v13[8]; // [xsp+18h] [xbp-48h] BYREF
  void *ptr; // [xsp+20h] [xbp-40h]
  __int64 v15; // [xsp+28h] [xbp-38h]
  __int64 v16; // [xsp+30h] [xbp-30h]
  __int64 v17; // [xsp+38h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = 0u;
  v12 = 0;
  v2 = (_DWORD *)sub_730A4(a1, &v11);
  if ( !v2 )
  {
    sub_71E4C(a1);
    v8 = 0;
    v9 = (void *)v11;
    if ( !(_QWORD)v11 )
      return v8 & 1;
    goto LABEL_12;
  }
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32);
  v13[0] = 2;
  v15 = 0;
  v16 = 0;
  ptr = nullptr;
  copy_idcv(v13, (unsigned __int8 *)(v3 + 32 * v4 - 32));
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v5 - 1;
    *(_QWORD *)(a1 + 32) = v7;
    free_idcv((__int64 *)(v6 + 32 * v7));
  }
  if ( v13[0] == 5 )
  {
    sub_6F17C((__int64)ptr, v13);
  }
  else if ( v13[0] == 7 && ptr )
  {
    v15 = 0;
    qfree(ptr);
    ptr = nullptr;
    v16 = 0;
  }
  v8 = sub_71928(a1, v2, (__int64)&v11, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32));
  v9 = (void *)v11;
  if ( (_QWORD)v11 )
  {
LABEL_12:
    *((_QWORD *)&v11 + 1) = 0;
    qfree(v9);
    *(_QWORD *)&v11 = 0;
    v12 = 0;
  }
  return v8 & 1;
}
// 71E4C: using guessed type __int64 __fastcall sub_71E4C(_QWORD);
