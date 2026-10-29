_QWORD *__fastcall ___ZN5dyld46Loader16addWeakDefsToMapERNS_12RuntimeStateERKNSt3__14spanIPKS0_Lm18446744073709551615EEE_block_invoke(
        _QWORD *result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x21
  unsigned __int64 v10; // x19
  __int64 v11; // [xsp+0h] [xbp-40h] BYREF
  _QWORD v12[3]; // [xsp+8h] [xbp-38h] BYREF

  v11 = a2;
  if ( a6 < 0 )
  {
    v7 = result;
    v8 = ((__int64 (__fastcall *)(_QWORD, __int64 *))dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::find)(
           *(_QWORD *)(result[4] + 304LL),
           &v11);
    result = *(_QWORD **)(v7[4] + 304LL);
    if ( v8 == result[7] + 24LL * result[9] )
    {
      v9 = v7[5];
      v10 = (a3 - v7[6]) & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000LL;
      v12[1] = 0;
      v12[2] = 0;
      v12[0] = v11;
      result = (_QWORD *)dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert(
                           result,
                           v12);
      result[1] = v9;
      result[2] = v10;
    }
  }
  return result;
}
