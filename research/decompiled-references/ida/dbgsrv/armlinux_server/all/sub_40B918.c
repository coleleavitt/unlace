/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B918
// Address: 0x000000000040B918

//----- (000000000040B918) ----------------------------------------------------
__int64 __fastcall sub_40B918(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x2
  __int64 v4; // x2
  __int64 v5; // x2

  v1 = result + 1536;
  v2 = result;
  v3 = *(_QWORD *)(result + 1664);
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)result + 320LL))(
               result,
               4,
               v3,
               result + 1672,
               *(unsigned __int8 *)(result + 1676));
  v4 = *(_QWORD *)(v1 + 144);
  *(_QWORD *)(v1 + 128) = 0;
  *(_BYTE *)(v1 + 140) = 0;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 320LL))(
               v2,
               4,
               v4,
               v2 + 1688,
               *(unsigned __int8 *)(v1 + 156));
  v5 = *(_QWORD *)(v1 + 160);
  *(_QWORD *)(v1 + 144) = 0;
  *(_BYTE *)(v1 + 156) = 0;
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 320LL))(
               v2,
               4,
               v5,
               v2 + 1704,
               *(unsigned __int8 *)(v1 + 172));
  *(_QWORD *)(v1 + 160) = 0;
  *(_BYTE *)(v1 + 172) = 0;
  return result;
}
