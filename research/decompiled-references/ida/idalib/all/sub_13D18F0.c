unsigned __int64 __fastcall sub_13D18F0(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax
  unsigned __int8 *v4; // r9
  __int64 v5; // rbx
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // dl
  unsigned int v8; // ebp
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax

  v2 = *a1;
  if ( (_BYTE)v2 == 92 )
  {
    v4 = a1 + 1;
    v5 = 1;
  }
  else
  {
    if ( (_BYTE)v2 != 63 )
      return v2 | 0x100000000LL;
    if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
      return v2 | 0x100000000LL;
    if ( a1[1] != 63 )
      return v2 | 0x100000000LL;
    v6 = a1[2] - 33;
    if ( v6 > 0x1Du )
      return v2 | 0x100000000LL;
    v7 = byte_26115F0[v6];
    if ( !v7 )
      return v2 | 0x100000000LL;
    v4 = a1 + 3;
    v5 = 3;
    if ( v7 != 92 )
      return v7 | 0x300000000LL;
  }
  if ( (byte_2411740[2 * *v4] & 7) == 0 )
    return (v5 << 32) | 0x5C;
  v8 = sub_13D1580((__int64)v4);
  result = (v5 << 32) | 0x5C;
  if ( v8 )
  {
    v11 = sub_13D18F0(v9 + v8, v10);
    return ((unsigned __int64)(HIDWORD(v11) + (_DWORD)v5 + v8) << 32) | (unsigned int)v11;
  }
  return result;
}
