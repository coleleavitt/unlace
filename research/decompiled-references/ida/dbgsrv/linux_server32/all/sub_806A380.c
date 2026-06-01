/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806A380
// Address: 0x0806A380

//----- (0806A380) --------------------------------------------------------
int __cdecl sub_806A380(int a1)
{
  int v1; // esi
  char *v2; // eax
  char v3; // dl
  int v4; // eax
  int result; // eax
  char v6; // al
  __int16 v7; // [esp+0h] [ebp-20h]
  __int16 v8; // [esp+2h] [ebp-1Eh]
  char v9; // [esp+2h] [ebp-1Eh]

  v1 = 0;
  v2 = byte_80DE9D4;
  v8 = *(_WORD *)(a1 + 402);
  v7 = __ROL2__(v8, 8);
  while ( 1 )
  {
    v3 = v2[2];
    if ( *(_BYTE *)(a1 + 476) != v3 )
      break;
    if ( *(_WORD *)v2 == v8 && (unsigned __int16)(*(_WORD *)(a1 + 400) - 2) <= 1u )
      goto LABEL_7;
LABEL_10:
    ++v1;
    v2 += 4;
    if ( v1 == 3 )
      return 1;
  }
  if ( *(_WORD *)v2 != v7 || (*(_WORD *)(a1 + 400) & 0xFEFF) != 0x200 )
    goto LABEL_10;
  v4 = *(unsigned __int8 *)(a1 + 389);
  v9 = v3;
  *(_WORD *)(a1 + 400) = __ROL2__(*(_WORD *)(a1 + 400), 8);
  *(_WORD *)(a1 + 402) = v7;
  result = (*(int (__cdecl **)(int, int, int))(a1 + 380))(a1, 3, v4);
  if ( !(_BYTE)result )
    return result;
  *(_BYTE *)(a1 + 476) = v9;
LABEL_7:
  v6 = byte_80DE9D7[4 * v1];
  *(_BYTE *)(a1 + 478) = v6;
  if ( !v6 )
    *(_BYTE *)(a1 + 477) = 0;
  return 1;
}
