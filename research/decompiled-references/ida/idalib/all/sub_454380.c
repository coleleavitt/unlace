unsigned __int64 __fastcall sub_454380(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 result; // rax
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbx

  v3 = a1 + 1624;
  if ( a2 < 0 )
  {
    v6 = (unsigned __int64 *)sub_506150(v3);
    if ( !v6 )
      return a2;
    v7 = *v6;
    v8 = -a2;
    if ( -a2 > v7 )
      v8 = v7;
    return -v8;
  }
  else
  {
    v4 = sub_5060F0(v3, -1);
    if ( !v4 )
      return a2;
    result = (*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) - *(_QWORD *)(v4 + 8)) & 0xFFFFFFFFFFFFFFFELL;
    if ( result >= a2 )
      return a2;
  }
  return result;
}
