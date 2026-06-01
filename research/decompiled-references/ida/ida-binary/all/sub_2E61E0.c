__int64 __fastcall sub_2E61E0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 == 2 )
  {
    if ( *(int *)a2 < 0 )
      return *(unsigned int *)(a1 + 64);
    if ( *(int *)(a2 + 4) < 0 )
      return *(unsigned int *)(a1 + 64);
    result = 0;
    if ( !*(_QWORD *)(a2 + 16) )
      return *(unsigned int *)(a1 + 64);
  }
  else
  {
    result = 1;
    if ( !v2 )
    {
      v4 = *(_QWORD *)(a1 + 48);
      if ( v4 )
        return (unsigned int)v4;
    }
  }
  return result;
}
