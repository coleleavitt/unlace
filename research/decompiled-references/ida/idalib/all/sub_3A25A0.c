__int64 __fastcall sub_3A25A0(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1536LL);
  v3 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = a2;
  return v3;
}
