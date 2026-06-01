unsigned __int64 __fastcall sub_BAA9D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r12
  char v7; // bl
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 result; // rax
  unsigned int v14; // [rsp+Ch] [rbp-2Ch]

  v6 = a3;
  v7 = a3;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x13 )
    goto LABEL_7;
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v9 )
      goto LABEL_7;
  }
  else
  {
    v14 = a4;
    sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    a4 = v14;
    v9 = (__int64 *)(*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v9 )
      goto LABEL_7;
  }
  v10 = *v9;
  if ( v10 && (*(_BYTE *)(v10 + 8) & 6) != 0 && !(_BYTE)a4 )
    return 0;
LABEL_7:
  v11 = sub_B94670(a1 + 48, a2, a3, a4, a5, a6);
  if ( !v11 )
    return 0;
  while ( 1 )
  {
    v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    result = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v11 & 4) == 0 )
      break;
    if ( !v12 )
      return 0;
    result = *(_QWORD *)v12;
    if ( (*(_BYTE *)(*(_QWORD *)v12 + 28LL) & 0x7F) == 0x12 && v6 == ((*(_BYTE *)(result + 58) & 2) != 0) )
      return result;
    v11 = *(_QWORD *)(v12 + 8);
    if ( !v11 )
      return 0;
  }
  if ( (*(_BYTE *)(v12 + 28) & 0x7F) != 0x12 || v7 != ((*(_BYTE *)(v12 + 58) & 2) != 0) )
    return 0;
  return result;
}
