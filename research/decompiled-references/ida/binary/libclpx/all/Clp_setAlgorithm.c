__int64 __fastcall Clp_setAlgorithm(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = *a1;
  *(_DWORD *)(*a1 + 1300) = a2;
  return result;
}

