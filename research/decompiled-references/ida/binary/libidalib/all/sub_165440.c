__int64 __fastcall sub_165440(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // ecx
  const char *v7; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a2 + 600LL);
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a2 + 592LL);
    v4 = v3 + 80 * v2;
    if ( v3 != v4 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 72);
        if ( (v5 & 4) == 0 )
          break;
        v3 += 80;
        if ( v4 == v3 )
          return 7;
      }
      v6 = 7;
      if ( v3 && (v5 & 2) != 0 )
      {
        v7 = s1;
        if ( *(_QWORD *)(v3 + 40) )
          v7 = *(const char **)(v3 + 32);
        if ( !v7 )
          return 7;
        return 3;
      }
      return v6;
    }
  }
  return 7;
}

