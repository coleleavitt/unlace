char *__fastcall sub_4E91A0(char *src, _BYTE *a2, char *a3, __int64 a4, __int64 a5, _QWORD *a6, __int64 a7)
{
  char *v9; // r13
  __int64 v11; // rcx
  size_t v12; // r13
  signed __int64 v13; // r15
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a4 > a5 && a5 <= a7 )
  {
    v9 = src;
    if ( a5 )
    {
      v12 = a3 - a2;
      v13 = a2 - src;
      if ( a3 - a2 <= 8 )
      {
        if ( a3 - a2 == 8 )
        {
          *a6 = *(_QWORD *)a2;
          if ( v13 <= 8 )
          {
            if ( v13 == 8 )
              *((_QWORD *)a3 - 1) = *(_QWORD *)src;
          }
          else
          {
            memmove(&a3[-v13], src, v13);
          }
          *(_QWORD *)src = *a6;
        }
        else if ( v13 <= 8 )
        {
          if ( v13 == 8 )
            *((_QWORD *)a3 - 1) = *(_QWORD *)src;
        }
        else
        {
          memmove(&a3[-v13], src, v13);
        }
      }
      else
      {
        memmove(a6, a2, a3 - a2);
        if ( v13 <= 8 )
        {
          if ( v13 == 8 )
            *((_QWORD *)a3 - 1) = *(_QWORD *)src;
        }
        else
        {
          memmove(&a3[-v13], src, v13);
        }
        memmove(src, a6, v12);
      }
      return &src[v12];
    }
    return v9;
  }
  if ( a4 <= a7 )
  {
    v9 = a3;
    if ( a4 )
    {
      v11 = a3 - a2;
      v9 = &a3[-(a2 - src)];
      if ( a2 - src <= 8 )
      {
        if ( a2 - src == 8 )
        {
          *a6 = *(_QWORD *)src;
          if ( v11 <= 8 )
          {
            if ( v11 == 8 )
              *(_QWORD *)src = *(_QWORD *)a2;
          }
          else
          {
            memmove(src, a2, a3 - a2);
          }
          *((_QWORD *)a3 - 1) = *a6;
        }
        else if ( v11 <= 8 )
        {
          if ( v11 == 8 )
            *(_QWORD *)src = *(_QWORD *)a2;
        }
        else
        {
          memmove(src, a2, a3 - a2);
        }
      }
      else
      {
        n = a3 - a2;
        memmove(a6, src, a2 - src);
        if ( a3 - a2 <= 8 )
        {
          if ( n == 8 )
            *(_QWORD *)src = *(_QWORD *)a2;
        }
        else
        {
          memmove(src, a2, n);
        }
        memmove(v9, a6, a2 - src);
      }
    }
    return v9;
  }
  return sub_4DD840(src, a2, a3);
}
