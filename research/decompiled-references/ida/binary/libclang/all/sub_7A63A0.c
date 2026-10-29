__int64 __fastcall sub_7A63A0(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rax

  LOBYTE(v3) = sub_7805A0(a1);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  if ( sub_780F20(a1) )
    return 0;
  if ( sub_780E20(a1) )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 42 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
      return 0;
    v6 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v6 )
      return 0;
  }
  v7 = sub_798D40(a1);
  while ( (*(_BYTE *)(v6 + 18) & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 42 > 1 )
      v6 = sub_B0D320(v6);
  }
  v8 = *(_QWORD *)&byte_8[*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v6 + 32) & 7LL;
  v9 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v9 & 4) != 0 )
    v10 = (_QWORD *)*v10;
  if ( v10 )
    v10 -= 8;
  v11 = sub_6E8EE0(v7, (unsigned __int64)v10);
  if ( (*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == (*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL]
                                                                         | v11 & 7) )
    *a2 = v8 & 7;
  else
    return 0;
  return v4;
}

