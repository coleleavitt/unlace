char __fastcall sub_1E93CB0(__int64 *a1, unsigned __int64 a2, double a3)
{
  char result; // al
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  result = sub_16EC930(*a1, a2, 3u, a3);
  if ( !result )
  {
    v5 = *a1;
    v10[0] = 0;
    if ( (unsigned __int8)sub_1E92530(v5, a2, 0, v10, a3) || (unsigned __int8)sub_1E930E0(*a1, a2, 1u, v6, v7, v8, a3) )
    {
      return 1;
    }
    else
    {
      sub_168B6C0((__int64)a1);
      v9 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL];
      return (*(_QWORD *)&byte_8[v10[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v10[0] & 0xFFFFFFFFFFFFFFF0LL] | LOBYTE(v10[0])) & 7) != (v9 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v9 | (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) + 8LL)) & 7);
    }
  }
  return result;
}
