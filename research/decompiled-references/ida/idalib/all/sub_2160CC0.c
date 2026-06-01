__int64 __fastcall sub_2160CC0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx

  result = **(unsigned int **)(*a1 + 224LL);
  if ( (_DWORD)result == 1 )
  {
    v5 = a1[1];
    if ( *(_QWORD *)(*a1 + 72LL) )
    {
      v6 = *(unsigned int *)(v5 + 8);
      result = v5 + 12;
    }
    else
    {
      v6 = *(unsigned int *)(v5 + 4);
      result = v5 + 8;
    }
    *a2 = result;
    a2[1] = v6;
  }
  else if ( (_DWORD)result == 2 )
  {
    v3 = (unsigned int *)a1[1];
    v4 = v3[1];
    result = (__int64)v3 + *v3;
    a2[1] = v4;
    *a2 = result;
  }
  return result;
}
