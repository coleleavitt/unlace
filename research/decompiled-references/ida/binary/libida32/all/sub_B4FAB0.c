unsigned __int64 __fastcall sub_B4FAB0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 || (v1 & 4) == 0 )
    return a1 + 88;
  result = a1 + 88;
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
    {
      v4 = sub_B685F0(a1);
      *(_QWORD *)(v3 + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 18360) + 40LL))(
                              *(_QWORD *)(v4 + 18360),
                              *(_QWORD *)(v3 + 8) >> 1);
    }
    return v3 + 8;
  }
  return result;
}

