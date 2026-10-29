__int64 __fastcall sub_E23080(__int64 a1, __int64 *a2, __int64 *a3)
{
  int v3; // ecx
  __int64 v4; // r8
  __int64 result; // rax
  int v6; // r9d
  __int64 v7; // r10
  char v8; // dl

  v3 = *((_DWORD *)a3 + 2);
  v4 = *a3;
  *((_DWORD *)a3 + 2) = 0;
  result = *((unsigned __int8 *)a3 + 12);
  v6 = *((_DWORD *)a2 + 2);
  *(_DWORD *)a1 = 5;
  v7 = *a2;
  v8 = *((_BYTE *)a2 + 12);
  *(_QWORD *)(a1 + 24) = v4;
  *(_BYTE *)(a1 + 4) &= ~1u;
  *((_DWORD *)a2 + 2) = 0;
  *(_QWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 16) = v6;
  *(_BYTE *)(a1 + 20) = v8;
  *(_DWORD *)(a1 + 32) = v3;
  *(_BYTE *)(a1 + 36) = result;
  return result;
}
