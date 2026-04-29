__int64 __fastcall sub_D2290(__int64 a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v5; // rsi
  unsigned int tinfo_size; // eax
  signed int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v5 = *a3;
  v10 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(&v9, v5, 0);
  return sub_D1EA0(a1, a2, tinfo_size, v9, a4);
}
