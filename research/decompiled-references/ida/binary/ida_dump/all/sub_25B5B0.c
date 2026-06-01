__int64 __fastcall sub_25B5B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx

  if ( *(_QWORD *)(a1 + 64) )
  {
    sub_255050(*(_QWORD *)(a1 + 64));
    j__qfree();
  }
  v3 = j__qalloc_or_throw();
  v4 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v3 = -1;
  v5 = v3;
  *(_DWORD *)(v3 + 8) = 70;
  *(_QWORD *)(v3 + 12) = -1;
  sub_25AA70(v3, v4);
  *(_QWORD *)(a1 + 64) = v5;
  sub_25AFF0(a1, a2);
  return a1;
}
