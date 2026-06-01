__int64 __fastcall sub_198D10(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  bool v3; // dl
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 104LL))(a1, a2, 1);
  v2 = (unsigned __int64)(a2[7] != 0) << 32;
  if ( a2[24] )
    v2 |= 0x4000000000uLL;
  v3 = sub_1954B0(*a2);
  result = 0;
  if ( v3 )
  {
    v2 |= 0x200000000uLL;
    result = 4;
  }
  a2[32] = result;
  a2[33] = v2;
  return result;
}

