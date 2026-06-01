__int64 __fastcall sub_33CB80(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 8);
  result = sub_2DBE90(**(QT::QAbstractItemView ***)a1, a2 + 24);
  *v2 = result;
  return result;
}
