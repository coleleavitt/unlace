/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449F8
// Address: 0x00000000000449F8

//----- (00000000000449F8) ----------------------------------------------------
__int64 __fastcall sub_449F8(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 *v7; // x22
  __int64 **v8; // x21
  unsigned __int64 v9; // x8
  __int64 *v11; // x0
  __int64 v12; // x8
  __int64 *v13; // x1

  if ( !a4
    || (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         a3,
         a4,
         a5,
         0) != a5 )
  {
    return 0;
  }
  v7 = *(__int64 **)(a1 + 1904);
  v8 = (__int64 **)(a1 + 1904);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v7[4];
        if ( v9 > a3 )
          break;
        if ( v9 >= a3 )
          goto LABEL_14;
        v8 = (__int64 **)(v7 + 1);
        if ( !v7[1] )
          goto LABEL_14;
        v7 = (__int64 *)v7[1];
      }
      if ( !*v7 )
        break;
      v8 = (__int64 **)v7;
      v7 = (__int64 *)*v7;
    }
    v8 = (__int64 **)v7;
LABEL_14:
    if ( *v8 )
      return 1;
    goto LABEL_15;
  }
  v7 = (__int64 *)(a1 + 1904);
  if ( !*v8 )
  {
LABEL_15:
    v11 = (__int64 *)operator new(0x28u);
    v11[4] = a3;
    *v11 = 0;
    v11[1] = 0;
    v11[2] = (__int64)v7;
    *v8 = v11;
    v12 = **(_QWORD **)(a1 + 1896);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 1896) = v12;
      v13 = *v8;
    }
    else
    {
      v13 = v11;
    }
    sub_48ED8(*(__int64 **)(a1 + 1904), v13);
    ++*(_QWORD *)(a1 + 1912);
  }
  return 1;
}
