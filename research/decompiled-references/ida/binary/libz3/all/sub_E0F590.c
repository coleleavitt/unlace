__int64 __fastcall sub_E0F590(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  void (__fastcall ***v5)(void *); // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(v3 + 312);
  if ( !v4 )
  {
    sub_DFBCB0(v3);
    v4 = *(_QWORD *)(v3 + 312);
  }
  v5 = sub_DFF530(v3);
  result = sub_DE2610(v4, (__int64)v5, a2);
  if ( !result )
    return sub_160A100(a1, a2);
  return result;
}

