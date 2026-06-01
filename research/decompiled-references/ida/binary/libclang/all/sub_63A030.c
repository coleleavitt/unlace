unsigned __int64 __fastcall sub_63A030(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  if ( result )
    return *(_QWORD *)(v2 + 16);
  v3 = *(_QWORD *)(v2 + 16);
  if ( v3 )
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) != 0 )
    {
      if ( v4 )
        return *(_QWORD *)(v4 + 16);
    }
    else
    {
      return v3 & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
  return result;
}

