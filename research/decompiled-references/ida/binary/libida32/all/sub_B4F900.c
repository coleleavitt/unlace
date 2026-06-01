unsigned __int64 __fastcall sub_B4F900(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rax

  if ( !sub_B4F880(a1) )
    return 0;
  v1 = *(_QWORD *)(a1 + 88);
  if ( (v1 & 4) == 0 )
  {
    result = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( result )
      return result;
LABEL_10:
    BUG();
  }
  if ( !v1 )
    goto LABEL_10;
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 1) != 0 )
  {
    v4 = sub_B685F0(a1);
    *(_QWORD *)(v3 + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 18360) + 40LL))(
                            *(_QWORD *)(v4 + 18360),
                            *(_QWORD *)(v3 + 8) >> 1);
  }
  return *(_QWORD *)(v3 + 8);
}

