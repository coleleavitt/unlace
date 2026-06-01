_QWORD *__fastcall sub_115CDF0(_QWORD *a1, __int64 a2)
{
  *a1 = a1 + 2;
  a1[1] = 0x100000000LL;
  if ( *(_DWORD *)(a2 + 5032) )
    sub_CCBE40((__int64)a1, a2 + 5024);
  return a1;
}

