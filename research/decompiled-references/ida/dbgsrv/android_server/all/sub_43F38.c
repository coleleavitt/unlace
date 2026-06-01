/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F38
// Address: 0x0000000000043F38

//----- (0000000000043F38) ----------------------------------------------------
__int64 __fastcall sub_43F38(__int64 result)
{
  __int64 v1; // x2
  __int64 v2; // x19
  __int64 v3; // x2
  __int64 v4; // x2

  v1 = *(_QWORD *)(result + 1536);
  v2 = result;
  if ( v1 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)result + 320LL))(
               result,
               4,
               v1,
               result + 1544,
               *(unsigned __int8 *)(result + 1548));
  v3 = *(_QWORD *)(v2 + 1552);
  *(_QWORD *)(v2 + 1536) = 0;
  *(_BYTE *)(v2 + 1548) = 0;
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 320LL))(
               v2,
               4,
               v3,
               v2 + 1560,
               *(unsigned __int8 *)(v2 + 1564));
  v4 = *(_QWORD *)(v2 + 1568);
  *(_QWORD *)(v2 + 1552) = 0;
  *(_BYTE *)(v2 + 1564) = 0;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 320LL))(
               v2,
               4,
               v4,
               v2 + 1576,
               *(unsigned __int8 *)(v2 + 1580));
  *(_QWORD *)(v2 + 1568) = 0;
  *(_BYTE *)(v2 + 1580) = 0;
  return result;
}
