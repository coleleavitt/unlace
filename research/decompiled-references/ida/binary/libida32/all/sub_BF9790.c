__int64 __fastcall sub_BF9790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdx

  v6 = a1;
  if ( *(char *)(a1 + 29) < 0 )
    v6 = sub_B4E9E0(a1);
  v7 = *(unsigned int *)(v6 + 68);
  if ( (v7 & 0xFFFFFFF0) != 0 )
    return ((unsigned int)v7 >> 4) - 1;
  sub_B5AD70(v6, a2, v7, a4, a5, a6);
  return (unsigned int)((*(_DWORD *)(v6 + 68) >> 4) - 1);
}

