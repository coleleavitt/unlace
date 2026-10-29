void __fastcall sub_1E7CF30(int *a1, int *a2, __int64 a3)
{
  int *v3; // r12
  int *v5; // r13
  int *v6; // r15
  char v7; // al
  int v8; // ebp
  int v9; // edx
  int *v10; // r12

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    if ( a2 != a1 + 1 )
    {
      do
      {
        v5 = v3 + 1;
        v6 = v3;
        v7 = sub_10246C0(a3, *v3, *a1);
        v8 = *v3;
        if ( v7 )
        {
          if ( (char *)v3 - (char *)a1 > 0 )
            memmove(&v5[-(v3 - a1)], &v3[-(v3 - a1)], (char *)v3 - (char *)a1);
          *a1 = v8;
        }
        else
        {
          while ( 1 )
          {
            v9 = *(v6 - 1);
            v10 = v6--;
            if ( !sub_10246C0(a3, v8, v9) )
              break;
            v6[1] = *v6;
          }
          *v10 = v8;
        }
        v3 = v5;
      }
      while ( v5 != &a1[((unsigned __int64)((char *)(a2 - 2) - (char *)a1) >> 2) + 2] );
    }
  }
}
