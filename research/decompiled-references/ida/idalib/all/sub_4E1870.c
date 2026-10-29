__int64 __fastcall sub_4E1870(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  bool v6; // dl
  int v8; // ecx
  unsigned __int64 v9; // rdx

  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 24LL) & 0x4F )
  {
    case 1:
      *(_QWORD *)(a1 + 80) = 0xFFFF;
      v8 = *(_DWORD *)(a1 + 88);
      v4 = 0xFFFF;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    case 2:
      v2 = -1;
      v8 = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0xFFFFFFFFLL;
      v4 = 0xFFFFFFFFLL;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    case 3:
      *(_QWORD *)(a1 + 80) = 255;
      v8 = *(_DWORD *)(a1 + 88);
      v4 = 255;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    case 4:
      *(_QWORD *)(a1 + 80) = 0xFFFF;
      v8 = *(_DWORD *)(a1 + 88);
      v4 = 0xFFFF;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    case 5:
      *(_QWORD *)(a1 + 80) = 255;
      LOBYTE(v8) = 8;
      *(_DWORD *)(a1 + 88) = 8;
      v4 = 255;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    case 6:
      *(_QWORD *)(a1 + 80) = 0xFFFF;
      LOBYTE(v8) = 16;
      *(_DWORD *)(a1 + 88) = 16;
      v5 = *(_QWORD *)(a1 + 72);
      v4 = 0xFFFF;
      goto LABEL_11;
    case 9:
      v4 = *(_QWORD *)(a1 + 80);
      v5 = *(_QWORD *)(a1 + 72);
      if ( v4 )
      {
        v8 = *(_DWORD *)(a1 + 88);
LABEL_11:
        v9 = *(_QWORD *)(a1 + 40) ^ (v5 >> v8);
        LOBYTE(v2) = (v4 & v9) == 0;
        v6 = (v4 & v9) != 0;
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 24LL) + 24LL) != 8 )
          v5 = (int)v5;
        LOBYTE(v2) = *(_QWORD *)(a1 + 40) == v5;
        v6 = *(_QWORD *)(a1 + 40) != v5;
      }
LABEL_6:
      if ( a2 && v6 && (debug & 2) != 0 )
        sub_3879F0();
      return v2;
    case 0xA:
      *(_QWORD *)(a1 + 80) = 255;
      v8 = *(_DWORD *)(a1 + 88);
      v4 = 255;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    case 0xB:
      v2 = -1;
      v8 = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0xFFFFFFFFLL;
      v4 = 0xFFFFFFFFLL;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    case 0xC:
      v2 = -1;
      *(_DWORD *)(a1 + 88) = 32;
      LOBYTE(v8) = 32;
      *(_QWORD *)(a1 + 80) = 0xFFFFFFFFLL;
      v4 = 0xFFFFFFFFLL;
      v5 = *(_QWORD *)(a1 + 72);
      goto LABEL_11;
    default:
      v6 = 1;
      v2 = 0;
      goto LABEL_6;
  }
}
