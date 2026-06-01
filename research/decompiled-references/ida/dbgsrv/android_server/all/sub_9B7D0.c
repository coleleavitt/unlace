/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B7D0
// Address: 0x000000000009B7D0

//----- (000000000009B7D0) ----------------------------------------------------
__int64 __fastcall sub_9B7D0(__int64 **a1, signed int a2)
{
  __int64 *v2; // x8
  __int64 **v5; // x20
  __int64 *v6; // x8
  __int64 *v7; // x24
  __int64 v8; // x25
  __int64 *v9; // x22
  __int64 *v10; // x26
  __int64 *v11; // x24
  _QWORD *v12; // x24
  unsigned int v13; // t1
  __int64 v14; // x21
  __int128 v15; // q0
  __int64 *v16; // x8
  __int64 *v17; // x9
  __int64 *v18; // x8
  char *v20[3]; // [xsp+8h] [xbp-88h] BYREF
  __int128 v21; // [xsp+20h] [xbp-70h]
  char v22; // [xsp+30h] [xbp-60h]
  __int64 v23; // [xsp+38h] [xbp-58h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a1[39];
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v5 = a1 + 39;
  do
  {
    if ( *((_DWORD *)v2 + 8) >= a2 )
      v5 = (__int64 **)v2;
    v2 = (__int64 *)v2[*((_DWORD *)v2 + 8) < a2];
  }
  while ( v2 );
  if ( v5 == a1 + 39 )
    return 0xFFFFFFFFLL;
  if ( *((_DWORD *)v5 + 8) > a2 )
    return 0xFFFFFFFFLL;
  v6 = v5[6];
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v7 = v5[5];
  v8 = (__int64)v6 - 1;
  v9 = &v7[6 * ((_QWORD)v6 - 1)];
  if ( (((__int64 (__fastcall *)(__int64 **, _QWORD, __int64 *))(*a1)[60])(a1, (unsigned int)a2, v9) & 1) == 0 )
    return 0xFFFFFFFFLL;
  v10 = &v7[6 * v8];
  ((void (__fastcall *)(__int64 **, __int64, __int64, __int64 *, _QWORD))(*a1)[40])(
    a1,
    4,
    v10[4],
    a1[51],
    *((unsigned int *)a1 + 104));
  if ( *((_BYTE *)v10 + 40) )
  {
    v11 = &v7[6 * v8];
    v13 = *((_DWORD *)v11 + 2);
    v12 = v11 + 1;
    if ( (((__int64 (__fastcall *)(__int64 **, _QWORD, _QWORD, _QWORD, __int64))(*a1)[55])(
            a1,
            (unsigned int)a2,
            0,
            v13,
            *v9)
        & 1) == 0 )
    {
      sub_3A0D8((__int64)a1, "Failed to restore %zu registers!\n", *v12);
      return 0xFFFFFFFFLL;
    }
  }
  v14 = (__int64)&v5[5][6 * (_QWORD)v5[6]];
  sub_9D694(v20, (__int64 *)(v14 - 48));
  v15 = *(_OWORD *)(v14 - 24);
  v22 = *(_BYTE *)(v14 - 8);
  v21 = v15;
  v16 = v5[6];
  if ( v16 )
  {
    v17 = v5[5];
    v18 = (__int64 *)((char *)v16 - 1);
    v5[6] = v18;
    sub_931CC((char **)&v17[6 * (_QWORD)v18]);
  }
  sub_931CC(v20);
  if ( !v5[6] )
    sub_9D734(a1 + 38, (__int64 *)v5);
  if ( a1[20] )
    return 3;
  else
    return 1;
}
