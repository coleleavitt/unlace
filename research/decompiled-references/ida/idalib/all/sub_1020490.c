__int64 __fastcall sub_1020490(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // edx

  if ( a2 >= 0 )
    return 0;
  v5 = sub_101D5E0((unsigned int *)a1, a2);
  if ( (unsigned int)(v5 + 1) <= 1 )
  {
    v6 = *(_QWORD *)(a1 + 184);
  }
  else if ( v5 < 0 )
  {
    v6 = sub_101FA20(a1, (unsigned int)(-2 - v5), nullptr);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v5;
  }
  v7 = *(_DWORD *)(v6 + 12);
  if ( !v7 || *(_DWORD *)(v6 + 16) )
    return 0;
  result = 1;
  if ( a3 )
    *a3 = v7;
  return result;
}
