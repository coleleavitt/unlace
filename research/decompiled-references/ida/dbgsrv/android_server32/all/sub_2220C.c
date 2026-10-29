/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2220C
// Address: 0x0002220C

//----- (0002220C) --------------------------------------------------------
bool __fastcall sub_2220C(int a1, int a2)
{
  _BOOL4 result; // r0

  if ( *(_DWORD *)a2 )
    result = (*(int (__fastcall **)(int, int, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 160))(
               a1,
               4,
               *(_DWORD *)a2,
               a2 + 4,
               *(unsigned __int8 *)(a2 + 8)) != 0;
  else
    result = 1;
  *(_BYTE *)(a2 + 8) = 0;
  *(_DWORD *)a2 = 0;
  return result;
}
