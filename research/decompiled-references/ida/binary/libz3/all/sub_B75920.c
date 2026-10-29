__int64 __fastcall sub_B75920(_QWORD *a1)
{
  _QWORD *exception; // r13
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v7; // ebp
  _QWORD *v8; // rax
  _DWORD *i; // rbx
  unsigned int v10; // r13d
  size_t v11; // rsi
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r15
  _QWORD *v15; // rsi
  _QWORD *j; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // [rsp+10h] [rbp-88h]
  _QWORD *v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h]
  _QWORD v29[11]; // [rsp+40h] [rbp-58h] BYREF

  result = a1[1106];
  if ( result )
  {
    v7 = *(_DWORD *)(result - 4);
    if ( v7 )
    {
      v8 = (_QWORD *)sub_186B270(0x10u);
      *v8 = 2;
      for ( i = v8 + 1; ; i = v12 + 2 )
      {
        v13 = *(i - 2);
        if ( v13 >= v7 )
          break;
        v10 = (3 * v13 + 1) >> 1;
        v11 = 4 * v10 + 8;
        if ( 4 * v13 + 8 >= (unsigned int)v11 || v13 >= v10 )
        {
          exception = __cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v27, "Overflow encountered when expanding vector");
          v2 = v27;
          exception[1] = exception + 3;
          v3 = v28;
          *exception = off_1C63128;
          if ( v2 == v29 )
          {
            qmemcpy(exception + 3, v29, (unsigned int)(v3 + 1));
          }
          else
          {
            v4 = v29[0];
            exception[1] = v2;
            exception[3] = v4;
          }
          exception[2] = v3;
          v27 = v29;
          v28 = 0;
          LOBYTE(v29[0]) = 0;
          sub_233E40((__int64)&v27);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(i - 2, v11);
        *v12 = v10;
      }
      *(i - 1) = v7;
      v14 = v7;
      memset(i, 0, 4LL * v7);
      v15 = (_QWORD *)a1[1111];
      if ( !v15 )
      {
        v20 = (_QWORD *)a1[1112];
        if ( !v20 )
          goto LABEL_19;
        v21 = &v20[*((unsigned int *)v20 - 1)];
        if ( v20 == v21 )
          goto LABEL_19;
        goto LABEL_15;
      }
      goto LABEL_9;
    }
  }
  v15 = (_QWORD *)a1[1111];
  v7 = 0;
  i = nullptr;
  if ( v15 )
  {
LABEL_9:
    result = *((unsigned int *)v15 - 1);
    for ( j = &v15[result]; j != v15; ++v15 )
    {
      result = *v15 + 8LL;
      v17 = 4LL * *(unsigned int *)*v15;
      v18 = result + v17;
      if ( v17 )
      {
        do
        {
          v19 = *(unsigned int *)result;
          result += 4;
          ++i[v19];
        }
        while ( v18 != result );
      }
    }
    v20 = (_QWORD *)a1[1112];
    if ( !v20 || (result = *((unsigned int *)v20 - 1), v21 = &v20[result], v20 == v21) )
    {
LABEL_18:
      v14 = v7;
      if ( !v7 )
      {
LABEL_23:
        if ( i )
          return sub_186B220(i - 2);
        return result;
      }
LABEL_19:
      result = (__int64)&v27;
      v25 = 0;
      do
      {
        while ( !i[v25] )
        {
          if ( v14 == ++v25 )
            goto LABEL_23;
        }
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v26 = std::ostream::_M_insert<bool>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v27, *(_QWORD *)(a1[1105] + 8LL * ((unsigned int)v25 >> 1)), a1[13], 0, 0, 0);
        sub_160E8B0(v26, &v27);
        sub_18572D0(v29);
        result = std::__ostream_insert<char,std::char_traits<char>>();
        ++v25;
      }
      while ( v14 != v25 );
      goto LABEL_23;
    }
    do
    {
LABEL_15:
      result = *v20 + 8LL;
      v22 = 4LL * *(unsigned int *)*v20;
      v23 = result + v22;
      if ( v22 )
      {
        do
        {
          v24 = *(unsigned int *)result;
          result += 4;
          ++i[v24];
        }
        while ( v23 != result );
      }
      ++v20;
    }
    while ( v21 != v20 );
    goto LABEL_18;
  }
  v20 = (_QWORD *)a1[1112];
  if ( v20 )
  {
    result = *((unsigned int *)v20 - 1);
    v21 = &v20[result];
    if ( v20 != v21 )
      goto LABEL_15;
  }
  return result;
}

