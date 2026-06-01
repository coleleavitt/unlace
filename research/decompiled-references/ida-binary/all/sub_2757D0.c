__int64 __fastcall sub_2757D0(_QWORD *a1, __int64 a2, const char *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = qalloc_or_throw(200);
  v5 = sub_274B20(a1, a2);
  sub_2731B0(v4, v5, (__int64)a1);
  v6 = sub_2736F0(v4, a3);
  return sub_277A50(v6);
}
