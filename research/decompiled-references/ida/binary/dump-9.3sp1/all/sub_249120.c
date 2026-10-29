__int64 __fastcall sub_249120(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx

  v5 = *(_QWORD *)(a1 + 112);
  sub_2441C0(a3, v5, 0);
  v8 = j__qalloc_or_throw(64, v5, v6, v7);
  *(_QWORD *)v8 = -1;
  v9 = v8;
  *(_DWORD *)(v8 + 8) = 2;
  *(_QWORD *)(v8 + 12) = -1;
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 32) = a3;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  sub_2441C0(v8, *(_QWORD *)(a1 + 112), 0);
  if ( !(unsigned __int8)sub_2453C0(v9, a1) )
    sub_248660(v9, a1, 0);
  return v9;
}
