__int64 __fastcall sub_25B890(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    sub_255410(*(_QWORD *)(a1 + 64));
    j__qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    sub_255410(*(_QWORD *)(a1 + 72));
    j__qfree(v4);
  }
  sub_25B3B0(a1, a2);
  v5 = j__qalloc_or_throw(32);
  v6 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v5 = -1;
  v7 = v5;
  *(_DWORD *)(v5 + 8) = 70;
  *(_QWORD *)(v5 + 12) = -1;
  sub_25AE30(v5, v6);
  *(_QWORD *)(a1 + 64) = v7;
  v8 = *(_QWORD *)(a2 + 72);
  if ( v8 )
  {
    v9 = j__qalloc_or_throw(32);
    v10 = *(_QWORD *)(a2 + 72);
    *(_QWORD *)v9 = -1;
    v8 = v9;
    *(_DWORD *)(v9 + 8) = 70;
    *(_QWORD *)(v9 + 12) = -1;
    sub_25AE30(v9, v10);
  }
  *(_QWORD *)(a1 + 72) = v8;
  return a1;
}
