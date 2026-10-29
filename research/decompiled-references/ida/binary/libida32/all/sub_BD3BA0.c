__int64 __fastcall sub_BD3BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  char v7; // al
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  switch ( v7 )
  {
    case 13:
      if ( (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        return 2;
      break;
    case 47:
      v10 = sub_F3D1D0(v6, a2, a3, a4, a5);
      if ( (*(_BYTE *)(v10 + 74) & 1) == 0 && (*(_QWORD *)(v10 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return 2;
      break;
    case 10:
      break;
    default:
      return 2;
  }
  v9 = sub_A73FE0(a2, a1);
  result = 1;
  if ( v9 > 0x40 )
    return 2;
  return result;
}

