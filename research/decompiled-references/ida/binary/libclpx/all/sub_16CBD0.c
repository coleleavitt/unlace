void __fastcall sub_16CBD0(double *a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  double v5; // xmm1_8
  double *v6; // rax
  double v7; // xmm3_8
  double v8; // xmm2_8
  double v9; // xmm0_8
  char *v10; // rbx
  double *v11; // rax
  double v12; // xmm2_8
  char *v13; // rbp
  __int64 v14; // rbx
  __int64 i; // r13
  double v16; // xmm0_8

  v4 = a2 - (char *)a1;
  if ( a2 - (char *)a1 > 128 )
  {
    if ( !a3 )
    {
      v13 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v5 = a1[1];
      v6 = &a1[v4 >> 4];
      --a3;
      v7 = *((double *)a2 - 1);
      v8 = *v6;
      v9 = *a1;
      if ( *v6 <= v5 )
      {
        if ( v7 <= v5 )
        {
          if ( v7 <= v8 )
          {
LABEL_24:
            *a1 = v8;
            *v6 = v9;
            v5 = *a1;
            v9 = *((double *)a2 - 1);
            goto LABEL_7;
          }
LABEL_16:
          *a1 = v7;
          *((double *)a2 - 1) = v9;
          v5 = *a1;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v7 > v8 )
          goto LABEL_24;
        if ( v7 > v5 )
          goto LABEL_16;
      }
      *a1 = v5;
      a1[1] = v9;
      v9 = *((double *)a2 - 1);
LABEL_7:
      v10 = (char *)(a1 + 1);
      v11 = (double *)a2;
      while ( 1 )
      {
        v12 = *(double *)v10;
        v13 = v10;
        if ( v5 > *(double *)v10 )
          goto LABEL_13;
        --v11;
        if ( v9 > v5 )
        {
          do
            v9 = *--v11;
          while ( *v11 > v5 );
        }
        if ( v11 <= (double *)v10 )
          break;
        *(double *)v10 = v9;
        *v11 = v12;
        v9 = *(v11 - 1);
        v5 = *a1;
LABEL_13:
        v10 += 8;
      }
      sub_16CBD0(v10, a2, a3);
      v4 = v10 - (char *)a1;
      if ( v10 - (char *)a1 <= 128 )
        return;
      a2 = v10;
      if ( !a3 )
      {
LABEL_19:
        v14 = v4 >> 3;
        for ( i = ((v4 >> 3) - 2) >> 1; ; --i )
        {
          std::__adjust_heap<double *,long,double,__gnu_cxx::__ops::_Iter_less_iter>(a1, i, v14, a1[i]);
          if ( !i )
            break;
        }
        do
        {
          v13 -= 8;
          v16 = *(double *)v13;
          *(double *)v13 = *a1;
          std::__adjust_heap<double *,long,double,__gnu_cxx::__ops::_Iter_less_iter>(
            a1,
            0,
            (v13 - (char *)a1) >> 3,
            v16);
        }
        while ( v13 - (char *)a1 > 8 );
        return;
      }
    }
  }
}

