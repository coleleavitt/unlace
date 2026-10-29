/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F04B
// Address: 0x0047F04B

//----- (0047F04B) --------------------------------------------------------
int __cdecl sub_47F04B(_BYTE *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // ecx
  char v5; // bl
  int v6; // esi
  int v7; // edi
  char v8; // al
  int v9; // [esp-Ch] [ebp-Ch]

  if ( !a1 )
    goto LABEL_2;
  v4 = a2;
  if ( !a2 )
  {
    *a1 = 0;
LABEL_2:
    *a3 = 0;
    a3[1] = 0;
    return 1;
  }
  if ( (a2 & 0xFFFFFF80) == 0 )
  {
    *a1 = a2;
    return 1;
  }
  if ( (a2 & 0xFFFFF800) == 0 )
  {
    v5 = -64;
    v6 = 1;
    goto LABEL_18;
  }
  if ( (a2 & 0xFFFF0000) != 0 )
  {
    if ( (a2 & 0xFFE00000) == 0 && a2 <= 0x10FFFF )
    {
      v9 = 3;
      v5 = -16;
      goto LABEL_17;
    }
    return sub_47F0F6(a3);
  }
  if ( a2 >= 0xD800 && a2 <= 0xDFFF )
    return sub_47F0F6(a3);
  v9 = 2;
  v5 = -32;
LABEL_17:
  v6 = v9;
LABEL_18:
  v7 = v6;
  do
  {
    v8 = v4;
    v4 >>= 6;
    a1[v7--] = v8 & 0x3F | 0x80;
  }
  while ( v7 );
  *a1 = v5 | v4;
  *a3 = 0;
  a3[1] = 0;
  return v6 + 1;
}
