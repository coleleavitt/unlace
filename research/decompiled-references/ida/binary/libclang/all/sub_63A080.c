unsigned __int64 __fastcall sub_63A080(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD *)(result + 16);
    result = 0;
    if ( v2 )
    {
      if ( (v2 & 4) != 0 )
        return v2 & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
  return result;
}

