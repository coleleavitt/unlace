__int64 __fastcall Clp_setSecondaryStatus(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = *a1;
  *(_DWORD *)(*a1 + 324) = a2;
  return result;
}

