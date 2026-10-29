__int64 __fastcall dwarf_encode_signed_leb128(__int64 a1, _DWORD *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v5; // rcx
  char v7; // dl
  __int64 v8; // rsi
  unsigned __int8 v9; // r10
  __int64 v10; // rdi
  unsigned __int8 *v11; // rax

  v5 = &a3[a4];
  v7 = a1;
  v8 = a1 >> 63;
  v9 = a1 & 0x7F;
  v10 = a1 >> 7;
  if ( a3 >= v5 )
    return 1;
  v11 = a3;
  while ( v8 != v10 || ((v9 ^ (unsigned __int8)v8) & 0x40) != 0 )
  {
    *v11++ = v7 | 0x80;
    v9 = v10 & 0x7F;
    v7 = v10;
    v10 >>= 7;
    if ( v5 == v11 )
      return 1;
  }
  *v11 = v9;
  *a2 = (_DWORD)v11 + 1 - (_DWORD)a3;
  return 0;
}

