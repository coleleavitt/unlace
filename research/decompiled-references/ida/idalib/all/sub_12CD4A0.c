__int64 __fastcall sub_12CD4A0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v4; // r12d
  int v5; // ebx
  __int64 v6; // rax

  v3 = (unsigned int)(a2 - 1);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x700000000LL;
  if ( a3 >= 0 )
  {
    v4 = a3 + 1;
    v5 = 0;
    do
    {
      while ( ((1 << v5) & *((_DWORD *)&off_2BAF280 + 6 * v3 + 5)) == 0 )
      {
        if ( ++v5 == v4 )
          return a1;
      }
      v6 = *(unsigned int *)(a1 + 8);
      if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v6 + 1, 4);
        v6 = *(unsigned int *)(a1 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = v5++;
      ++*(_DWORD *)(a1 + 8);
    }
    while ( v5 != v4 );
  }
  return a1;
}
