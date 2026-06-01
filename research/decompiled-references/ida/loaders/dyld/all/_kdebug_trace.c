__int64 __fastcall kdebug_trace(void *a1, void *a2, void *a3, void *a4, void *a5)
{
  __int64 result; // x0
  void *v11; // x5
  void *v12; // x6
  void *v13; // x7
  __int64 _38; // [xsp+38h] [xbp+8h]

  result = kdebug_is_enabled((unsigned int)a1);
  if ( (_DWORD)result )
  {
    if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return __kdebug_trace64(a1, a2, a3, a4, a5, v11, v12, v13);
  }
  return result;
}
