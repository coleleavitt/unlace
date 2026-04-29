__int64 __fastcall sub_3F7290(__int64 a1, int a2, unsigned __int8 *a3, unsigned __int8 a4, double a5, __m128 a6)
{
  __int16 v6; // ax
  bool v7; // zf
  char *v8; // rax
  __int64 v9; // rbx

  v6 = *(_WORD *)(a1 + 48);
  if ( v6 == 44 )
  {
    a3 = nullptr;
    v8 = "inc";
  }
  else
  {
    v7 = v6 == 6;
    v8 = "write";
    if ( v7 )
      v8 = "add";
  }
  v9 = sub_3F7170(a1, (__int64)v8, a2, a3, 0xFFFFFFFF, a4, a5, a6);
  sub_316CB0((__int64 *)(*(_QWORD *)(v9 + 72) + 152LL), (__int64 **)(*(_QWORD *)(v9 + 72) + 216LL));
  return v9;
}
