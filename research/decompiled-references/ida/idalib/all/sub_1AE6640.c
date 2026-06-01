__int64 __fastcall sub_1AE6640(__int64 a1, int a2, _QWORD *a3, int a4)
{
  __int64 result; // rax

  result = 0;
  if ( a2 == 11 && *a3 == *(_QWORD *)a1 )
  {
    **(_DWORD **)(a1 + 24) = a4;
    return 1;
  }
  return result;
}
