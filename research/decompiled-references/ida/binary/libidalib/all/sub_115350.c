__int64 __fastcall sub_115350(__int64 **a1, int a2, __int64 ***a3)
{
  int v3; // eax
  __int64 result; // rax

  if ( a3 )
    *a3 = nullptr;
  if ( a1 )
  {
    v3 = a2;
    while ( v3 )
    {
      a1 = (__int64 **)*a1;
      --v3;
      if ( !a1 )
        goto LABEL_12;
    }
    if ( a3 )
      *a3 = a1;
    result = *((unsigned int *)a1 + 20);
    if ( (_DWORD)result == 1 )
      return 17;
  }
  else
  {
LABEL_12:
    result = getinf();
    if ( (_DWORD)result == 2 || (_DWORD)result == 17 || a2 )
      return 2;
  }
  return result;
}

