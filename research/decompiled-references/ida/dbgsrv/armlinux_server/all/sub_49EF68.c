/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49EF68
// Address: 0x000000000049EF68

//----- (000000000049EF68) ----------------------------------------------------
__int64 __fastcall sub_49EF68(_QWORD *a1)
{
  unsigned __int64 v2; // x0
  _QWORD *v3; // x3
  _QWORD *v4; // x1
  int v6; // w2
  int v7; // w4
  int v8; // w2

  v2 = sub_49F2B0();
  v3 = *(_QWORD **)v2;
  v4 = a1 - 10;
  if ( (unsigned __int64)(*a1 - 0x474E5543432B2B00LL) <= 1 )
  {
    v6 = *((_DWORD *)a1 - 10);
    v7 = *(_DWORD *)(v2 + 8);
    if ( v6 >= 0 )
      v8 = v6 + 1;
    else
      v8 = 1 - v6;
    *((_DWORD *)a1 - 10) = v8;
    *(_DWORD *)(v2 + 8) = v7 - 1;
    if ( v3 != v4 )
    {
      *(a1 - 6) = v3;
      *(_QWORD *)v2 = v4;
    }
    return *(a1 - 1);
  }
  else
  {
    if ( v3 )
      sub_49DBB0();
    *(_QWORD *)v2 = v4;
    return 0;
  }
}
