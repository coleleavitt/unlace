/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477528
// Address: 0x0000000000477528

//----- (0000000000477528) ----------------------------------------------------
__int64 __fastcall sub_477528(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x0
  unsigned int v5; // w19
  int v6; // w23
  unsigned int v7; // w4
  __int64 (__fastcall *v8)(__int64, unsigned int *, __int64); // x3
  __int64 v9; // x0
  unsigned int v10; // w1
  unsigned int v12; // [xsp+34h] [xbp-Ch] BYREF

  v4 = a2[1];
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = v4 - 1;
    v7 = bswap32(v4 - 1);
  }
  else
  {
    v7 = 0;
    v6 = 0;
    v5 = 0;
  }
  v8 = *(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a1 + 64LL);
  v12 = v7;
  v9 = v8(a1, &v12, 4);
  v10 = 0;
  if ( v9 == 4 )
  {
    v10 = 1;
    if ( v6 )
      return v5 == (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *a2, v5);
  }
  return v10;
}
