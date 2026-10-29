/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A2C
// Address: 0x0000000000042A2C

//----- (0000000000042A2C) ----------------------------------------------------
bool __fastcall sub_42A2C(__int64 a1, __int64 a2)
{
  _BOOL8 result; // x0

  if ( *(_QWORD *)a2 )
    result = (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
               a1,
               4,
               *(_QWORD *)a2,
               a2 + 8,
               *(unsigned __int8 *)(a2 + 12)) != 0;
  else
    result = 1;
  *(_QWORD *)a2 = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
