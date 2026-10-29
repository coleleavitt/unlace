_BYTE *__fastcall new_packet(char a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // r8
  __int64 i; // rax

  v3 = byte_2B11E00;
  for ( i = 0; i != 40; ++i )
  {
    if ( *v3 == a1 )
      return ((_BYTE *(__fastcall *)(__int64, __int64))*(&funcs_7C61FF + 3 * i))(a2, a3);
    v3 += 24;
  }
  return nullptr;
}

