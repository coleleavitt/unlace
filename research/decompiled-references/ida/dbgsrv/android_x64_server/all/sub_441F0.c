/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441F0
// Address: 0x00000000000441F0

//----- (00000000000441F0) ----------------------------------------------------
__int64 __fastcall sub_441F0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 832);
  if ( v1 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
               a1,
               4,
               v1,
               a1 + 840,
               *(unsigned __int8 *)(a1 + 841));
  *(_QWORD *)(a1 + 832) = 0;
  *(_BYTE *)(a1 + 841) = 0;
  v3 = *(_QWORD *)(a1 + 848);
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
               a1,
               4,
               v3,
               a1 + 856,
               *(unsigned __int8 *)(a1 + 857));
  *(_QWORD *)(a1 + 848) = 0;
  *(_BYTE *)(a1 + 857) = 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
               a1,
               4,
               v4,
               a1 + 872,
               *(unsigned __int8 *)(a1 + 873));
  *(_QWORD *)(a1 + 864) = 0;
  *(_BYTE *)(a1 + 873) = 0;
  return result;
}
