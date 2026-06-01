__int64 __fastcall sub_2160C60(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = **(unsigned int **)(*a1 + 224LL);
  if ( (_DWORD)result == 1 )
  {
    v2 = a1[1];
    if ( *(_QWORD *)(*a1 + 72LL) )
      result = v2 + *(unsigned int *)(v2 + 8) + 12;
    else
      result = v2 + *(unsigned int *)(v2 + 4) + 8;
    a1[1] = result;
  }
  else if ( (_DWORD)result == 2 )
  {
    result = (unsigned int)(*(_DWORD *)a1[1] + *(_DWORD *)(a1[1] + 4LL)) + a1[1];
    a1[1] = result;
  }
  return result;
}
