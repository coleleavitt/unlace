__int64 __fastcall sub_7B19D0(__int64 a1, __int64 a2, __int64 (***a3)())
{
  char v4; // al
  __int64 v5; // rdi

  v4 = is_cvt64(a1, a2, a3);
  v5 = *(_QWORD *)(a1 + 1736);
  if ( v4 )
    return sub_7B1430(v5, a2, a3);
  else
    return sub_7B0E10(v5, a2, a3);
}
