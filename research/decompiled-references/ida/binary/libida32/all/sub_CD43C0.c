unsigned __int64 *__fastcall sub_CD43C0(unsigned __int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx

  v1 = *((unsigned int *)a1 + 2);
  result = a1;
  v3 = 0xFFFFFFFFFFFFFFFFLL >> -*((_BYTE *)a1 + 8);
  v4 = *a1;
  if ( (_DWORD)v1 )
  {
    if ( (unsigned int)v1 > 0x40 )
    {
      v5 = (unsigned int)((unsigned __int64)(v1 + 63) >> 6) - 1;
      *(_QWORD *)(v4 + 8 * v5) &= v3;
      return result;
    }
  }
  else
  {
    v3 = 0;
  }
  *a1 = v4 & v3;
  return result;
}

