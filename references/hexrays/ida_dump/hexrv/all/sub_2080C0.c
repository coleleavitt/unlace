__int64 __fastcall sub_2080C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rsi
  int v6; // eax

  if ( *(_DWORD *)(a2 + 8) != 74 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 80) != 2 )
    return 0;
  v4 = *(_QWORD *)(v3 + 96);
  if ( *(_DWORD *)(v4 + 8) != 65 )
    return 0;
  v5 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 432LL) + 104LL * *(int *)(v4 + 32));
  v6 = v5[6];
  if ( (v6 & 4) != 0 || (v6 & 0x20000) != 0 && (unsigned int)(*v5 - 3) <= 1 )
    return 0;
  sub_20F200(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL));
  return 0;
}
