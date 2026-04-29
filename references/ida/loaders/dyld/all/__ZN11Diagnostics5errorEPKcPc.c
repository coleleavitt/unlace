__int64 __fastcall Diagnostics::error(Diagnostics *this, char *__s, char *a3)
{
  __int64 v5; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v5 = *(_QWORD *)this;
  if ( !v5 )
  {
    v5 = _simple_salloc(0);
    *(_QWORD *)this = v5;
  }
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _simple_vsprintf(v5, __s);
}
