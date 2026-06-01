__int64 __fastcall dwarf_encode_leb128(unsigned __int64 a1, _DWORD *a2, _BYTE *a3, int a4)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rcx
  char v6; // r8
  _BYTE *v7; // r9

  v4 = a3;
  v5 = &a3[a4];
  if ( a3 >= v5 )
    return 1;
  while ( 1 )
  {
    v6 = a1;
    v7 = v4++;
    a1 >>= 7;
    if ( !a1 )
      break;
    *(v4 - 1) = v6 | 0x80;
    if ( v4 == v5 )
      return 1;
  }
  *v7 = v6;
  *a2 = (_DWORD)v4 - (_DWORD)a3;
  return 0;
}

