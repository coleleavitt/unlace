__int64 __fastcall sub_64C50(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 result; // rax
  unsigned __int8 v4; // cl
  char v5; // al

  v2 = 16;
  do
  {
    result = insn_get_next_byte();
    if ( (_BYTE)result == 103 )
    {
      *(_DWORD *)(a2 + 28) &= ~0x1000u;
      goto LABEL_12;
    }
    if ( (unsigned __int8)result > 0x67u )
    {
      switch ( (_BYTE)result )
      {
        case 0xF2:
          *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 28) & 0xFFFFFFF9 | 4;
          break;
        case 0xF3:
          *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 28) & 0xFFFFFFF9 | 2;
          break;
        case 0xF0:
          *(_DWORD *)(a2 + 28) |= 1u;
          break;
        default:
          return result;
      }
      goto LABEL_12;
    }
    if ( (_BYTE)result == 102 )
    {
      *(_DWORD *)(a2 + 28) &= ~0x800u;
LABEL_12:
      LOBYTE(result) = 0;
      goto LABEL_13;
    }
    if ( (unsigned __int8)result > 0x63u )
    {
      if ( (*(_DWORD *)(a1 + 4436) & 0x7D78F) == 0 )
        return result;
      *(_BYTE *)(a2 + 32) = ((_BYTE)result != 100) + 33;
      goto LABEL_12;
    }
    v4 = result - 38;
    if ( (unsigned __int8)(result - 38) > 0x29u )
      return result;
    if ( ((1LL << v4) & 0x3FFFC000000LL) == 0 )
    {
      if ( ((1LL << v4) & 0x1010101) == 0 )
        return result;
      v5 = 32;
      if ( v4 <= 0x10u )
        v5 = byte_974C0[v4];
      *(_BYTE *)(a2 + 32) = v5;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
      return result;
LABEL_13:
    *(_BYTE *)(a2 + 33) = result;
    --v2;
  }
  while ( v2 );
  return 102;
}
