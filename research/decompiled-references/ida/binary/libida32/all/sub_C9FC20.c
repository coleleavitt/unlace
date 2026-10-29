__int64 __fastcall sub_C9FC20(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r12
  char v6; // bp
  __int64 result; // rax

  v5 = *(_BYTE *)(a1 + 584);
  v6 = *(_BYTE *)(a1 + 586);
  *(_BYTE *)(a1 + 584) = 0;
  *(_BYTE *)(a1 + 586) = 1;
  result = sub_C9FA30(a1, a2, a3, a4, a5);
  *(_BYTE *)(a1 + 584) = v5;
  *(_BYTE *)(a1 + 586) = v6;
  return result;
}

