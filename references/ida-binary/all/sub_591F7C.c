unsigned __int8 sub_591F7C()
{
  unsigned __int8 result; // al
  int i; // [rsp+Ch] [rbp-4h]

  result = byte_8D2990 ^ 1;
  if ( byte_8D2990 == 1 )
  {
    for ( i = 0; i <= 5; ++i )
    {
      result = sigaction(dword_7595F0[i], (const struct sigaction *)&unk_8D2600 + i, nullptr) == -1;
      if ( result )
        result = (unsigned __int8)sub_591AB4(dword_7595F0[i]);
    }
    byte_8D2990 = 0;
  }
  return result;
}
