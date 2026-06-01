__int64 __fastcall sub_E6C200(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 i; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rsi

  v1 = (_QWORD *)*a1;
  result = *(_QWORD *)*a1 >> 16;
  if ( (*(_QWORD *)*a1 & 0x100000LL) != 0 )
  {
    if ( *((_DWORD *)v1 + 18) )
    {
      result = 16LL * ((*(_QWORD *)*a1 & 0x100000LL) != 0);
      v3 = (__int64)v1 + result + 72;
      for ( i = v3 + 32LL * *((unsigned int *)v1 + 21); i != v3; result = sub_2229B60(v5 + 1048) )
      {
        v5 = a1[1];
        sub_22299F0(v5 + 1048);
        v6 = sub_F1E510(v3);
        v7 = v3;
        v3 += 32;
        sub_E6B8F0(v5, v7, v6, 0, nullptr, 0);
      }
    }
  }
  return result;
}
