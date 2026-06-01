__int64 __fastcall sub_1CB3C60(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx

  v2 = 0;
  if ( a2 )
  {
    v2 = *(unsigned int *)(*(_QWORD *)(a1 + 8LL * (a2 - 1)) + 16LL);
    a2 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  }
  return (v2 << 32) | a2;
}
