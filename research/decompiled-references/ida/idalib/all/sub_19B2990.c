void __fastcall sub_19B2990(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4, __m128i a5, double a6)
{
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+10h] [rbp-48h]
  _WORD v10[17]; // [rsp+18h] [rbp-40h] BYREF
  char v11; // [rsp+3Ah] [rbp-1Eh]

  v7 = 0;
  v11 = 0;
  ptr = v10;
  v9 = 0x400000000LL;
  v10[16] = 256;
  if ( (unsigned int)sub_19A0790((__int64)&v7, a2, a4) == 2 )
    sub_19B1E00(a1, a3, (__int64)&v7, a5, a6);
  if ( ptr != v10 )
    free(ptr);
}
