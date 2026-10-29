/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E81C
// Address: 0x000000000009E81C

//----- (000000000009E81C) ----------------------------------------------------
__int64 __fastcall sub_9E81C(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v6; // x22
  __int64 v7; // x0

  v3 = a1[5];
  v2 = a1[6];
  v4 = a1[1];
  if ( v2 )
    v6 = v2 - 1;
  else
    v6 = 0;
  v7 = sub_9DBD8();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 296LL))(
                          v7,
                          v4,
                          v3,
                          v6,
                          0);
  return 0;
}
