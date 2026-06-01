__int64 __fastcall sub_707DA0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r13
  char v16; // al

  v7 = *(_QWORD *)(sub_B14A40(a2) + 128);
  if ( v7 <= 7 )
    return 0;
  if ( (v7 & 4) != 0 )
  {
    v11 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    v7 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_QWORD *)(v7 + 8);
    if ( (v12 & 7) != 0 || (v12 & 8) != 0 )
      v7 = sub_B0CF30(v11, a2);
  }
  v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) <= 0xF )
    return 0;
  v9 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] != (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7) )
  {
    if ( !a4 )
      return 0;
    v15 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_BYTE *)(v15 + 16);
    switch ( v16 )
    {
      case 13:
        if ( (((*(_WORD *)(v15 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          return 0;
        break;
      case 46:
        v13 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        if ( (*(_BYTE *)(v13 + 74) & 1) == 0 && *(_QWORD *)(v13 + 128) <= 7u || *(char *)(sub_B14A40(v15) + 76) < 0 )
          return 0;
        break;
      case 10:
        break;
      default:
        return 0;
    }
    v14 = sub_6F6DE0(a1, *v8);
    if ( v14 != sub_6F6DE0(a1, *v9) )
      return 0;
  }
  return a3;
}

