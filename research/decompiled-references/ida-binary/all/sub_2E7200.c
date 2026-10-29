bool __fastcall sub_2E7200(_DWORD *a1, __int64 a2)
{
  bool result; // al

  if ( *(int *)a2 < 0 || *(int *)(a2 + 4) < 0 || (result = 0, !*(_QWORD *)(a2 + 16)) )
  {
    result = 0;
    if ( a1[18] == 2 )
      return a1[16] < a1[6];
  }
  return result;
}
