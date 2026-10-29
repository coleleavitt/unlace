__int64 __fastcall sub_C12820(__int64 a1, int *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx

  v2 = (unsigned int)*a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)v2 > 0xD || (v4 = 8322, !_bittest64(&v4, v2)) )
  {
    if ( (a2[1] & 1) == 0 )
      return sub_C12770((__int64)(a2 + 2), v3);
  }
  sub_A54D20(v3, a2);
  return 1;
}
