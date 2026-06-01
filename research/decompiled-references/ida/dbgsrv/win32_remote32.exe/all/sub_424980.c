/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424980
// Address: 0x00424980

//----- (00424980) --------------------------------------------------------
int __stdcall sub_424980(char *a1)
{
  unsigned int v1; // eax
  _DWORD *v3; // ebx
  unsigned int v4; // kr00_4
  LPVOID v5; // eax
  unsigned int v6; // ecx
  __m128i v7[64]; // [esp+14h] [ebp-410h] BYREF
  int v8; // [esp+420h] [ebp-4h]

  if ( !a1 )
    return sub_45CC20(1531);
  v1 = *a1 - 2;
  while ( 2 )
  {
    switch ( v1 )
    {
      case 0u:
        v7[0].m128i_i8[0] = a1[8];
        sub_41BB70((_DWORD *)a1 + 2, (unsigned int)v7, v7[0].m128i_i8[0] != 0);
        *a1 = 7;
        return 0;
      case 1u:
        v3 = a1 + 8;
        sub_45F950(v7, 1024, (__m128i *)(a1 + 8), 50);
        *((_DWORD *)a1 + 2) = 0;
        *((_DWORD *)a1 + 3) = 0;
        *((_DWORD *)a1 + 4) = 0;
        v8 = 0;
        v4 = strlen(v7[0].m128i_i8);
        v5 = nullptr;
        v6 = v4 + 1;
        if ( v4 != -1 )
        {
          v5 = sub_453B00((int)(a1 + 8), nullptr, v4 + 1, 1u);
          *v3 = v5;
          v6 = v4 + 1;
        }
        *((_DWORD *)a1 + 3) = v6;
        sub_464310((unsigned int)v5, (unsigned int)v7, v4);
        *(_BYTE *)(v4 + *v3) = 0;
        *a1 = 7;
        return 0;
      case 5u:
        return 0;
      case 7u:
        v7[0].m128i_i8[0] = a1[8];
        sub_41BB70((_DWORD *)a1 + 2, (unsigned int)v7, 1u);
        *a1 = 7;
        return 0;
      case 8u:
        if ( sub_4239C0(a1, 2) )
        {
          v1 = *a1 - 2;
          if ( v1 > 8 )
            return sub_45CC20(1531);
          continue;
        }
        return sub_45C9E0();
      default:
        return sub_45CC20(1531);
    }
  }
}
