__int64 __fastcall sub_3C8E00(unsigned __int8 **a1, __int64 *a2, __int64 *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rax
  unsigned __int64 v8; // rbx
  __int64 result; // rax

  v5 = -32770;
  v8 = a5 & 0xF;
  if ( _bittest64(&v5, v8) )
    return sub_3C8AA0(a1, (__int64)a2, a3, a4, 16);
  result = sub_3C8BB0((__int64)a1, a4, a2, a3);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v8 )
      return sub_3C8AA0(a1, (__int64)a2, a3, a4, 16);
  }
  return result;
}
