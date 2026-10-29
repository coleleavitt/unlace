__int64 __fastcall sub_1F6C100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 72);
  if ( *(char *)(result + 29) < 0 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( !result || !*(_BYTE *)(result + 9267) )
    {
      result = *(unsigned int *)(a1 + 2704);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2708) )
      {
        sub_2237220(a1 + 2696, a1 + 2712, result + 1, 8);
        result = *(unsigned int *)(a1 + 2704);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 2696) + 8 * result) = a3;
      ++*(_DWORD *)(a1 + 2704);
    }
  }
  return result;
}
