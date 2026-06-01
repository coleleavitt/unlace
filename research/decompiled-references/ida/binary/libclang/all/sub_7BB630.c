__int64 __fastcall sub_7BB630(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r12
  char v6; // dl
  __int64 v7; // rax
  unsigned __int64 v9; // rsi

  result = sub_798D40(a1);
  v5 = result;
  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v6 == 19 )
  {
    if ( a2 )
      result = (__int64)sub_6C1BE0(result, a2, a1);
LABEL_4:
    *(_QWORD *)(a1 + 88) = a2;
    return result;
  }
  if ( v6 != 20 )
    goto LABEL_4;
  v7 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 7) != 0 )
    v9 = 0;
  result = sub_7BB510(a2, v9);
  if ( !result )
    goto LABEL_4;
  result = (__int64)sub_6C2280(v5, result, a1);
  *(_QWORD *)(a1 + 88) = a2;
  return result;
}

