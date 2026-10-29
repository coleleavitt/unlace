bool __fastcall sub_1598700(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)v2;
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0x18 && v2 != 48 )
  {
    v3 = *(_QWORD *)(v2 - 8);
    if ( (v3 & 7) == 0 )
    {
      v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 16);
        if ( (*(_QWORD *)v5 & 0xFFFFFFFE) != 0 && *(_BYTE *)(v5 + 16) == 95 )
        {
          v7 = *(unsigned __int8 *)(v5 + 17);
          if ( (_BYTE)v7 == 95 || (byte_2411740[2 * v7] & 0x20) != 0 )
            return 1;
        }
      }
    }
  }
  return sub_B8EBA0(v2);
}
