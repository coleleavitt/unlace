__int64 __fastcall sub_82E0E0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _WORD *v5; // r12
  _WORD *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 result; // rax

  v5 = sub_80C750((_WORD *)a2);
  v6 = &sub_80C750((_WORD *)a2)[4 * *(unsigned int *)(a2 + 4)];
  if ( v6 == v5 )
    return 1;
  while ( 1 )
  {
    v9 = *(_QWORD *)v5;
    v10 = sub_B0E910(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
    result = sub_82D840(a1, a2, a4, v10, v9);
    if ( !(_BYTE)result )
      break;
    v7 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v5 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(_QWORD *)(v7 + 8);
    if ( (v8 & 7) != 0 || (v8 & 8) != 0 )
      v7 = sub_B0CF30(**(_QWORD **)(*(_QWORD *)v5 + 16LL), a2);
    v5 += 4;
    a3 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v5 == v6 )
      return 1;
  }
  return result;
}

