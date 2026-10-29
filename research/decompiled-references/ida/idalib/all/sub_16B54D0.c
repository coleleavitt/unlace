__int64 __fastcall sub_16B54D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  bool v15; // zf
  __int64 v16; // r9

  v4 = 0;
  if ( *(_DWORD *)(a2 + 28) == 1 )
    v4 = *(unsigned int *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 356);
  v6 = *(_DWORD *)(a2 + 64);
  v7 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    v9 = v6 - 2;
    if ( (unsigned int)v9 <= 0x14 )
    {
      v8 = qword_2640300[v9];
      goto LABEL_6;
    }
    if ( v6 != 24 )
    {
      if ( v6 <= 0x18 )
      {
        v8 = 0;
        if ( v6 != 1 )
          goto LABEL_13;
      }
      else if ( v6 != 25 )
      {
        v8 = 0;
        if ( v6 == 26 )
        {
LABEL_12:
          v7 += v4;
          *(_QWORD *)(a1 + 8) = v7;
        }
LABEL_13:
        if ( !*(_BYTE *)(a2 + 168) )
          goto LABEL_20;
        goto LABEL_14;
      }
      v8 = 0;
LABEL_26:
      v11 = 1;
      if ( v4 )
        v11 = v4;
      v7 += v11;
      *(_QWORD *)(a1 + 8) = v7;
      goto LABEL_13;
    }
    v8 = 0;
LABEL_37:
    ++v7;
    v6 = 24;
    *(_QWORD *)(a1 + 8) = v7;
    goto LABEL_13;
  }
  v8 = 0;
  if ( v5 == 1 )
    v8 = *(unsigned int *)(a2 + 360);
LABEL_6:
  switch ( v6 )
  {
    case 1u:
    case 0x19u:
      goto LABEL_26;
    case 2u:
    case 3u:
    case 4u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
      v12 = v8;
      if ( v4 >= v8 )
        v12 = v4;
      v7 += v12;
      *(_QWORD *)(a1 + 8) = v7;
      goto LABEL_13;
    case 0xDu:
    case 0xEu:
      v14 = v8 + 2;
      v15 = v8 == 0;
      v16 = 1;
      break;
    case 0xFu:
    case 0x10u:
      v14 = v8 + 5;
      v15 = v8 == 0;
      v16 = 4;
      break;
    case 0x11u:
    case 0x12u:
      *(_QWORD *)(a1 + 8) = ++v7;
      goto LABEL_13;
    case 0x13u:
    case 0x14u:
      v14 = v8 + 7;
      v15 = v8 == 0;
      v16 = 6;
      break;
    case 0x15u:
    case 0x1Au:
      goto LABEL_12;
    case 0x16u:
      v13 = v8 + 2;
      *(_BYTE *)(a1 + 16) = 0;
      if ( v8 + 2 < v4 )
        v13 = v4;
      v7 += v13;
      *(_QWORD *)(a1 + 8) = v7;
      goto LABEL_13;
    case 0x18u:
      goto LABEL_37;
    default:
      goto LABEL_13;
  }
  if ( v15 )
    v14 = v16;
  if ( v14 < v4 )
    v14 = v4;
  v7 += v14;
  v15 = *(_BYTE *)(a2 + 168) == 0;
  *(_QWORD *)(a1 + 8) = v7;
  if ( v15 )
  {
LABEL_20:
    if ( *(_BYTE *)(a2 + 192) && !v4 )
      goto LABEL_15;
    goto LABEL_16;
  }
LABEL_14:
  if ( !v4 )
LABEL_15:
    *(_QWORD *)(a1 + 8) = ++v7;
LABEL_16:
  if ( *(_BYTE *)(a2 + 216) && v6 - 13 <= 7 )
    v7 += v8 == 0;
  *(_QWORD *)(a1 + 8) = v7 - a4;
  return 1;
}
