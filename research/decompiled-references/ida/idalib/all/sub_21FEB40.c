__int64 __fastcall sub_21FEB40(__int64 *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // dl
  char v6; // cl
  char v7; // r13
  int v8; // r12d
  __int64 v9[9]; // [rsp+0h] [rbp-48h] BYREF

  *((_BYTE *)a1 + 20) = (*((_BYTE *)a1 + 20) ^ *(_BYTE *)(a2 + 20)) & 8 | *((_BYTE *)a1 + 20) & 0xF7;
  result = sub_21FD510((__int64)a1, a2);
  v5 = *((_BYTE *)a1 + 20);
  v6 = v5 & 7;
  if ( (v5 & 7) == 3 )
  {
    if ( *(_DWORD *)(*a1 + 20) != 2 )
      return result;
    v5 &= ~8u;
    *((_BYTE *)a1 + 20) = v5;
    v6 = v5 & 7;
  }
  if ( (v5 & 6) != 0 && v6 != 3 )
  {
    v7 = *(_BYTE *)(*a1 + 24);
    sub_21FBA00(v9, *a1);
    v8 = sub_21FE060((__int64)a1, a2, (__int64)v9, v7 ^ 1u);
    sub_21F9170(v9);
    result = sub_21FAF10((__int64)a1, a3, v8);
    if ( v8 )
      return (unsigned int)result | 0x10;
  }
  return result;
}
