unsigned __int64 __fastcall sub_B86DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r12
  char v7; // bl
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // rcx

  v6 = a3;
  v7 = a3;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x13 )
    goto LABEL_8;
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v9 )
      goto LABEL_8;
  }
  else
  {
    sub_A55AE0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v9 = (__int64 *)(*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v9 )
      goto LABEL_8;
  }
  v10 = *v9;
  if ( v10 && (*(_BYTE *)(v10 + 8) & 6) != 0 )
    return 0;
LABEL_8:
  v12 = sub_B70930(a1 + 48, a2, a3, a4, a5, a6);
  if ( !v12 )
    return 0;
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v12 & 4;
  result = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14 )
  {
    while ( v13 )
    {
      result = *(_QWORD *)v13;
      if ( (*(_BYTE *)(*(_QWORD *)v13 + 28LL) & 0x7F) == 0x12 && v6 == ((*(_BYTE *)(result + 58) & 2) != 0) )
        return result;
      v15 = *(_QWORD *)(v13 + 8);
      if ( !v15 )
        return 0;
      v13 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      result = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) == 0 )
        goto LABEL_15;
    }
    return 0;
  }
LABEL_15:
  if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x12 || v7 != ((*(_BYTE *)(v13 + 58) & 2) != 0) )
    return 0;
  return result;
}

