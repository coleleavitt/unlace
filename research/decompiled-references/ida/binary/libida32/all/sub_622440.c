__int64 __fastcall sub_622440(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( !a2 || *(char *)(a2 + 9) < 0 )
    return 0;
  sub_622250(a1, a2);
  v4 = *(int *)(a2 + 72);
  v5 = *(_QWORD *)(a2 + 80);
  if ( (int)v4 > 0 )
  {
    v6 = v5 + 16 * v4;
    while ( a3 >= *(_DWORD *)v5 )
    {
      if ( a3 == *(_DWORD *)v5 )
      {
        if ( !v5 )
          return 0;
        return *(_QWORD *)(v5 + 8);
      }
      v5 += 16;
      if ( v5 == v6 )
        return 0;
    }
  }
  return 0;
}

