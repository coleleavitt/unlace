__int64 __fastcall sub_CB2E50(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r12
  char v6; // bp
  __int64 result; // rax

  v5 = *(_BYTE *)(a1 + 1360);
  v6 = *(_BYTE *)(a1 + 1362);
  *(_BYTE *)(a1 + 1360) = 0;
  *(_BYTE *)(a1 + 1362) = 1;
  result = sub_CB2C60(a1, a2, a3, a4, a5);
  *(_BYTE *)(a1 + 1360) = v5;
  *(_BYTE *)(a1 + 1362) = v6;
  return result;
}

