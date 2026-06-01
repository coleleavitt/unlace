__int64 __fastcall sub_697F70(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edx
  unsigned __int64 *v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  if ( (int)v1 <= 0 )
    return v2;
  v3 = *(unsigned __int64 **)a1;
  v2 = 1;
  if ( **(_QWORD **)a1 == -1 )
    return v2;
  if ( (_DWORD)v1 == 1 )
    return 0;
  v4 = (__int64)&v3[2 * (unsigned int)(v1 - 1) + 2];
  while ( 1 )
  {
    if ( *v3 == -1 )
      return 1;
    v5 = v3[1];
    if ( v5 == -1 )
      return 2;
    if ( *v3 >= v5 )
      break;
    v3 += 2;
    if ( v3 == (unsigned __int64 *)v4 )
      return 0;
  }
  return 3;
}
