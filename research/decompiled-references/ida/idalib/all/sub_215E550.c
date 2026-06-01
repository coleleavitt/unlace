__int64 __fastcall sub_215E550(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 16);
  if ( (a1[8] || a1[9]) && a1[2] )
  {
    if ( *(_DWORD *)(a2 + 8) <= (unsigned int)result )
      LODWORD(result) = *(_DWORD *)(a2 + 8);
    return (unsigned int)result;
  }
  return result;
}
