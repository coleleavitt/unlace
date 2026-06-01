__int64 __fastcall sub_13D6010(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int v3; // r11d
  __int64 v4; // r8
  unsigned int *v6; // rsi

  v2 = *(_QWORD *)(a1 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 192) - 1LL;
  while ( 2 )
  {
    *(_QWORD *)(a1 + 192) = v4;
    *(_QWORD *)(a1 + 184) = v2 + 24;
    switch ( *(_BYTE *)(v2 + 40) )
    {
      case 0xD:
      case 0xE:
      case 0xF:
        ++v3;
        goto LABEL_5;
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        if ( !v3 )
          goto LABEL_7;
        goto LABEL_5;
      case 0x14:
        if ( v3 )
        {
          --v3;
LABEL_5:
          --v4;
          v2 += 24;
          continue;
        }
LABEL_7:
        v6 = *(unsigned int **)(v2 + 24);
        *(_DWORD *)(a1 + 200) = 1;
        sub_13D2F60(a1, v6, a2);
        return 0;
      case 0x1B:
        *(_DWORD *)(a1 + 200) = 0;
        return sub_13D5B70(a1, a2, *(_QWORD *)(a1 + 120));
      default:
        goto LABEL_5;
    }
  }
}
