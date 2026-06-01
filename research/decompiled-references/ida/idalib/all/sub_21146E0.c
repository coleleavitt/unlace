_WORD *__fastcall sub_21146E0(__int64 a1, void *a2, size_t a3)
{
  _BYTE *v4; // rax
  char *v5; // rbx
  _WORD *result; // rax
  char *v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  char *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  _BYTE *v13; // rdx
  void *v14; // rdi
  size_t v15; // rbx
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n; // [rsp+8h] [rbp-30h]

  src = a2;
  n = a3;
  if ( sub_2246FB0(&src, "0123456789_.abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 64, 0) == -1 )
  {
    v14 = *(void **)(a1 + 32);
    v15 = n;
    result = (_WORD *)(*(_QWORD *)(a1 + 24) - (_QWORD)v14);
    if ( n > (unsigned __int64)result )
    {
      return (_WORD *)sub_227BF10(a1, src, n);
    }
    else if ( n )
    {
      result = memcpy(v14, src, n);
      *(_QWORD *)(a1 + 32) += v15;
    }
  }
  else
  {
    v4 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 24) )
    {
      sub_227BA10(a1, 34);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v4 + 1;
      *v4 = 34;
    }
    v5 = (char *)src;
    result = *(_WORD **)(a1 + 32);
    v7 = (char *)src + n;
LABEL_5:
    while ( v7 > v5 )
    {
      while ( 1 )
      {
        v8 = (unsigned __int8)*v5;
        v9 = *(_QWORD *)(a1 + 24);
        v10 = v5 + 1;
        if ( (_BYTE)v8 == 34 )
        {
          ++v5;
          if ( v9 - (unsigned __int64)result > 1 )
          {
            *result = 8796;
            result = (_WORD *)(*(_QWORD *)(a1 + 32) + 2LL);
            *(_QWORD *)(a1 + 32) = result;
          }
          else
          {
            sub_227BF10(a1, "\\\"", 2);
            result = *(_WORD **)(a1 + 32);
          }
          goto LABEL_5;
        }
        if ( (_BYTE)v8 == 92 )
          break;
        if ( v9 <= (unsigned __int64)result )
        {
          ++v5;
          sub_227BA10(a1, v8);
          result = *(_WORD **)(a1 + 32);
          goto LABEL_5;
        }
        ++v5;
        *(_QWORD *)(a1 + 32) = (char *)result + 1;
        *(_BYTE *)result = v8;
        result = *(_WORD **)(a1 + 32);
        if ( v7 <= v10 )
          goto LABEL_10;
      }
      if ( v7 == v10 )
      {
        if ( v9 - (unsigned __int64)result > 1 )
        {
          *result = 23644;
          result = (_WORD *)(*(_QWORD *)(a1 + 32) + 2LL);
          *(_QWORD *)(a1 + 32) = result;
          break;
        }
        sub_227BF10(a1, "\\\\", 2);
        result = *(_WORD **)(a1 + 32);
        if ( *(_QWORD *)(a1 + 24) > (unsigned __int64)result )
          goto LABEL_11;
        return (_WORD *)sub_227BA10(a1, 34);
      }
      if ( v9 <= (unsigned __int64)result )
      {
        v11 = sub_227BA10(a1, 92);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = (char *)result + 1;
        *(_BYTE *)result = 92;
        v11 = a1;
      }
      v12 = (unsigned __int8)v5[1];
      v13 = *(_BYTE **)(v11 + 32);
      v5 += 2;
      if ( (unsigned __int64)v13 >= *(_QWORD *)(v11 + 24) )
      {
        sub_227BA10(v11, v12);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v13 + 1;
        *v13 = v12;
      }
      result = *(_WORD **)(a1 + 32);
    }
LABEL_10:
    if ( *(_QWORD *)(a1 + 24) > (unsigned __int64)result )
    {
LABEL_11:
      *(_QWORD *)(a1 + 32) = (char *)result + 1;
      *(_BYTE *)result = 34;
      return result;
    }
    return (_WORD *)sub_227BA10(a1, 34);
  }
  return result;
}
