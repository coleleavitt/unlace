char sub_80280()
{
  __int64 v0; // rax
  __int64 v1; // rsi
  char result; // al

  v0 = getseg();
  if ( !v0 )
    return 0;
  v1 = v0;
  result = 0;
  if ( *(_BYTE *)(v1 + 184) == 3 )
  {
    get_segm_name();
    return 1;
  }
  return result;
}
