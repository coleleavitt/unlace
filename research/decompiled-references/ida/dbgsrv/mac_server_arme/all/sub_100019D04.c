/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019D04
// Address: 0x0000000100019D04

//----- (0000000100019D04) ----------------------------------------------------
__int64 __fastcall sub_100019D04(
        _BYTE *a1,
        __int64 a2,
        const char *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x20
  void *v16; // [xsp+18h] [xbp-58h]
  void *v17; // [xsp+20h] [xbp-50h] BYREF
  __int64 v18; // [xsp+28h] [xbp-48h]
  __int64 v19; // [xsp+30h] [xbp-40h]

  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  if ( sub_100019C10((__int64)a1, (__int64)&v17, a3, (__int64)a4, a5, a6, a7, a8) )
  {
    if ( v18 )
      v12 = (const char *)v17;
    else
      v12 = &byte_10007AE40;
    v13 = open_linput(v12, 0);
    v16 = (void *)v13;
    if ( v13 && sub_100016ECC((__int64)a1, v13, a4) )
    {
      v14 = (*(__int64 (__fastcall **)(_BYTE *, void *, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v16, a2, a5);
    }
    else
    {
      sub_100000B44();
      v14 = 0;
    }
    close_linput(v16);
  }
  else if ( a1[25] == 1 )
  {
    sub_100000B44();
    v14 = 0;
    a1[25] = 0;
  }
  else
  {
    v14 = 0;
  }
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
  }
  return v14;
}
// 10007AE40: using guessed type char byte_10007AE40;
