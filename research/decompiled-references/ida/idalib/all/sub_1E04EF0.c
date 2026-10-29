void __fastcall sub_1E04EF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  _QWORD *i; // rbx

  v7 = *(_QWORD *)sub_B91570(a2, a2, a3, a4, a5, a6);
  if ( v7 )
  {
    for ( i = *(_QWORD **)(v7 + 80); i; i = (_QWORD *)*i )
      sub_165DB50(a1, (__int64)i, a3);
  }
}
