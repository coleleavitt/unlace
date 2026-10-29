unsigned __int64 __fastcall sub_77BFF0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax
  bool v3; // zf
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 || (v1 & 4) == 0 )
    return a1 + 88;
  v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  v3 = v4 == 0;
  v5 = v4;
  result = a1 + 88;
  if ( !v3 )
  {
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
    {
      v6 = sub_798D40(a1);
      *(_QWORD *)(v5 + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 18200) + 40LL))(
                              *(_QWORD *)(v6 + 18200),
                              *(_QWORD *)(v5 + 8) >> 1);
    }
    return v5 + 8;
  }
  return result;
}

