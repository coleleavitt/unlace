__int64 __fastcall sub_10500(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  unsigned __int8 next_byte; // bp
  char v5; // al

  v2 = 0;
  v3 = 0;
  next_byte = insn_get_next_byte(a1);
  if ( (unsigned __int8)(next_byte + 4) > 2u )
  {
    *a2 = sub_138A0(next_byte);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v5 = insn_get_next_byte(a1);
      v2 |= (v5 & 0x7F) << (7 * v3);
      if ( v5 >= 0 )
        break;
      if ( ++v3 == 5 )
        goto LABEL_4;
    }
    if ( v3 == 4 && (unsigned __int8)v5 > 0xFu )
    {
LABEL_4:
      sub_9C70((__int64)"ana: failed to analyze 0x%llx\n", *(_QWORD *)(a1 + 16));
      return 0;
    }
    *a2 = sub_13820(next_byte, v2);
    return v3 + 2;
  }
}
