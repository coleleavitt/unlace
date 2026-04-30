__int64 __fastcall sub_2E6E70(__int64 a1, int *a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  int v4; // ecx

  v2 = *a2;
  result = 0;
  if ( (v2 & 0x80000000) == 0LL && a2[1] >= 0 )
  {
    result = *((_QWORD *)a2 + 2);
    if ( result )
    {
      v4 = *(_DWORD *)(a1 + 72);
      result = 0;
      if ( v4 )
      {
        if ( v2 < *(_QWORD *)(a1 + 24) && v4 == 2 )
          return *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v2);
        else
          return 0;
      }
    }
  }
  return result;
}
