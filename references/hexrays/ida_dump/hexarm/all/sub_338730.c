__int64 __fastcall sub_338730(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  sub_337680((__int64)a1);
  result = a1[187];
  if ( *(_QWORD **)(result + 1344) == a1 )
  {
    *(_QWORD *)(result + 1344) = 0;
    *(_QWORD *)(a1[187] + 408LL) = -1;
    result = a1[187];
    *(_QWORD *)(result + 416) = -1;
  }
  v3 = a1[62];
  a1[61] = -1;
  if ( v3 )
  {
    a1[63] = 0;
    result = qfree(v3);
    a1[62] = 0;
    a1[64] = 0;
  }
  return result;
}
