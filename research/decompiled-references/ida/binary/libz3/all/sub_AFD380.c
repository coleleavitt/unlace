unsigned int *__fastcall sub_AFD380(__int64 a1, unsigned int *a2)
{
  unsigned int *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = a2;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 880) + 8656LL);
  if ( v3 )
  {
    v4 = *a2;
    if ( (unsigned int)v4 < *(_DWORD *)(v3 - 4) )
    {
      v5 = *(_QWORD *)(v3 + 8 * v4);
      if ( v5 )
        return **(unsigned int ***)(v5 + 16);
    }
  }
  return result;
}

