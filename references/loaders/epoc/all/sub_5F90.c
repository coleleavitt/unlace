__int64 __fastcall sub_5F90(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // ecx
  unsigned __int64 v5; // rdi
  int v6; // ecx
  int v7; // r8d
  int v8; // esi
  bool v9; // cc

  result = a1;
  v4 = 0;
  v5 = a2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( a3 > 0 )
  {
    v5 += 4LL;
    v6 = 8 * (a2 & 3);
    v7 = a3 + v6 - 32;
    *(_DWORD *)(result + 4) = _byteswap_ulong(*(_DWORD *)(v5 - 4)) << v6;
    v8 = 32 - v6;
    v9 = a3 < 32 - v6;
    v4 = a3;
    a3 = v7;
    if ( !v9 )
      v4 = v8;
  }
  *(_DWORD *)result = v4;
  *(_QWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 8) = a3;
  return result;
}
