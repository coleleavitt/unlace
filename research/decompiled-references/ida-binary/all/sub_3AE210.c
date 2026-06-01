bool __fastcall sub_3AE210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool result; // al
  __int64 v8; // rax
  __int64 v9; // rax

  v5 = *(_QWORD *)(sub_1EA680(a1 + 384, a2, a3, a4, a5) + 40);
  result = 0;
  if ( *(_QWORD *)(v5 + 16) == -1 )
  {
    v8 = sub_1EB5B0(a1, a2, v5, v6, a5);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 176LL))(v8, 0);
    if ( *(_QWORD *)(v9 + 16) )
      return tag_strlen(*(_QWORD *)(v9 + 8)) == 0;
    else
      return tag_strlen(&s1) == 0;
  }
  return result;
}
