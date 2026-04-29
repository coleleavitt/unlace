unsigned __int64 __fastcall sub_1BF40(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rdx

  v2 = a1[5];
  result = 0;
  if ( a2 < *(_DWORD *)(v2 + 56) )
  {
    v4 = a1[4];
    result = a1[6] + 4LL * a2;
    if ( result < v4 )
    {
      return 0;
    }
    else if ( *(unsigned int *)(v2 + 32) + v4 < result + 4 )
    {
      return 0;
    }
  }
  return result;
}
