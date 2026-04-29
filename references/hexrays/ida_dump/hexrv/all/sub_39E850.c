__int64 __fastcall sub_39E850(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdi

  if ( *(_DWORD *)(a1 + 44) != -2 )
    return (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  sub_2535E0(*(_QWORD *)(a1 + 24), a2, a3);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v6 != 1 )
  {
    *(_QWORD *)(a1 + 40) = -1;
    sub_386AE0(v7, v6, (_DWORD *)(a1 + 40), (_DWORD *)(a1 + 44), a4);
    return (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = *(_QWORD *)(v7 + 136) - 1;
  return 1;
}
