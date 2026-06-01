__int64 __fastcall sub_12CD560(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebp
  int v8; // r12d
  _DWORD *v9; // r14
  __int64 v10; // rax

  v5 = sub_10DE7D0(a2, a3, nullptr);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x700000000LL;
  if ( v5 >= 0 )
  {
    v6 = (unsigned int)(a4 - 1);
    v7 = 0;
    v8 = v5 + 1;
    v9 = (_DWORD *)&off_2BAF280 + 6 * v6 + 5;
    do
    {
      while ( ((1 << v7) & *v9) == 0 )
      {
        if ( ++v7 == v8 )
          return a1;
      }
      v10 = *(unsigned int *)(a1 + 8);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v10 + 1, 4);
        v10 = *(unsigned int *)(a1 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = v7++;
      ++*(_DWORD *)(a1 + 8);
    }
    while ( v7 != v8 );
  }
  return a1;
}
