__int64 __fastcall lsl::Vector<dyld4::Loader const*>::reserve(__int64 result, unsigned __int64 a2)
{
  __int64 v2; // x1
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x8

  if ( a2 > *(_QWORD *)(result + 24) >> 3 )
  {
    if ( a2 >= 0x10 )
    {
      v3 = (a2 - 1) | ((a2 - 1) >> 1) | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2);
      v4 = v3 | (v3 >> 4) | ((v3 | (v3 >> 4)) >> 8);
      v2 = (v4 | (v4 >> 16) | ((v4 | (v4 >> 16)) >> 32)) + 1;
    }
    else
    {
      v2 = 16;
    }
    return lsl::Vector<dyld4::Loader const*>::reserveExact(result, v2);
  }
  return result;
}
