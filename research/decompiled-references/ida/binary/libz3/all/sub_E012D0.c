__int64 __fastcall sub_E012D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  void (__fastcall ***v3)(void *); // rax

  v2 = *(_QWORD *)(a1 + 312);
  if ( !v2 )
  {
    sub_DFBCB0(a1);
    v2 = *(_QWORD *)(a1 + 312);
  }
  v3 = sub_DFF530(a1);
  return sub_DE2610(v2, (__int64)v3, a2);
}

