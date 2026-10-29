__int64 __fastcall sub_67E600(__int64 a1, int a2, int a3, unsigned __int8 *a4, unsigned __int64 a5)
{
  __int64 v6; // r12
  unsigned int v9; // eax

  v6 = *(_QWORD *)(a1 + 1648);
  if ( *(_DWORD *)(v6 + 8) == -1 || a2 != *(_DWORD *)(v6 + 8) || a5 <= 1 )
    return 0;
  v9 = sub_3B9110(*(_QWORD **)(a1 + 1480), a3);
  sub_67E330((_QWORD *)v6, v9, a4, a5);
  return 1;
}

