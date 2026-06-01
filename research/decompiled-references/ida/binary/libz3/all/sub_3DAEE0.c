__int64 __fastcall sub_3DAEE0(__int64 *a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 result; // rax

  sub_1606330((_DWORD)a1, a2, a3, (_DWORD)a1 + 48, a4, a5, a6);
  a1[8] = a3;
  *((_OWORD *)a1 + 3) = 0;
  sub_1862370(a1 + 6, "min_alias_size", 0xFFFFFFFFLL);
  sub_1862370(a1 + 6, "max_depth", 0xFFFFFFFFLL);
  result = (unsigned int)*(unsigned __int16 *)(*a1 + 4) - 3;
  if ( (unsigned int)result > 1 )
  {
    sub_3DAC80((__int64)a1, *a1, (__int64)(a1 + 7));
    result = a1[7];
    *a1 = result;
  }
  return result;
}

