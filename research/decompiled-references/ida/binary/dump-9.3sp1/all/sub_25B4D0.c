__int64 __fastcall sub_25B4D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    sub_255050(*(_QWORD *)(a1 + 64));
    j__qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    sub_255050(*(_QWORD *)(a1 + 72));
    j__qfree(v4);
  }
  sub_25AFF0(a1, a2);
  v7 = j__qalloc_or_throw(32, a2, v5, v6);
  v8 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)v7 = -1;
  v9 = v7;
  *(_DWORD *)(v7 + 8) = 70;
  *(_QWORD *)(v7 + 12) = -1;
  sub_25AA70(v7, v8);
  *(_QWORD *)(a1 + 64) = v9;
  v12 = *(_QWORD *)(a2 + 72);
  if ( v12 )
  {
    v13 = j__qalloc_or_throw(32, v8, v10, v11);
    v14 = *(_QWORD *)(a2 + 72);
    *(_QWORD *)v13 = -1;
    v12 = v13;
    *(_DWORD *)(v13 + 8) = 70;
    *(_QWORD *)(v13 + 12) = -1;
    sub_25AA70(v13, v14);
  }
  *(_QWORD *)(a1 + 72) = v12;
  return a1;
}
