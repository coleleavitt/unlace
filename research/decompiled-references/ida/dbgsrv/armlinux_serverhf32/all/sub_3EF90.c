/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EF90
// Address: 0x0003EF90

//----- (0003EF90) --------------------------------------------------------
bool __fastcall sub_3EF90(int a1, char *a2, unsigned __int8 *a3)
{
  const char *v4; // r0
  char *v5; // [sp+0h] [bp-8h]
  unsigned __int8 *v6; // [sp+4h] [bp-4h]

  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    if ( *(_DWORD *)(a1 + 12) )
      v4 = *(const char **)(a1 + 8);
    else
      v4 = (const char *)&dword_8DA5C;
    v5 = a2;
    v6 = a3;
    a1 = sub_3EF7C(v4);
    a2 = v5;
    a3 = v6;
  }
  return sub_48D0C((_BYTE *)a1, a2, a3, 0) == nullptr;
}
// 8DA5C: using guessed type int dword_8DA5C;
