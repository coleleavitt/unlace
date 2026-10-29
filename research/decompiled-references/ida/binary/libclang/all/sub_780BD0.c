__int64 __fastcall sub_780BD0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 > 7 )
  {
    v3 = *(_QWORD *)(a1 + 152) & 6LL;
    if ( (v1 & 6) != 0 )
    {
      if ( v3 == 2 )
        return 2;
      else
        return (unsigned int)(v3 != 4) + 3;
    }
    else
    {
      return (*(_BYTE *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 32 < 6 ? 5 : 1;
    }
  }
  return result;
}

