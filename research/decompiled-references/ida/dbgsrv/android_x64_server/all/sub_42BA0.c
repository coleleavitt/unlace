/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BA0
// Address: 0x0000000000042BA0

//----- (0000000000042BA0) ----------------------------------------------------
bool __fastcall sub_42BA0(__int64 a1, __int64 a2)
{
  bool result; // al

  if ( *(_QWORD *)a2 )
    result = (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
               a1,
               4,
               *(_QWORD *)a2,
               a2 + 8,
               *(unsigned __int8 *)(a2 + 9)) != 0;
  else
    result = 1;
  *(_QWORD *)a2 = 0;
  *(_BYTE *)(a2 + 9) = 0;
  return result;
}
