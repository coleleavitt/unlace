unsigned __int64 __fastcall sub_78C90(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax

  if ( (unsigned __int8)is_cvt64(a1, a2) )
    v2 = (int)sub_767A0(a2);
  else
    v2 = sub_767C0((__int64)a2);
  *a1 = v2;
  a1[1] = sub_76AA0((__int64)a2, 0);
  a1[2] = sub_76AA0((__int64)a2, 0);
  a1[3] = sub_76AA0((__int64)a2, 0);
  result = sub_76AA0((__int64)a2, 0);
  a1[4] = result;
  return result;
}
