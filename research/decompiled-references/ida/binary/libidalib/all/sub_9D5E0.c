__int64 __fastcall sub_9D5E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax

  qlread();
  v4 = (unsigned int)unpack_dd();
  result = 0;
  if ( v4 < a3 )
  {
    if ( v4 )
      qlread();
    *(_BYTE *)(a2 + v4) = 0;
    return 1;
  }
  return result;
}

