unsigned __int64 __fastcall sub_454320(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rax

  v2 = *(_QWORD **)(a1 + 1672);
  v3 = sub_7AF770();
  v4 = sub_3BDE50(v2, v3);
  if ( v4 < *a2 || v4 >= a2[1] )
  {
    if ( !under_debugger )
      interr(2153);
    BUG();
  }
  return v4 - *a2;
}
