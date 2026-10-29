__int64 __fastcall sub_175DB0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_QWORD *)(a1 + 8) = *a2;
  return result;
}
