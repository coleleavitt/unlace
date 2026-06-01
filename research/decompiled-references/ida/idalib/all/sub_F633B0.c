__int64 __fastcall sub_F633B0(__int64 *a1, _QWORD *a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  if ( !sub_F56AE0(*a1, a2)
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
  {
    return 0x100000001LL;
  }
  if ( (*(_BYTE *)(a2[290] + 1LL) & 8) == 0 )
    return 0;
  v8 = *a1;
  v9 = sub_A71450((__int64)a2, *a1);
  v14 = sub_F631C0(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), v8, v10, v11, v12, v13);
  v19 = v14;
  if ( !v14 || (*((_BYTE *)v14 + 28) & 0x7Fu) - 59 > 2 )
    return 0;
  result = 0x100000002LL;
  if ( a3 )
  {
    sub_7052B0((__int64 *)(v19[13] + 96LL), v19[13], v15, v16, v17, v18);
    if ( (*(_BYTE *)(v19[16] + 2LL) & 8) != 0 )
      return 0x100000000LL;
    sub_7052B0((__int64 *)(v19[13] + 96LL), v19[13], v20, v21, v22, v23);
    if ( (*(_BYTE *)(v19[16] + 5LL) & 0x10) == 0 && !a4 )
      return 0x100000003LL;
    return 0;
  }
  return result;
}
