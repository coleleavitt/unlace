__int64 __fastcall sub_2FBDF0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_QWORD *)(a1 + 760) = *a2;
  return result;
}

