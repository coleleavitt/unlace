__int64 __fastcall sub_3C3B30(__int64 *a1, _DWORD *a2, _DWORD *a3, unsigned int a4, char a5)
{
  __int64 v5; // rax
  unsigned __int64 v8; // rbx
  __int64 result; // rax

  v5 = -32770;
  v8 = a5 & 0xF;
  if ( _bittest64(&v5, v8) )
    return sub_3C37D0(a1, (__int64)a2, a3, a4, 0x10u);
  result = sub_3C38F0(a1, a4, a2, a3);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v8 )
      return sub_3C37D0(a1, (__int64)a2, a3, a4, 0x10u);
  }
  return result;
}

