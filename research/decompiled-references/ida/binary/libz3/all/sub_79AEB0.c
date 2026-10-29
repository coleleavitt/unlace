__int64 __fastcall sub_79AEB0(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = a1[215];
  if ( !v2 || (v3 = *a2, (unsigned int)v3 >= *(_DWORD *)(v2 - 4)) || (result = *(_QWORD *)(v2 + 8 * v3)) == 0 )
  {
    (*(void (__fastcall **)(_QWORD *, unsigned int *))(*a1 + 480LL))(a1, a2);
    result = a1[215];
    if ( result )
    {
      v5 = *a2;
      if ( (unsigned int)v5 >= *(_DWORD *)(result - 4) )
        return 0;
      else
        return *(_QWORD *)(result + 8 * v5);
    }
  }
  return result;
}

