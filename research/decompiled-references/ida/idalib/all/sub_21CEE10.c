void **__fastcall sub_21CEE10(void **a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // r13
  unsigned __int64 *v7; // rbx
  __int64 v9; // rdi
  __m128i v10; // xmm1
  size_t v11; // r15
  char *v12; // rbx
  unsigned __int64 v13; // rbp
  char *v14; // rdi
  unsigned __int64 v17; // [rsp+10h] [rbp-78h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h]
  _BYTE v21[80]; // [rsp+38h] [rbp-50h] BYREF

  if ( a4
    && (v6 = (unsigned __int64)a3 + a4, v7 = a3, v17 = *(_QWORD *)(a2 + 16), (unsigned __int64 *)((char *)a3 + a4) > a3) )
  {
    if ( a4 > 7 )
    {
      while ( 1 )
      {
        v11 = *v7;
        if ( a6 != 1 )
          v11 = sub_2162D00(*v7);
        v12 = (char *)(v7 + 1);
        if ( !v11 )
        {
          sub_21C93F0(&ptr, 9, "binary id length is 0");
          *a1 = ptr;
          return a1;
        }
        v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v6 - (unsigned __int64)v12 < v13 )
        {
          sub_21C93F0(&ptr, 9, "not enough data to read binary id data");
          *a1 = ptr;
          return a1;
        }
        v14 = v21;
        ptr = v21;
        si128 = _mm_load_si128(xmmword_23A8F10);
        if ( v11 > 0xA )
        {
          sub_2236E10(&ptr, v21, v11, 1);
          v14 = (char *)ptr + si128.m128i_i64[0];
        }
        memcpy(v14, v12, v11);
        si128.m128i_i64[0] += v11;
        v9 = *(_QWORD *)(a5 + 8);
        if ( v9 == *(_QWORD *)(a5 + 16) )
        {
          sub_21CEBA0(a5, *(void ***)(a5 + 8), (__int64)&ptr);
        }
        else
        {
          v10 = _mm_load_si128(xmmword_23A8F10);
          *(_QWORD *)v9 = v9 + 24;
          *(__m128i *)(v9 + 8) = v10;
          if ( si128.m128i_i64[0] )
            sub_20177C0((char **)v9, (char **)&ptr);
          *(_QWORD *)(a5 + 8) += 40LL;
        }
        if ( ptr != v21 )
          free(ptr);
        v7 = (unsigned __int64 *)&v12[v13];
        if ( (unsigned __int64)v7 > v17 )
          break;
        if ( (unsigned __int64)v7 >= v6 )
          goto LABEL_20;
        if ( v6 - (unsigned __int64)v7 <= 7 )
          goto LABEL_22;
      }
      sub_21C93F0(&ptr, 9, "binary id section is greater than buffer size");
      *a1 = ptr;
      return a1;
    }
    else
    {
LABEL_22:
      sub_21C93F0(&ptr, 9, "not enough data to read binary id length");
      *a1 = ptr;
      return a1;
    }
  }
  else
  {
LABEL_20:
    *a1 = nullptr;
    return a1;
  }
}
