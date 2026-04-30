__int64 __fastcall sub_57F960(__int64 a1, volatile signed __int32 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  sub_57C4E0(a1, a2, a3, a4, a5, a6);
  sub_57C770(*(_QWORD *)(a1 + 1256));
  *(_QWORD *)(a1 + 1256) = 0;
  if ( a2 && ((unsigned int)(*a2 - 13) > 2 || (unsigned __int8)sub_57C4D0(a2)) )
    return 0;
  *(_QWORD *)(a1 + 1256) = sub_57C660((__int64)a2);
  return 1;
}
