/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472A1A
// Address: 0x00472A1A

//----- (00472A1A) --------------------------------------------------------
int __cdecl sub_472A1A(int a1, int a2, int a3, char a4)
{
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *(_BYTE *)a1 = 0;
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) == 1 )
    {
      v4 = (a2 & 8) != 0 && (a2 & 0x70000) != 0 ? -1073741824 : 0x40000000;
    }
    else if ( (a2 & 3) == 2 )
    {
      v4 = -1073741824;
    }
    else
    {
      *sub_46B984() = 22;
      sub_467EF4(a2, 0x80000000);
      v4 = -1;
    }
  }
  else
  {
    v4 = 0x80000000;
  }
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 8) = sub_4729AA(a2, 0x80000000, a2);
  switch ( a3 )
  {
    case 16:
      v5 = 0;
      break;
    case 32:
      v5 = 1;
      break;
    case 48:
      v7 = 2;
      goto LABEL_17;
    case 64:
      v7 = 3;
LABEL_17:
      v5 = v7;
      break;
    case 128:
      v5 = *(_DWORD *)(a1 + 4) == 0x80000000;
      break;
    default:
      *sub_46B984() = 22;
      sub_467EF4(a2, 0x80000000);
      v5 = -1;
      break;
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = v5;
  *(_DWORD *)(a1 + 16) = 128;
  if ( (a2 & 0x80u) != 0 )
    *(_BYTE *)a1 |= 0x10u;
  if ( (a2 & 0x8000) == 0 )
  {
    if ( (a2 & 0x74000) != 0 )
      goto LABEL_26;
    if ( sub_477C53(a2, 0x8000, &v8) )
    {
      sub_467F04(a2, 0x8000);
      __debugbreak();
    }
    if ( v8 != 0x8000 )
LABEL_26:
      *(_BYTE *)a1 |= 0x80u;
  }
  if ( (a2 & 0x100) != 0 && (a4 & ~(_BYTE)dword_4B7F74 & 0x80u) == 0 )
    *(_DWORD *)(a1 + 16) = 1;
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x4000000u;
    *(_DWORD *)(a1 + 4) |= 0x10000u;
    *(_DWORD *)(a1 + 12) |= 4u;
  }
  if ( (a2 & 0x1000) != 0 )
    *(_DWORD *)(a1 + 16) |= 0x100u;
  if ( (a2 & 0x2000) != 0 )
    *(_DWORD *)(a1 + 20) |= 0x2000000u;
  if ( (a2 & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x8000000u;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x10000000u;
  }
  return a1;
}
// 4B7F74: using guessed type int dword_4B7F74;
