__int64 __fastcall get_func_chunknum(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 result; // rax

  if ( !a1 || a2 == -1 )
    return 0xFFFFFFFFLL;
  if ( a2 < *a1 || (result = 0, a2 >= a1[1]) )
  {
    v2 = sub_5C93A0(*(_QWORD **)(qword_2CCB598 + 1672), (__int64)a1, a2);
    if ( v2 )
      return (unsigned int)((__int64)((__int64)v2 - a1[17]) >> 4) + 1;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}
