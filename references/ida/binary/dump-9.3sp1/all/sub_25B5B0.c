__int64 __fastcall sub_25B5B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx

  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    sub_255050(*(_QWORD *)(a1 + 64));
    j__qfree(v5);
  }
  v6 = j__qalloc_or_throw(32, a2, a3, a4);
  v7 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v6 = -1;
  v8 = v6;
  *(_DWORD *)(v6 + 8) = 70;
  *(_QWORD *)(v6 + 12) = -1;
  sub_25AA70(v6, v7);
  *(_QWORD *)(a1 + 64) = v8;
  sub_25AFF0(a1, a2);
  return a1;
}
