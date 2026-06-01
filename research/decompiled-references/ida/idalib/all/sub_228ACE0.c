__int64 __fastcall sub_228ACE0(char ***a1, unsigned int a2)
{
  unsigned int v2; // r13d
  bool v3; // zf
  unsigned __int8 v4; // cl
  size_t v5; // r12
  char *v6; // r15
  __int64 v7; // rax
  size_t v8; // rbx
  bool v9; // r14
  unsigned __int64 v10; // rax
  bool v11; // si
  char v12; // cl
  size_t v13; // rdx
  char v15; // al
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-D0h]
  _BYTE v18[192]; // [rsp+18h] [rbp-C0h] BYREF

  v2 = a2;
  v3 = *((_BYTE *)a1 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v18;
  if ( v3 && (v4 = *((_BYTE *)a1 + 32), v4 <= 6u) && ((1LL << v4) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a1 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v5 = (size_t)a1[1];
        v6 = (char *)*a1;
        break;
      case 1:
        v5 = 0;
        v6 = nullptr;
        break;
      case 3:
        v6 = (char *)*a1;
        v5 = 0;
        if ( *a1 )
          v5 = j__strlen((const char *)*a1);
        break;
      case 4:
        v6 = **a1;
        v5 = (size_t)(*a1)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0((const char **)a1, (__int64)&ptr);
    v5 = si128.m128i_i64[0];
    v6 = (char *)ptr;
  }
  v7 = sub_2288500(v6, v5, a2);
  v8 = v7;
  if ( v5 )
  {
    v15 = v6[v7];
    if ( v15 == 47 )
    {
      v10 = sub_2288910(v6, v5, a2);
      if ( v8 )
      {
        v11 = v10 == -1;
        if ( v8 > v10 || v10 == -1 )
        {
          v9 = 0;
          goto LABEL_9;
        }
        goto LABEL_15;
      }
      goto LABEL_45;
    }
    v9 = v15 != 92 || a2 <= 1;
  }
  else
  {
    v9 = 1;
  }
  v10 = sub_2288910(v6, v5, a2);
  if ( v8 )
  {
    v11 = v10 == -1;
    if ( v8 > v10 || v10 == -1 )
    {
LABEL_9:
      while ( 1 )
      {
        v12 = v6[v8 - 1];
        v13 = v8 - 1;
        if ( v12 != 47 && (v12 != 92 || v2 <= 1) )
          break;
        if ( v8 == 1 )
          goto LABEL_43;
        --v8;
        if ( v13 <= v10 && !v11 )
        {
          if ( v13 == v10 && v9 )
            goto LABEL_14;
          if ( v13 > v5 )
            v13 = v5;
          LOBYTE(v2) = v13 != 0;
          goto LABEL_19;
        }
      }
    }
    if ( v8 != v10 || !v9 )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_43:
  if ( v10 || !v9 )
  {
LABEL_45:
    v2 = 0;
    goto LABEL_19;
  }
LABEL_14:
  v8 = v10 + 1;
LABEL_15:
  v2 = 0;
  if ( v8 != -1 )
  {
    if ( v8 > v5 )
      v8 = v5;
    LOBYTE(v2) = v8 != 0;
  }
LABEL_19:
  if ( ptr != v18 )
    free(ptr);
  return v2;
}
