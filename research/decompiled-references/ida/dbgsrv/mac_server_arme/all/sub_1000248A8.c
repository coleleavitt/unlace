/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000248A8
// Address: 0x00000001000248A8

//----- (00000001000248A8) ----------------------------------------------------
__int64 __fastcall sub_1000248A8(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  _QWORD *v5; // x1
  __int128 *v6; // x0
  unsigned __int8 *v7; // x1
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  _Unwind_Exception *v11; // x0
  int v12; // w1
  unsigned __int8 v13[8]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v14; // [xsp+10h] [xbp-40h]
  __int64 v15; // [xsp+18h] [xbp-38h]
  __int64 v16; // [xsp+20h] [xbp-30h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v2 = *(_QWORD **)(a1 + 192);
  v3 = v2[9];
  if ( v3 )
  {
    if ( v3 + *(_DWORD *)(a1 + 448) + 1 != *(_QWORD *)(a1 + 144) )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return set_qerrno();
    }
  }
  else
  {
    *(_DWORD *)(a1 + 448) = *(_DWORD *)(a1 + 144) - 1;
    v3 = v2[9];
  }
  v5 = (_QWORD *)v2[8];
  if ( v2[10] < (unsigned __int64)(v3 + 1) )
  {
    v5 = qvector_reserve(v2 + 8, v5, v3 + 1, 0x20u);
    v2[8] = v5;
    v3 = v2[9];
  }
  v6 = (__int128 *)&v5[4 * v3];
  *(_BYTE *)v6 = 2;
  *((_QWORD *)v6 + 2) = 0;
  *((_QWORD *)v6 + 3) = 0;
  *((_QWORD *)v6 + 1) = 0;
  ++v2[9];
  if ( *(_QWORD *)(a1 + 432) != 1 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(1437);
    if ( v12 )
      sub_10000150C(v11);
    _Unwind_Resume(v11);
  }
  swap_idcvs(v6, *(__int128 **)(a1 + 424));
  v7 = (unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
  v13[0] = 2;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  copy_idcv(v13, v7);
  v8 = *(_QWORD *)(a1 + 432);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 424);
    v10 = v8 - 1;
    *(_QWORD *)(a1 + 432) = v10;
    free_idcv((unsigned __int8 *)(v9 + 32 * v10));
  }
  free_idcv(v13);
  return 0;
}
// 100024A40: variable 'v12' is possibly undefined
// 100024A4C: variable 'v11' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
