__int64 __fastcall sub_1A0B130(unsigned __int64 a1, __int64 a2, char a3, _BYTE *a4, double a5)
{
  unsigned __int8 v5; // r13
  _BYTE *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int16 v9; // cx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdi

  while ( 1 )
  {
    while ( 1 )
    {
      v5 = a3;
      v6 = a4;
      v7 = sub_BFB9F0(a2);
      v8 = v7;
      v9 = *(_WORD *)v7 & 0x1FF;
      if ( v9 != 4 )
        break;
      if ( *(_BYTE *)(v7 + 2) >> 3 != 4 )
        return 1;
      a2 = *(_QWORD *)(v7 + 16);
      a4 = v6;
      a3 = 1;
    }
    if ( ((v9 + 433) & 0x1FFu) <= 9 )
    {
      switch ( (*(_WORD *)(v7 + 2) >> 3) & 0x7F )
      {
        case 0:
        case 1:
        case 2:
        case 5:
          a3 = v5;
          a2 = *(_QWORD *)(v7 + 16);
          a4 = v6;
          continue;
        case 0xB:
          result = 2;
          break;
        case 0xD:
          result = 0;
          break;
        default:
          return 1;
      }
      return result;
    }
    if ( v9 == 71 )
      break;
    if ( v9 != 128 )
    {
      result = 2;
      if ( v9 != 123 )
        return (unsigned int)sub_BFE6E0(v8, a1, 1, a5) == 0;
      return result;
    }
    result = sub_1A0B130(a1, *(_QWORD *)(v7 + 32), v5, v6);
    if ( (_DWORD)result )
      return result;
    a2 = *(_QWORD *)(v8 + 40);
    a4 = v6;
    a3 = v5;
  }
  v11 = *(_QWORD *)&byte_8[*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v11 & 8) != 0
    && (((*(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v11 & 7)) >> 6) & 7) == 3 )
  {
    *v6 = 1;
  }
  if ( !v5 )
    return 1;
  v12 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 40 > 6 )
    return 1;
  return !sub_9B48E0(v12);
}
