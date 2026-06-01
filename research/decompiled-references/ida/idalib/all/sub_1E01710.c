__int64 __fastcall sub_1E01710(__int64 a1, unsigned __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  __int64 result; // rax
  unsigned __int64 v6; // r13
  char v7; // bl
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 *v11; // r12
  unsigned __int64 v12[6]; // [rsp+18h] [rbp-30h] BYREF

  result = a3;
  v6 = a3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (a3 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v7 = a3;
    sub_18C74E0(a1, 4, 0, 4);
    v11 = sub_1DF2070(a1, v6, a2, v8, v9, v10, a4, a5);
    if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      sub_190D5E0(a1, a4);
      return 2;
    }
    else
    {
      sub_190D5E0(a1, a4);
      v12[0] = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL | v7 & 3;
      if ( (*(_DWORD *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) == 0 )
        sub_183D8A0(a1, v12);
      return v12[0];
    }
  }
  return result;
}
