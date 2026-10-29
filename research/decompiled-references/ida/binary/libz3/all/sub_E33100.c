__int64 __fastcall sub_E33100(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = a1[13];
  if ( v1 )
    result = *(unsigned int *)(v1 - 4);
  else
    result = 0;
  if ( a1[16] != *(_QWORD *)(a1[1] + 856LL) )
    return (unsigned int)(result - 1);
  return result;
}

