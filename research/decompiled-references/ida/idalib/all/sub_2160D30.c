__int64 __fastcall sub_2160D30(__int64 *a1)
{
  __int64 v1; // rsi
  int v2; // ecx
  int v3; // edx
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = *a1;
  v2 = *(unsigned __int16 *)(*a1 + 2LL * *((unsigned int *)a1 + 2) + 8);
  if ( ((v2 >> 12) & 3) == 1 )
    v3 = (unsigned __int8)(((unsigned __int64)(1LL << (v2 >> 14)) >> 1) + 1);
  else
    v3 = (((v2 >> 12) & 3) == 2) + 1;
  v4 = (unsigned int)(*((_DWORD *)a1 + 2) + v3);
  *((_DWORD *)a1 + 2) = v4;
  result = v4;
  v6 = *(unsigned int *)(v1 + 4);
  v7 = v4 + 4;
  v8 = 2 * v7;
  if ( 2 * v7 < v6 )
  {
    if ( *(_WORD *)(v1 + 2 * v7) )
      return result;
    result = (unsigned int)(result + 1);
    *((_DWORD *)a1 + 2) = result;
    v6 = *(unsigned int *)(v1 + 4);
    v8 = 2 * result + 8;
  }
  if ( v8 == v6 )
  {
    *((_DWORD *)a1 + 2) = 0;
    *a1 = v8 + v1;
  }
  return result;
}
