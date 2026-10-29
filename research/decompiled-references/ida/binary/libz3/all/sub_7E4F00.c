__int64 __fastcall sub_7E4F00(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( result )
  {
    v3 = *a2;
    if ( (unsigned int)v3 >= *(_DWORD *)(result - 4) )
      return 0;
    else
      return *(_QWORD *)(result + 8 * v3);
  }
  return result;
}

