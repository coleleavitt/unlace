__int64 __fastcall sub_3F7290(__int64 a1, int a2, unsigned __int8 *a3, double a4, __m128 a5)
{
  __int16 v5; // ax
  bool v6; // zf
  char *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = *(_WORD *)(a1 + 48);
  if ( v5 == 44 )
  {
    a3 = nullptr;
    v7 = "inc";
  }
  else
  {
    v6 = v5 == 6;
    v7 = "write";
    if ( v6 )
      v7 = "add";
  }
  v8 = sub_3F7170(a1, a4, a5, (__int64)v7, a2, a3, 0xFFFFFFFF);
  sub_316CB0((__int64 *)(*(_QWORD *)(v8 + 72) + 152LL), (__int64 **)(*(_QWORD *)(v8 + 72) + 216LL), v9, v10);
  return v8;
}
