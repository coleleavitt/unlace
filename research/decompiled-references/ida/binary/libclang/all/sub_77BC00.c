unsigned __int64 __fastcall sub_77BC00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x29 && (((*(_BYTE *)(a1 + 97) & 6) - 2) & 0xFC) == 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 88);
  v2 = 0;
  if ( !v1 )
    return 0;
  v3 = v1 >> 2;
  if ( (v1 & 4) != 0 )
  {
    v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return v2;
    if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
    {
      if ( (v3 & 1) != 0 )
      {
        v5 = sub_798D40(a1);
        *(_QWORD *)(v4 + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 18200) + 40LL))(
                                *(_QWORD *)(v5 + 18200),
                                *(_QWORD *)(v4 + 8) >> 1);
        return *(_QWORD *)(v4 + 8);
      }
    }
    else
    {
      v2 = *(_QWORD *)(v4 + 8);
      if ( !v2 )
        return v2;
      if ( (v3 & 1) != 0 )
        return *(_QWORD *)(v4 + 8);
    }
  }
  else
  {
    if ( (unsigned __int64)v1 <= 7 )
      return v2;
    if ( (v3 & 1) != 0 )
    {
      v4 = 0;
      return *(_QWORD *)(v4 + 8);
    }
  }
  return v1 & 0xFFFFFFFFFFFFFFF8LL;
}

