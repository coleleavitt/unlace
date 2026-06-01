__int64 __fastcall sub_2236030(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 v2; // dl
  unsigned int v3; // eax
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 88) + 1;
  *(_BYTE *)(a1 + (*(_BYTE *)(a1 + 88) ^ 3u)) = 0x80;
  *(_BYTE *)(a1 + 88) = v1;
  if ( v1 == 64 )
  {
    sub_2234D20((_DWORD *)a1);
    v1 = 0;
    goto LABEL_3;
  }
  while ( v1 != 56 )
  {
LABEL_3:
    while ( 1 )
    {
      v2 = v1++;
      *(_BYTE *)(a1 + (v2 ^ 3u)) = 0;
      *(_BYTE *)(a1 + 88) = v1;
      if ( v1 != 64 )
        break;
      sub_2234D20((_DWORD *)a1);
      *(_BYTE *)(a1 + 88) = 0;
      v1 = 0;
    }
  }
  *(_BYTE *)(a1 + 57) = 0;
  *(_WORD *)(a1 + 58) = 0;
  v3 = *(_DWORD *)(a1 + 84);
  *(_BYTE *)(a1 + 88) = 64;
  *(_BYTE *)(a1 + 56) = v3 >> 29;
  *(_BYTE *)(a1 + 63) = v3 >> 21;
  *(_BYTE *)(a1 + 62) = v3 >> 13;
  *(_WORD *)(a1 + 60) = __PAIR16__((8 * v3) >> 24, 8 * v3);
  result = sub_2234D20((_DWORD *)a1);
  *(_BYTE *)(a1 + 88) = 0;
  return result;
}
