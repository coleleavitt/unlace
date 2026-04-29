_BYTE *__fastcall consume_tokenized_sandbox_extensions(_BYTE *result)
{
  _BYTE *v1; // x19
  int v2; // w8
  int v3; // t1
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( *result )
  {
    v1 = result;
    while ( 1 )
    {
      v3 = (unsigned __int8)*++v1;
      v2 = v3;
      if ( !v3 )
        break;
      if ( v2 == 124 )
      {
        *v1 = 0;
        sandbox_extension_consume();
        *v1 = 124;
      }
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_BYTE *)sandbox_extension_consume();
  }
  return result;
}
