__int64 __fastcall sub_6A9CA0(__int64 *a1, __int64 a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  int v7; // eax
  __int64 v8; // rsi
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v7 = sub_6A9B90(a1, a3, a4);
  v8 = *a1;
  v10 = v7;
  return sub_79B6F0(&v10, v8, a2, a5, 83);
}

