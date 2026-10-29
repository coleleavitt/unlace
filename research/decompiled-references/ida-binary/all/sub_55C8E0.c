__int64 __fastcall sub_55C8E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(unsigned int *)(a1 + 164);
  LODWORD(v2) = 0;
  if ( (unsigned int)v1 < *(_DWORD *)(a1 + 160) )
  {
    v2 = *(_QWORD *)(a1 + 96);
    LOBYTE(v2) = *(_DWORD *)(v2 + 24 * v1 + 16) == *(_DWORD *)(a1 + 56);
  }
  return (unsigned int)v2;
}
