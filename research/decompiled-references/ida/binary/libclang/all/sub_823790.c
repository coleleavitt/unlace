__int64 __fastcall sub_823790(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  char v5; // cl
  __int64 result; // rax
  __int64 v7[15]; // [rsp+0h] [rbp-78h] BYREF

  v4 = 2 * (a4 & 1);
  v5 = *(_BYTE *)(a1 + 128);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  v7[0] = a2;
  *(_BYTE *)(a1 + 128) = v4 | v5 & 0xFD;
  v7[1] = a3;
  result = sub_69F240(v7);
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 128) &= 0xFEu;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = result;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}

