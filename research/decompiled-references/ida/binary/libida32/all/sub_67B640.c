__int64 __fastcall sub_67B640(__int64 a1, __int64 a2, int a3, unsigned __int8 **a4)
{
  unsigned __int8 v6; // al
  __int64 result; // rax

  v6 = sub_67B5A0(a1, a2, a3, a4);
  sub_67B300(a1, (unsigned __int64 *)(a2 + 32), v6 >> 4, a3, (__int64)a4);
  result = 0;
  if ( *(_QWORD *)(a2 + 40) )
  {
    *(_DWORD *)(a2 + 56) = 0;
  }
  else
  {
    result = a3 + (unsigned int)unpack_dd(a4);
    *(_DWORD *)(a2 + 56) = result;
  }
  return result;
}

