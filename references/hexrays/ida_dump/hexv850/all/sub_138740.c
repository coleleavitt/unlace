__int64 __fastcall sub_138740(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // r8
  int v3; // edx
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // eax

  v2 = a1[58];
  if ( !v2 )
    return 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *(_DWORD *)(a1[54] + 104LL * *(int *)(a1[57] + 4 * v5));
    if ( v6 == 4 )
      v6 = 3;
    ++v3;
    v4 += a2 == v6;
    v5 = v3;
  }
  while ( v3 < v2 );
  return v4;
}
