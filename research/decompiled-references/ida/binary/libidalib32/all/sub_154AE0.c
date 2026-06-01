__int64 __fastcall sub_154AE0(__int64 a1, int *a2)
{
  __int64 v2; // rcx
  int v3; // esi
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 192);
  v3 = *a2;
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 184);
  result = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 8 * result++);
    if ( v6 == v3 )
      break;
    if ( v2 == result )
      return 0;
  }
  return result;
}

