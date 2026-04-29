__int64 __fastcall sub_257930(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    sub_2513D0(*(_QWORD *)(a1 + 64));
    j__qfree(v3);
  }
  v4 = j__qalloc_or_throw(32);
  v5 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v4 = -1;
  v6 = v4;
  *(_DWORD *)(v4 + 8) = 70;
  *(_QWORD *)(v4 + 12) = -1;
  sub_256DF0(v4, v5);
  *(_QWORD *)(a1 + 64) = v6;
  sub_257370(a1, a2);
  return a1;
}
