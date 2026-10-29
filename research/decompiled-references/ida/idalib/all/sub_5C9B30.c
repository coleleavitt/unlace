__int64 __fastcall sub_5C9B30(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // rax
  __int64 result; // rax

  if ( !a2 || a3 == -1 )
    return 0xFFFFFFFFLL;
  if ( a3 < *a2 || (result = 0, a3 >= a2[1]) )
  {
    v3 = sub_5C93A0(a1, (__int64)a2, a3);
    if ( v3 )
      return (unsigned int)((__int64)((__int64)v3 - a2[17]) >> 4) + 1;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}
