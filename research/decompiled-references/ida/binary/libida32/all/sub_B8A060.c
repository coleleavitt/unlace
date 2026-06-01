__int64 __fastcall sub_B8A060(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v8 = sub_B685F0(a1);
  result = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (_BYTE)result == 21 )
  {
    if ( a2 )
      result = (__int64)sub_A8D990(v8, a2, a1, v5, v6, v7);
LABEL_4:
    *(_QWORD *)(a1 + 88) = a2;
    return result;
  }
  if ( (_BYTE)result != 22 )
    goto LABEL_4;
  v10 = *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v10 & 7) != 0 )
    v12 = 0;
  result = sub_B89FC0(a2, v12, v4, v5, v6, v7);
  if ( !result )
    goto LABEL_4;
  result = (__int64)sub_A8DB10(v8, result, a1, v13, v14, v15);
  *(_QWORD *)(a1 + 88) = a2;
  return result;
}

