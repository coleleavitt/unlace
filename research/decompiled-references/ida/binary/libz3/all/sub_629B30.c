__int64 __fastcall sub_629B30(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = *(unsigned int *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 20);
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    do
    {
      *(_DWORD *)(a1 + 24) += result;
      *(_DWORD *)(a1 + 28) += v2;
      a1 = *(_QWORD *)(a1 + 8);
    }
    while ( a1 );
  }
  return result;
}

