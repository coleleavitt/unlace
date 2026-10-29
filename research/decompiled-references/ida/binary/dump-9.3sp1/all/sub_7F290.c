unsigned __int64 __fastcall sub_7F290(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax

  if ( (unsigned __int8)is_cvt64() )
    v2 = (int)sub_7CD20(a2);
  else
    v2 = sub_7CD40((__int64)a2);
  *a1 = v2;
  a1[1] = sub_7D020((__int64)a2, 0);
  a1[2] = sub_7D020((__int64)a2, 0);
  a1[3] = sub_7D020((__int64)a2, 0);
  result = sub_7D020((__int64)a2, 0);
  a1[4] = result;
  return result;
}
