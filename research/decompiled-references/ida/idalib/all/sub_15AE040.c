__int64 __fastcall sub_15AE040(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v7; // r11d
  char v8; // dl
  unsigned int v9; // esi
  char *v10; // rax
  char **v11; // rcx
  _DWORD *v12; // r8

  result = 0;
  v7 = *(_DWORD *)a1 & 0x7F000;
  if ( v7 != 282624 )
  {
    if ( v7 )
    {
      v10 = sub_15AC9B0((*(_DWORD *)a1 >> 12) & 0x7F, a6);
      *v11 = v10;
      *v12 = 4033;
      return 1;
    }
    else
    {
      *(_DWORD *)(a1 + 192) = a3;
      *(_DWORD *)(a1 + 208) = a3;
      v8 = *(_BYTE *)(a1 + 2);
      if ( (v8 & 8) != 0 && a2 == 19 && (v8 & 0x20) == 0 )
      {
        *(_BYTE *)(a1 + 2) = v8 | 0x20;
      }
      else
      {
        v9 = *(_DWORD *)a1 & 0xFFF80FFF | ((a2 & 0x7F) << 12);
        *(_DWORD *)a1 = v9;
        *(_BYTE *)(a1 + 2) = BYTE2(v9) & 0xBF;
        return 0;
      }
    }
  }
  return result;
}
