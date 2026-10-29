const char *__fastcall sub_2278CB0(_BYTE *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int16 v5; // ax

  v5 = sub_226E300(a1, a2);
  if ( !HIBYTE(v5) )
    return "invalid boolean";
  *a4 = v5;
  return nullptr;
}
