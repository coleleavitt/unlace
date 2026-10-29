__int64 __fastcall sub_C527D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-30h]

  if ( (*(_BYTE *)(a2 + 4) & 1) == 0
    && *(_DWORD *)a2 == 1
    && (*(_BYTE *)(a2 + 20) & 1) == 0
    && *(_DWORD *)(a2 + 16) == 1 )
  {
    return a3;
  }
  v4 = *a1;
  v5 = sub_C4FD60((__int64)a1, a2);
  v9 = v5;
  if ( !v5 )
    return sub_C524A0((__int64)a1, 0, a3, v6, v7, v8);
  ++*(_DWORD *)(v5 + 8);
  result = sub_C524A0((__int64)a1, v5, a3, v6, v7, v8);
  if ( (*(_DWORD *)(v9 + 8))-- == 1 )
  {
    v12 = result;
    sub_15D7BC0(v4, v9);
    return v12;
  }
  return result;
}

