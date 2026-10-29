__int64 __fastcall sub_847EC0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(result + 1) )
  {
    sub_25D6060(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = a2;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

