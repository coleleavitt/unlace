void __fastcall sub_1E7D190(int *a1, int *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int *v6; // rbx
  __int64 i; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned int v10; // ecx

  v4 = (char *)a2 - (char *)a1;
  v6 = a2;
  if ( (char *)a2 - (char *)a1 > 4 )
  {
    for ( i = ((v4 >> 2) - 2) / 2; ; --i )
    {
      sub_1E7D010((__int64)a1, i, v4 >> 2, a1[i], a4);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v8 = v4 >> 2;
    v9 = (unsigned __int64)&a2[((a3 - 1 - (unsigned __int64)a2) >> 2) + 1];
    do
    {
      while ( !sub_10246C0(a4, *v6, *a1) )
      {
        if ( (int *)v9 == ++v6 )
          return;
      }
      v10 = *v6++;
      *(v6 - 1) = *a1;
      sub_1E7D010((__int64)a1, 0, v8, v10, a4);
    }
    while ( (int *)v9 != v6 );
  }
}
