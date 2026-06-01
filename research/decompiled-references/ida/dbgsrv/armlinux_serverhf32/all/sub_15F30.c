/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15F30
// Address: 0x00015F30

//----- (00015F30) --------------------------------------------------------
int __fastcall sub_15F30(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  unsigned __int16 v7; // [sp+Ah] [bp-Ah] BYREF

  result = sub_639E4(a1, a2, a3);
  if ( *a3 == 2 )
  {
    result = (*(int (__fastcall **)(int, _DWORD, unsigned __int16 *))(*(_DWORD *)a1 + 144))(a1, *a2, &v7);
    if ( result > 0 )
    {
      result = sub_64108(v7);
      if ( result )
        *a3 |= 0x80u;
    }
  }
  return result;
}
