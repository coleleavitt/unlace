__int64 __fastcall sub_3E5A70(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // edx
  unsigned int v5; // ecx

  v2 = a1 + 536;
  v3 = a1 + 4408;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 28);
    if ( a2 < v4 )
      break;
    v2 += 32;
    if ( v2 == v3 )
      goto LABEL_5;
  }
  v4 = *(_DWORD *)(v2 - 4);
LABEL_5:
  v5 = 1;
  if ( a2 == v4 )
    return (unsigned int)*(char *)(v2 - 12);
  return v5;
}
