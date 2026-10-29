unsigned __int64 __fastcall sub_13D1D70(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rsi

  result = *(_QWORD *)(a1 + 120);
  v4 = *(_QWORD *)(a1 + 112) + a2;
  *(_BYTE *)(a1 + 160) = a3;
  *(_BYTE *)(a1 + 161) = a3;
  if ( v4 > result )
    v4 = result;
  *(_QWORD *)(a1 + 152) = v4;
  return result;
}
