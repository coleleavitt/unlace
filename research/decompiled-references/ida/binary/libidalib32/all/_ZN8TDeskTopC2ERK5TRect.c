__int64 __fastcall TDeskTop::TDeskTop(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax

  TGroup::TGroup(a1, a3);
  result = *a2;
  *a1 = *a2;
  return result;
}

