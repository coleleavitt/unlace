unsigned __int64 *__fastcall sub_220A160(unsigned __int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v2 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v2 > 0x40 )
  {
    sub_220A060((_QWORD *)*a1, (unsigned __int64)(v2 + 63) >> 6, a2);
    sub_CF8100(a1);
    return a1;
  }
  else
  {
    v3 = 0;
    if ( a2 != (_DWORD)v2 )
      v3 = *a1 << a2;
    *a1 = v3;
    return sub_CF8100(a1);
  }
}
