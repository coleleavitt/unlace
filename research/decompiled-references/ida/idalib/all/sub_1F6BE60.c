__int64 __fastcall sub_1F6BE60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 72);
  if ( *(char *)(result + 29) < 0 )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( !result || !*(_BYTE *)(result + 9267) )
    {
      result = *(unsigned int *)(a1 + 2696);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2700) )
      {
        sub_2237220(a1 + 2688, a1 + 2704, result + 1, 8);
        result = *(unsigned int *)(a1 + 2696);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 2688) + 8 * result) = a3;
      ++*(_DWORD *)(a1 + 2696);
    }
  }
  return result;
}
