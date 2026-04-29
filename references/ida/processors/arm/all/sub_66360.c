__int64 __fastcall sub_66360(__int64 a1)
{
  unsigned int v1; // ecx
  int v3; // edx
  char v5; // dl
  int v6; // edx
  __int64 v7; // rdi
  int v8; // esi
  int v9; // r8d
  __int64 v10; // rsi
  __int16 v11; // dx
  __int64 v12; // rsi
  __int16 v13; // dx
  __int64 v14; // rsi
  __int16 v15; // dx
  __int64 v16; // rsi
  __int16 v17; // dx
  __int64 v18; // rsi
  __int16 v19; // dx
  __int64 v20; // rsi
  __int16 v21; // dx

  v1 = *(_DWORD *)(a1 + 52);
  v3 = (v1 >> 8) & 3;
  switch ( v3 )
  {
    case 1:
      v5 = -109;
      break;
    case 2:
      v5 = -108;
      break;
    case 3:
      v5 = -107;
      break;
    default:
      return 0;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v5;
  v6 = (*(_DWORD *)(a1 + 52) >> 8) & 3;
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 32);
  if ( v6 == 3 )
  {
    *(_BYTE *)(v7 + 41) = 1;
    *(_BYTE *)(v7 + 45) = 4;
    *(_WORD *)(v7 + 46) = (v8 | (16 * v9)) + 61;
    v18 = *(_QWORD *)(a1 + 8);
    v19 = (*(_WORD *)(a1 + 16) | (16 * *(_WORD *)(a1 + 36))) + 61;
    *(_BYTE *)(v18 + 81) = 1;
    *(_WORD *)(v18 + 86) = v19;
    *(_BYTE *)(v18 + 85) = 4;
    v20 = *(_QWORD *)(a1 + 8);
    v21 = *(_WORD *)(a1 + 24) | (16 * *(_WORD *)(a1 + 44));
    *(_BYTE *)(v20 + 121) = 1;
    *(_WORD *)(v20 + 126) = v21 + 61;
    *(_BYTE *)(v20 + 125) = 4;
  }
  else
  {
    *(_BYTE *)(v7 + 41) = 1;
    *(_BYTE *)(v7 + 45) = 3;
    *(_WORD *)(v7 + 46) = (v9 | (2 * v8)) + 93;
    if ( v6 == 1 )
    {
      *(_BYTE *)(v7 + 45) = 18;
      v10 = *(_QWORD *)(a1 + 8);
      v11 = (*(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16))) + 93;
      *(_BYTE *)(v10 + 81) = 1;
      *(_WORD *)(v10 + 86) = v11;
      *(_BYTE *)(v10 + 85) = 18;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
      *(_BYTE *)(v12 + 121) = 1;
      *(_WORD *)(v12 + 126) = v13 + 93;
      *(_BYTE *)(v12 + 125) = 18;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16));
      *(_BYTE *)(v14 + 81) = 1;
      *(_BYTE *)(v14 + 85) = 3;
      *(_WORD *)(v14 + 86) = v15 + 93;
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
      *(_BYTE *)(v16 + 121) = 1;
      *(_WORD *)(v16 + 126) = v17 + 93;
      *(_BYTE *)(v16 + 125) = 3;
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 435;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = dword_8DCA0[(v1 >> 20) & 3];
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
