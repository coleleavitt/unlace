bool __fastcall sub_1020410(__int64 a1, int a2)
{
  int v3; // eax
  __int64 v4; // rax

  if ( a2 >= 0 )
    return 0;
  v3 = sub_101D5E0((unsigned int *)a1, a2);
  if ( (unsigned int)(v3 + 1) <= 1 )
  {
    v4 = *(_QWORD *)(a1 + 184);
  }
  else if ( v3 < 0 )
  {
    v4 = sub_101FA20(a1, (unsigned int)(-2 - v3), nullptr);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v3;
  }
  return *(_DWORD *)(v4 + 12) && *(_DWORD *)(v4 + 16) != 0;
}
