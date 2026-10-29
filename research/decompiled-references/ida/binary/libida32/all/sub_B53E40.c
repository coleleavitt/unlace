__int64 __fastcall sub_B53E40(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 )
  {
    v3 = (v1 >> 1) & 3;
    if ( v3 == 2 )
    {
      v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 )
        return *(_QWORD *)(v4 + 32);
    }
    else if ( v3 == 3 )
    {
      v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v5 )
        return *(_QWORD *)(v5 + 8);
    }
  }
  return result;
}

