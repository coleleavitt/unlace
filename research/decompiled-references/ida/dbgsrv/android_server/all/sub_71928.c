/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71928
// Address: 0x0000000000071928

//----- (0000000000071928) ----------------------------------------------------
__int64 __fastcall sub_71928(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int8 *a4)
{
  int v7; // w8
  __int64 v9; // x0
  unsigned int v10; // w2
  __int64 *v11; // x0
  __int64 v13[2]; // [xsp+10h] [xbp-40h] BYREF

  v13[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = a2[7];
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = sub_6A248(*(_QWORD *)(a1 + 8), v7);
      v10 = *(_DWORD *)(v9 + 60);
      if ( v10 != -1 )
        return sub_732B0(a1, a2, v10, a3, a4, 0) & 1;
      v7 = *(_DWORD *)(v9 + 24);
      if ( !v7 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v13[0] = a3;
    v11 = sub_7C2AC((__int64)a2, a3, (__int64)&byte_104627, v13);
    copy_idcv((unsigned __int8 *)v11 + 56, a4);
    return 1;
  }
}
// 104627: using guessed type char byte_104627;
