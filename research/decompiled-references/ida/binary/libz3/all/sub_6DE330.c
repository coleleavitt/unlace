__int64 __fastcall sub_6DE330(__int64 *a1, char a2)
{
  __int64 result; // rax

  result = *a1;
  *(_BYTE *)(*a1 + 24) = a2;
  return result;
}

