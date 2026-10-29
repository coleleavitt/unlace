unsigned __int64 __fastcall sub_A70E70(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r8

  result = a2;
  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)&byte_8[v4[1] & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v6) = 0;
  if ( (v5 & 8) != 0 )
    v6 = *(__int64 *)((char *)&qword_18 + (v5 & 0xFFFFFFFFFFFFFFF0LL));
  if ( a3 != (unsigned int)v6 >> 9 )
  {
    if ( (result & 8) != 0 )
      return sub_A70C40(a1, *v4, v4[3] & 0xFFFFFFFF000001FFLL | result & 7 | (unsigned int)(a3 << 9));
    else
      return sub_A70C40(a1, (__int64)v4, result & 7 | (unsigned int)(a3 << 9));
  }
  return result;
}
