__int64 __fastcall sub_1F61180(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 result; // rax

  sub_1F60E70(a1, a2, a3, a4, a5, a6);
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 32);
  v9 = *(_DWORD *)(*a1 + 24);
  *(_BYTE *)(a2 + 32) = (2 * (*(_QWORD *)(v8 + 8LL * (v9 + 1)) != 0))
                      | (*(_QWORD *)(v8 + 8LL * v9) != 0)
                      | *(_BYTE *)(a2 + 32) & 0xFC;
  *(_DWORD *)(v7 + 24) = v9 + 3;
  v10 = v9 + 2;
  LOBYTE(v10) = *(_QWORD *)(v8 + 8 * v10) != 0;
  LOBYTE(v9) = 4 * v10;
  result = (4 * (_DWORD)v10) | *(_BYTE *)(a2 + 32) & 0xFBu;
  *(_BYTE *)(a2 + 32) = v9 | *(_BYTE *)(a2 + 32) & 0xFB;
  return result;
}
