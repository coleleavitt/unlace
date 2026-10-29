__int64 __fastcall sub_654540(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v7; // rdi

  v5 = *(_QWORD *)(a1 + 2992);
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 3000);
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      sub_15D7BC0(v7, v5);
  }
  *(_QWORD *)(a1 + 2992) = 0;
  sub_654200(a1, 0);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 2976) + 40LL))(
           *(_QWORD *)(a1 + 2976),
           a2,
           a3);
}

