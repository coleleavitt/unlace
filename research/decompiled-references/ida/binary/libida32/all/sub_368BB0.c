__int64 __fastcall sub_368BB0(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = qmkdir(v2, *(unsigned int *)(a1 + 40));
  return 0;
}

