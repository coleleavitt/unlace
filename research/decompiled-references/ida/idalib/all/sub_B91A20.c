__int64 __fastcall sub_B91A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rbx

  v7 = a2;
  while ( 1 )
  {
    v12 = sub_B91570(a1, a2, a3, a4, a5, a6);
    if ( a1 == v12 )
      break;
    a1 = sub_B91570(a1, a2, v8, v9, v10, v11);
  }
LABEL_4:
  if ( !v7 )
    return 0;
  while ( (*(_BYTE *)(v7 + 8) & 0x7D) == 4 || v12 != sub_B91570(v7, a2, v8, v9, v10, v11) )
  {
    v13 = *(_QWORD *)(sub_B8C1B0(v7) + 16);
    if ( (v13 & 4) != 0 )
    {
      v7 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      goto LABEL_4;
    }
    v7 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      return 0;
  }
  return 1;
}
