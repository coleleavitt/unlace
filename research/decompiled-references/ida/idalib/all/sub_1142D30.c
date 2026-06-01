unsigned __int64 __fastcall sub_1142D30(_QWORD *a1, unsigned __int64 a2, const char *a3)
{
  unsigned __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 result; // rax

  v3 = (__int64)(a1[1] - *a1) >> 4;
  if ( 0xFFFFFFFFFFFFFFFLL - v3 < a2 )
    std::__throw_length_error(a3);
  if ( a2 < v3 )
    a2 = (__int64)(a1[1] - *a1) >> 4;
  v4 = __CFADD__(a2, v3);
  result = a2 + v3;
  if ( v4 || result > 0xFFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFFFFFFFFLL;
  return result;
}
