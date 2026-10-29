__int64 __fastcall sub_140BD90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v3;
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a2 + 16) = v5;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  LODWORD(v4) = *(_BYTE *)(a2 + 28) & 1;
  result = (unsigned int)v4 | *(_BYTE *)(a1 + 28) & 0xFE;
  *(_BYTE *)(a1 + 28) = v4 | *(_BYTE *)(a1 + 28) & 0xFE;
  return result;
}
