__int64 __fastcall sub_7CB4E0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 392LL))(a1, *(_QWORD *)(a1[18] + 864LL)) )
  {
    sub_1872CE0("");
    sub_1873130(114, 643);
  }
  result = a1[215];
  if ( result )
  {
    v2 = **(unsigned int **)(a1[18] + 864LL);
    if ( (unsigned int)v2 >= *(_DWORD *)(result - 4) )
      return 0;
    else
      return *(_QWORD *)(result + 8 * v2);
  }
  return result;
}

