__int64 __fastcall sub_4FF160(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a2 + 32));
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v3;
  if ( *(_QWORD *)(v2 + 40) == v4 )
    return sub_4FC950(v2, (_QWORD *)(a1 + 8), v3);
  v6 = sub_4C3EF0(*(_QWORD *)(v2 + 24), v4);
  return sub_4FC950(v6, (_QWORD *)(a1 + 8), v5);
}

