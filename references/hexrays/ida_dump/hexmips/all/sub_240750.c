__int64 __fastcall sub_240750(int a1)
{
  __int64 v1; // rax

  v1 = 0;
  while ( dword_40E2E4[v1] != a1 )
  {
    v1 += 2;
    if ( v1 == 26 )
      return 0;
  }
  return dword_40E2E0[(int)v1];
}
