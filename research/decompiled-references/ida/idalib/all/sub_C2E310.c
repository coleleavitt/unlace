__int64 __fastcall sub_C2E310(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _WORD *v5; // r13
  _WORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 result; // rax

  v5 = sub_BFA620((_WORD *)a2);
  v6 = &sub_BFA620((_WORD *)a2)[4 * *(unsigned int *)(a2 + 4)];
  if ( v6 == v5 )
    return 1;
  while ( 1 )
  {
    v8 = *(_QWORD *)v5;
    v9 = sub_F63270(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
    result = sub_C2DF00(a1, a2, a4, v9, v8);
    if ( !(_BYTE)result )
      break;
    v7 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v5 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v7 + 8) & 0xF) != 0 )
      v7 = sub_F64F00(**(_QWORD **)(*(_QWORD *)v5 + 16LL));
    v5 += 4;
    a3 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v5 == v6 )
      return 1;
  }
  return result;
}
