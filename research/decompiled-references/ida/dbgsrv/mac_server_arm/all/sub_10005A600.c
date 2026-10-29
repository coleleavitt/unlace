/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A600
// Address: 0x000000010005A600

//----- (000000010005A600) ----------------------------------------------------
__int64 __fastcall sub_10005A600(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  __int64 v5; // x21
  bool v6; // cf
  __int64 v7; // x8
  __int64 v8; // x22
  __int64 v9; // x0

  v3 = a1[1];
  v5 = a1[5];
  v4 = a1[6];
  v6 = v4 != 0;
  v7 = v4 - 1;
  if ( v6 )
    v8 = v7;
  else
    v8 = 0;
  v9 = sub_10005991C();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 296LL))(
                          v9,
                          v3,
                          v5,
                          v8,
                          0);
  return 0;
}
