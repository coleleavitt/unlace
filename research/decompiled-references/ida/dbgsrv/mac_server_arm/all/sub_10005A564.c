/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A564
// Address: 0x000000010005A564

//----- (000000010005A564) ----------------------------------------------------
__int64 __fastcall sub_10005A564(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x20
  __int64 *v4; // x22
  __int64 v6; // x22
  __int64 v7; // x0

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v4 = (__int64 *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v3
    && (sub_10001115C((_QWORD **)(a2 + 8), v3),
        v6 = *v4,
        v7 = sub_10005991C(),
        (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 288LL))(
          v7,
          v2,
          v6,
          v3,
          0) != v3) )
  {
    return throw_idc_exception((unsigned __int8 *)a2, "read error");
  }
  else
  {
    return 0;
  }
}
