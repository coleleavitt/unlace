__int64 __fastcall sub_296790(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0;
  if ( *(_QWORD *)(a1[3] + 24LL) == a1[5] )
  {
    v2 = a1[2];
    if ( *(_DWORD *)(v2 + 76) == 3 )
    {
      a1[6] = v2;
      return 1;
    }
  }
  return result;
}
