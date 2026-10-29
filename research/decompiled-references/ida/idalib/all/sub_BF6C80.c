__int64 __fastcall sub_BF6C80(unsigned int *a1, __int64 a2)
{
  char v2; // dl
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // edx
  __int64 result; // rax
  int v7; // eax

  v3 = (*(_WORD *)(a2 + 206) >> 7) & 3;
  if ( v3 == 3 )
    v3 = 2;
  v2 = *(_BYTE *)(a2 + 46);
  v4 = v3
     | (((v2 & 8) != 0) << 14)
     | (((v2 & 4) != 0) << 13)
     | (((v2 & 2) != 0) << 12)
     | (8 * *(unsigned __int8 *)(a2 + 45)) & 0x400
     | (((*(_BYTE *)(a2 + 45) & 0x40) != 0) << 9)
     | (4 * ((unsigned int)*(char *)(a2 + 106) >> 31))
     | ((v2 & 1) << 11)
     | (((*(_BYTE *)(a2 + 207) >> 1) & 3) << 6);
  v5 = v4 | 0x38;
  *a1 = v4 | 0x38;
  if ( (v4 & 3) == 1 && (v4 & 4) != 0 )
  {
    v7 = v4 | 0x138;
    if ( (unsigned __int8)v5 >> 6 == 2 )
      v5 = v7;
  }
  result = v5 | ((unsigned __int8)(*(_BYTE *)(a2 + 202) & 7) << 22);
  *a1 = result;
  return result;
}
