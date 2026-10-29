unsigned __int64 __fastcall sub_B77930(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 )
  {
    v3 = (v1 >> 1) & 3;
    if ( v3 == 1 )
    {
      return v1 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else if ( v3 == 2 )
    {
      v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 )
      {
        if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
          return *(_QWORD *)(v4 + 48);
      }
    }
  }
  return result;
}
