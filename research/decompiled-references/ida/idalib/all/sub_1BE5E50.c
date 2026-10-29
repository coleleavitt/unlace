bool __fastcall sub_1BE5E50(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  bool result; // al

  result = sub_1BE5710(a1, a2, a3, nullptr, nullptr);
  if ( result )
    *a4 = a3;
  return result;
}
