__int64 __fastcall sub_28A050(_QWORD **a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax

  v2 = a1[1];
  result = sub_2DBE90(**a1, a2 + 24);
  *v2 = result;
  return result;
}
