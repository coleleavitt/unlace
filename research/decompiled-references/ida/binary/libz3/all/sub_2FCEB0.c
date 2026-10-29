__int64 __fastcall sub_2FCEB0(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax

  v3 = *a1;
  if ( (*((_BYTE *)a1 + 123) & 0x20) != 0 )
    return *(_QWORD *)(v3 + 864);
  v5 = a1[9];
  v6 = 18;
  while ( --v6 )
  {
    if ( *(char *)(v5 + 3) >= 0 )
    {
      if ( a2 == *(_DWORD *)(v5 + 4) )
      {
        v7 = v5 + 8;
        return *(_QWORD *)v7;
      }
    }
    else if ( *(_BYTE *)(v5 + 3) >> 6 != 2 )
    {
      v7 = *(_QWORD *)(v5 + 16) + 8LL * a2;
      return *(_QWORD *)v7;
    }
    v5 = *(_QWORD *)(v5 + 16);
  }
  sub_233F80((__int64 *)(v3 + 616), (_DWORD *)a1 + 18);
  v7 = *(_QWORD *)(a1[9] + 16) + 8LL * a2;
  return *(_QWORD *)v7;
}

