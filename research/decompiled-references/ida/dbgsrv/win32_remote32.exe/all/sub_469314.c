/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469314
// Address: 0x00469314

//----- (00469314) --------------------------------------------------------
int __cdecl sub_469314(int *a1)
{
  int result; // eax
  int v2; // edx
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  SystemTimeAsFileTime = 0;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  if ( *(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL >= 325368000000000000LL )
  {
    result = -1;
    v2 = -1;
  }
  else
  {
    result = sub_462A90(*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL, 10000000);
  }
  if ( a1 )
  {
    *a1 = result;
    a1[1] = v2;
  }
  return result;
}
// 46936D: variable 'v2' is possibly undefined
