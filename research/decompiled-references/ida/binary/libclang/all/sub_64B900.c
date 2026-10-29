__int64 __fastcall sub_64B900(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(result + 1) )
  {
    sub_25D6060(a1, a1 + 16, result + 1, 8);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * result) = a2;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

