/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005ACB0
// Address: 0x000000014005ACB0

//----- (000000014005ACB0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_14005ACB0(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 v7; // al
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rdi
  unsigned __int8 *v11; // rbp
  unsigned __int8 v12; // al
  unsigned __int8 v13; // cl
  const char *v14; // rcx
  unsigned __int8 v15; // al

  if ( a3 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( !sub_14006CA14((__int64)a1, 0x25u) )
    return a1;
  v7 = *a1;
  v8 = a2;
  v9 = &a2[a3];
  v10 = a1 + 1;
  if ( a2 >= v9 )
    goto LABEL_40;
  while ( 1 )
  {
    *v8++ = v7;
    if ( v8 >= v9 )
    {
      v8 = v9 - 1;
      *(v9 - 1) = 0;
    }
    if ( !v7 )
      return a2;
    if ( v7 != 37 )
      goto LABEL_34;
    if ( *v10 == 37 )
    {
      ++v10;
      if ( v8 >= v9 )
        goto LABEL_40;
      *v8++ = 37;
      if ( v8 >= v9 )
      {
        v8 = v9 - 1;
        *(v9 - 1) = 0;
      }
      goto LABEL_34;
    }
    v11 = v10;
    if ( sub_14006CA14((__int64)"+-0123456789*#.", *v10) )
    {
      while ( 1 )
      {
        v12 = *v10++;
        if ( v8 >= v9 )
          break;
        *v8++ = v12;
        if ( v8 >= v9 )
        {
          v8 = v9 - 1;
          *(v9 - 1) = 0;
        }
        if ( !sub_14006CA14((__int64)"+-0123456789*#.", *v10) )
          goto LABEL_18;
      }
LABEL_40:
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(518);
    }
LABEL_18:
    v13 = *v10;
    if ( *v10 == 97 )
    {
      if ( v11 != v10 )
        v8 = sub_14005AED0(&v8[v11 - v10], (unsigned __int64)v9, v11);
      if ( v8 >= v9 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(520);
      }
      v14 = "I64";
      if ( v8 == v9 - 1 )
      {
LABEL_29:
        *v8 = 0;
      }
      else
      {
        while ( 1 )
        {
          v15 = *v14++;
          *v8 = v15;
          if ( !v15 )
            break;
          if ( ++v8 == v9 - 1 )
            goto LABEL_29;
        }
      }
      if ( v8 >= v9 )
        goto LABEL_40;
      *v8++ = 88;
      if ( v8 >= v9 )
      {
        v8 = v9 - 1;
        *(v9 - 1) = 0;
      }
      ++v10;
LABEL_34:
      v7 = *v10++;
      if ( v8 >= v9 )
        goto LABEL_40;
    }
    else
    {
      ++v10;
      if ( v8 >= v9 )
        goto LABEL_40;
      *v8++ = v13;
      if ( v8 >= v9 )
      {
        v8 = v9 - 1;
        *(v9 - 1) = 0;
        goto LABEL_34;
      }
      v7 = *v10++;
    }
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
