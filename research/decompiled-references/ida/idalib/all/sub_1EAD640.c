bool __fastcall sub_1EAD640(__int64 a1, __int64 a2, _BYTE *a3, signed __int64 a4, char a5, bool a6)
{
  __int64 v6; // rax

  v6 = 0;
  if ( a5 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
  return sub_1EACEE0(a2, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) + 208LL), a3, a4, v6, a6);
}
