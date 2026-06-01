__int64 __fastcall sub_36E2A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 func; // rax
  __int64 v5; // rbx
  __int64 updated; // rax

  v2 = a1[9];
  v3 = a1[5];
  func = get_func(a1[1]);
  if ( func && (v5 = func, (unsigned __int8)sub_36E0E0((__int64)&unk_23AC540, func, (unsigned int)v3, v2)) )
    updated = (unsigned __int8)update_func(v5);
  else
    updated = 0;
  *(_QWORD *)(a2 + 8) = updated;
  return 0;
}
