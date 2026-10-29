__int64 __fastcall sub_7BF600(__int64 *a1, __int64 a2, __int64 a3, const char *a4, int a5)
{
  __int64 v9; // rsi
  __int64 v10; // rdi

  v9 = *a1;
  v10 = *(_QWORD *)(a2 + 1736);
  if ( v9 == -1 || !a4 )
    return -1;
  sub_7AD400(v10, v9, a5, a4, 1);
  return sub_7AD990(v10, a5, v9, a3, 0, 0, 1);
}
