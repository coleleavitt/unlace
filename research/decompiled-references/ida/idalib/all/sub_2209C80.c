unsigned __int64 *__fastcall sub_2209C80(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdi

  v2 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  if ( (unsigned int)v2 > 0x40 )
    sub_2209A70(v4, v4, a2, 0, (unsigned __int64)(v2 + 63) >> 6, (unsigned __int64)(v2 + 63) >> 6, 0);
  else
    *(_QWORD *)a1 = a2 * v4;
  return sub_CF8100((unsigned __int64 *)a1);
}
