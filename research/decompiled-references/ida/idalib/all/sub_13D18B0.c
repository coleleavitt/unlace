unsigned __int64 __fastcall sub_13D18B0(__int64 a1, unsigned __int8 **a2, __int64 a3)
{
  unsigned __int8 *v3; // rax
  unsigned __int8 v4; // cl
  unsigned __int64 result; // rax

  v3 = *a2;
  v4 = **a2;
  if ( v4 == 63 || v4 == 92 )
  {
    result = sub_13D1690(a1, v3, a3);
    *a2 += HIDWORD(result);
  }
  else
  {
    *a2 = v3 + 1;
    return *v3;
  }
  return result;
}
