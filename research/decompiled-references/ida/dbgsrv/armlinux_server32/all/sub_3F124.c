/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F124
// Address: 0x0003F124

//----- (0003F124) --------------------------------------------------------
bool __fastcall sub_3F124(int a1, char *a2, unsigned __int8 *a3)
{
  const char *v4; // r0
  char *v5; // [sp+0h] [bp-8h]
  unsigned __int8 *v6; // [sp+4h] [bp-4h]

  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    if ( *(_DWORD *)(a1 + 12) )
      v4 = *(const char **)(a1 + 8);
    else
      v4 = (const char *)&dword_8DB98;
    v5 = a2;
    v6 = a3;
    a1 = sub_3F110(v4);
    a2 = v5;
    a3 = v6;
  }
  return sub_48E9C((_BYTE *)a1, a2, a3, 0) == nullptr;
}
// 8DB98: using guessed type int dword_8DB98;
