void __fastcall clang_CXIndex_setInvocationEmissionPathOption(__m128 *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r13
  double *v5; // rdx
  double *v6; // rdi
  __int64 v7; // rdx
  double v8; // rcx
  double *v9; // rdi
  double v10; // [rsp+0h] [rbp-50h]
  double *v11; // [rsp+8h] [rbp-48h]
  size_t n; // [rsp+10h] [rbp-40h]
  double src[7]; // [rsp+18h] [rbp-38h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = strlen(a2);
      v11 = src;
      v10 = *(double *)&v3;
      v4 = v3;
      if ( v3 > 0xF )
      {
        v11 = (double *)std::string::_M_create();
        v9 = v11;
        src[0] = v10;
LABEL_17:
        memcpy(v9, a2, v4);
        v3 = *(_QWORD *)&v10;
        v5 = v11;
LABEL_6:
        n = v3;
        *((_BYTE *)v5 + v3) = 0;
        v6 = (double *)a1[7].m128_u64[1];
        v7 = v3;
        if ( v6 == (double *)&a1[8].m128_u16[4] )
        {
          if ( v11 != src )
          {
            a1[7].m128_u64[1] = (unsigned __int64)v11;
            a1[8] = _mm_loadh_ps(src);
            goto LABEL_20;
          }
        }
        else if ( v11 != src )
        {
          v8 = *(double *)&a1[8].m128_u64[1];
          a1[7].m128_u64[1] = (unsigned __int64)v11;
          a1[8] = _mm_loadh_ps(src);
          if ( v6 )
          {
            v11 = v6;
            src[0] = v8;
            goto LABEL_10;
          }
LABEL_20:
          v11 = src;
          v6 = src;
LABEL_10:
          *(_BYTE *)v6 = 0;
          if ( v11 != src )
            operator delete(v11, *(_QWORD *)&src[0] + 1LL);
          return;
        }
        if ( v3 )
        {
          if ( v3 == 1 )
          {
            *(_BYTE *)v6 = LOBYTE(src[0]);
            v7 = 1;
          }
          else
          {
            memcpy(v6, src, v3);
            v7 = n;
          }
          v6 = (double *)a1[7].m128_u64[1];
        }
        a1[8].m128_u64[0] = v7;
        *((_BYTE *)v6 + v7) = 0;
        v6 = v11;
        goto LABEL_10;
      }
      if ( v3 == 1 )
      {
        LOBYTE(src[0]) = *a2;
        v5 = src;
        goto LABEL_6;
      }
      if ( v3 )
      {
        v9 = src;
        goto LABEL_17;
      }
    }
    else
    {
      v11 = src;
    }
    v5 = src;
    v3 = 0;
    goto LABEL_6;
  }
}

