/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4625B0
// Address: 0x00000000004625B0

//----- (00000000004625B0) ----------------------------------------------------
__int64 __fastcall sub_4625B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x3
  __int64 v4; // x22
  __int64 v5; // x21
  bool v6; // zf
  __int64 v7; // x3
  __int64 v8; // x19
  __int64 v9; // x0

  v4 = a1[5];
  v3 = a1[6];
  v5 = a1[1];
  v6 = v3 == 0;
  v7 = v3 - 1;
  if ( v6 )
    v8 = 0;
  else
    v8 = v7;
  v9 = sub_461B70();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 296LL))(
                          v9,
                          v5,
                          v4,
                          v8,
                          0);
  return 0;
}
