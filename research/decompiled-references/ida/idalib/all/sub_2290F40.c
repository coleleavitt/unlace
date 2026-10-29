__int64 *__fastcall sub_2290F40(__int64 *a1, void *a2, size_t a3, char a4)
{
  __int64 v6; // rax
  _BYTE *v7; // rax
  char *v8; // rbp
  char *v9; // r13
  char v10; // r12
  char *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 *result; // rax
  void *v14; // rdi
  size_t v15; // rbp
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n; // [rsp+8h] [rbp-30h]

  src = a2;
  n = a3;
  v6 = sub_2246EC0((__int64 *)&src, " \"\\$", 4, 0);
  if ( a4 != 1 && v6 == -1 )
  {
    v14 = (void *)a1[4];
    v15 = n;
    result = (__int64 *)(a1[3] - (_QWORD)v14);
    if ( n > (unsigned __int64)result )
    {
      return sub_227BF10(a1, (unsigned __int8 *)src, n);
    }
    else if ( n )
    {
      result = (__int64 *)memcpy(v14, src, n);
      a1[4] += v15;
    }
  }
  else
  {
    v7 = (_BYTE *)a1[4];
    if ( (unsigned __int64)v7 >= a1[3] )
    {
      sub_227BA10((__int64)a1, 34);
    }
    else
    {
      a1[4] = (__int64)(v7 + 1);
      *v7 = 34;
    }
    v8 = (char *)src;
    v9 = (char *)src + n;
    if ( (char *)src + n != src )
    {
      do
      {
        while ( 1 )
        {
          v10 = *v8;
          v11 = (char *)a1[4];
          v12 = a1[3];
          if ( ((*v8 - 34) & 0xFD) == 0 || v10 == 92 )
          {
            if ( (unsigned __int64)v11 >= v12 )
            {
              sub_227BA10((__int64)a1, 92);
            }
            else
            {
              a1[4] = (__int64)(v11 + 1);
              *v11 = 92;
            }
            v11 = (char *)a1[4];
            v12 = a1[3];
          }
          if ( (unsigned __int64)v11 >= v12 )
            break;
          ++v8;
          a1[4] = (__int64)(v11 + 1);
          *v11 = v10;
          if ( v9 == v8 )
            goto LABEL_15;
        }
        ++v8;
        sub_227BA10((__int64)a1, v10);
      }
      while ( v9 != v8 );
    }
LABEL_15:
    result = (__int64 *)a1[4];
    if ( (unsigned __int64)result >= a1[3] )
    {
      return (__int64 *)sub_227BA10((__int64)a1, 34);
    }
    else
    {
      a1[4] = (__int64)result + 1;
      *(_BYTE *)result = 34;
    }
  }
  return result;
}
