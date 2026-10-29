/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_730A4
// Address: 0x00000000000730A4

//----- (00000000000730A4) ----------------------------------------------------
__int64 __fastcall sub_730A4(__int64 a1, __int128 *a2)
{
  _QWORD *v4; // x21
  __int128 v5; // q0
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x10
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x9
  unsigned __int8 v15[8]; // [xsp+8h] [xbp-58h] BYREF
  void *ptr; // [xsp+10h] [xbp-50h]
  __int64 v17; // [xsp+18h] [xbp-48h]
  __int64 v18; // [xsp+20h] [xbp-40h]
  __int64 v19; // [xsp+28h] [xbp-38h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 32 * (*(_QWORD *)(a1 + 32) - 1LL));
  if ( !(unsigned int)idcv_string((__int64)v4) )
  {
    v5 = *a2;
    v6 = *((_QWORD *)a2 + 2);
    *(_QWORD *)a2 = v4[1];
    *((_QWORD *)a2 + 1) = v4[2];
    *((_QWORD *)a2 + 2) = v4[3];
    *(_OWORD *)(v4 + 1) = v5;
    v4[3] = v6;
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 32);
    v15[0] = 2;
    v17 = 0;
    v18 = 0;
    ptr = nullptr;
    copy_idcv(v15, (unsigned __int8 *)(v7 + 32 * v8 - 32));
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = v9 - 1;
      *(_QWORD *)(a1 + 32) = v11;
      free_idcv((__int64 *)(v10 + 32 * v11));
    }
    if ( v15[0] == 5 )
    {
      sub_6F17C((__int64)ptr, v15);
    }
    else if ( v15[0] == 7 )
    {
      if ( ptr )
      {
        v17 = 0;
        qfree(ptr);
        ptr = nullptr;
        v18 = 0;
      }
    }
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(_QWORD *)(a1 + 32) - 1LL;
    if ( *(_BYTE *)(v12 + 32 * v13) == 5 )
      return *(_QWORD *)(v12 + 32 * v13 + 8);
    set_qerrno(0x5FCu);
  }
  return 0;
}
