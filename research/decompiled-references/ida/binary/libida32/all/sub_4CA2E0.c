__int64 __fastcall sub_4CA2E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // edx
  bool v8; // dl
  int v10; // ecx

  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 12LL) & 0x4F )
  {
    case 1:
      *(_DWORD *)(a1 + 56) = 0xFFFF;
      v5 = *(_DWORD *)(a1 + 60);
      v6 = 0xFFFF;
      v4 = *(_DWORD *)(a1 + 52);
      goto LABEL_3;
    case 2:
    case 9:
      v6 = *(_DWORD *)(a1 + 56);
      v4 = *(_DWORD *)(a1 + 52);
      v10 = *(_DWORD *)(a1 + 32);
      if ( v6 )
      {
        v5 = *(_DWORD *)(a1 + 60);
LABEL_3:
        v7 = *(_DWORD *)(a1 + 32) ^ (v4 >> v5);
        LOBYTE(v2) = (v6 & v7) == 0;
        v8 = (v6 & v7) != 0;
      }
      else
      {
        LOBYTE(v2) = v4 == v10;
        v8 = v4 != v10;
      }
LABEL_4:
      if ( a2 && v8 && (debug & 2) != 0 )
        sub_383DA0();
      return v2;
    case 3:
      *(_DWORD *)(a1 + 56) = 255;
      v5 = *(_DWORD *)(a1 + 60);
      v6 = 255;
      v4 = *(_DWORD *)(a1 + 52);
      goto LABEL_3;
    case 4:
      *(_DWORD *)(a1 + 56) = 0xFFFF;
      v5 = *(_DWORD *)(a1 + 60);
      v6 = 0xFFFF;
      v4 = *(_DWORD *)(a1 + 52);
      goto LABEL_3;
    case 5:
      v2 = 255;
      LOBYTE(v5) = 8;
      *(_QWORD *)(a1 + 56) = 0x8000000FFLL;
      v6 = 255;
      v4 = *(_DWORD *)(a1 + 52);
      goto LABEL_3;
    case 6:
      v2 = 0xFFFF;
      LOBYTE(v5) = 16;
      *(_QWORD *)(a1 + 56) = 0x100000FFFFLL;
      v6 = 0xFFFF;
      v4 = *(_DWORD *)(a1 + 52);
      goto LABEL_3;
    case 0xA:
      *(_DWORD *)(a1 + 56) = 255;
      v4 = *(_DWORD *)(a1 + 52);
      v5 = *(_DWORD *)(a1 + 60);
      v6 = 255;
      goto LABEL_3;
    default:
      v8 = 1;
      v2 = 0;
      goto LABEL_4;
  }
}

