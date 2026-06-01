__int64 __fastcall sub_6A9C40(__int64 *a1, __int64 a2, int a3, unsigned int a4)
{
  int v5; // eax
  __int64 v6; // rsi
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v5 = sub_6A9B90(a1, a3, a4);
  v6 = *a1;
  v8 = v5;
  return sub_79BD30(&v8, v6, a2);
}

