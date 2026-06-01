__int64 __fastcall Clp_setSmallElementValue(__int64 *a1, double a2)
{
  __int64 result; // rax

  result = *a1;
  *(double *)(*a1 + 80) = a2;
  return result;
}

