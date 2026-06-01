/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000378F0
// Address: 0x00000001000378F0

//----- (00000001000378F0) ----------------------------------------------------
__int64 __fastcall sub_1000378F0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int8x16x2_t a9)
{
  __int64 v11; // x21
  __int64 v12; // x8
  __int128 v13; // q0
  unsigned __int8 *v14; // x1
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x8
  unsigned __int8 v19[8]; // [xsp+8h] [xbp-48h] BYREF
  void *v20; // [xsp+10h] [xbp-40h]
  __int64 v21; // [xsp+18h] [xbp-38h]
  __int64 v22; // [xsp+20h] [xbp-30h]

  v11 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
  if ( !(unsigned int)idcv_string((unsigned __int8 *)(v11 - 32), a9, (__int64)a2, a3, a4, a5, a6, a7, a8) )
  {
    v12 = *a2;
    *a2 = *(_QWORD *)(v11 - 24);
    v13 = *(_OWORD *)(a2 + 1);
    a2[1] = *(_QWORD *)(v11 - 16);
    a2[2] = *(_QWORD *)(v11 - 8);
    *(_QWORD *)(v11 - 24) = v12;
    *(_OWORD *)(v11 - 16) = v13;
    v14 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
    v19[0] = 2;
    v21 = 0;
    v22 = 0;
    v20 = nullptr;
    copy_idcv(v19, v14);
    if ( *(_QWORD *)(a1 + 32) )
    {
      v15 = *(_QWORD *)(a1 + 24);
      v16 = *(_QWORD *)(a1 + 32) - 1LL;
      *(_QWORD *)(a1 + 32) = v16;
      sub_1000349EC((unsigned __int8 *)(v15 + 32 * v16));
    }
    if ( v19[0] == 5 )
    {
      sub_10003307C((__int64)v20, v19);
    }
    else if ( v19[0] == 7 )
    {
      if ( v20 )
      {
        v21 = 0;
        qfree(v20);
      }
    }
    v17 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(v17 - 32) == 5 )
      return *(_QWORD *)(v17 - 24);
    set_qerrno();
  }
  return 0;
}
