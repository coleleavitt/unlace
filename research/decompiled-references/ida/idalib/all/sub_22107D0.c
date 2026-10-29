__int64 **__fastcall sub_22107D0(__int64 a1, __int64 *a2)
{
  __int64 **result; // rax
  __int64 *v5; // r13
  __int64 v6; // rdx
  __int64 **v7; // rdi
  __int64 v8; // r8
  __int64 **v9; // rsi
  __int64 **v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // r12
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // rax

  if ( !(_BYTE)byte_2D0A720 && __cxa_guard_acquire(&byte_2D0A720) )
  {
    v12 = j__strlen("General options");
    v13 = j__strlen(&byte_22F0C30);
    qword_2D0A748 = v12;
    qword_2D0A740 = (__int64)"General options";
    qword_2D0A750 = (__int64)&byte_22F0C30;
    qword_2D0A758 = v13;
    sub_22106F0((__int64)&qword_2D0A740);
    __cxa_guard_release(&byte_2D0A720);
  }
  result = *(__int64 ***)(a1 + 64);
  if ( a2 != &qword_2D0A740 )
  {
    v5 = *result;
    if ( !(_BYTE)byte_2D0A720 && __cxa_guard_acquire(&byte_2D0A720) )
    {
      v14 = j__strlen("General options");
      v15 = j__strlen(&byte_22F0C30);
      qword_2D0A748 = v14;
      qword_2D0A740 = (__int64)"General options";
      qword_2D0A750 = (__int64)&byte_22F0C30;
      qword_2D0A758 = v15;
      sub_22106F0((__int64)&qword_2D0A740);
      __cxa_guard_release(&byte_2D0A720);
    }
    result = *(__int64 ***)(a1 + 64);
    if ( v5 == &qword_2D0A740 )
    {
      *result = a2;
      return result;
    }
  }
  v6 = *(unsigned int *)(a1 + 72);
  v7 = &result[v6];
  v8 = (8 * v6) >> 3;
  if ( (8 * v6) >> 5 )
  {
    if ( a2 == *result )
    {
      v9 = result;
    }
    else
    {
      v9 = result + 1;
      if ( a2 != result[1] )
      {
        v9 = result + 2;
        if ( a2 != result[2] )
        {
          v9 = result + 3;
          v10 = &result[4 * ((8 * v6) >> 5)];
          if ( a2 != result[3] )
          {
            while ( 1 )
            {
              v9 = result + 4;
              if ( v10 == result + 4 )
              {
                v8 = v7 - v9;
                goto LABEL_18;
              }
              if ( a2 == result[4] )
                goto LABEL_25;
              if ( a2 == result[5] )
              {
                v9 = result + 5;
                goto LABEL_25;
              }
              if ( a2 == result[6] )
              {
                v9 = result + 6;
                goto LABEL_25;
              }
              if ( a2 == result[7] )
                break;
              result += 4;
            }
            v9 = result + 7;
          }
        }
      }
    }
LABEL_25:
    if ( v7 != v9 )
      return result;
    goto LABEL_21;
  }
  v9 = result;
LABEL_18:
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      if ( v8 != 1 )
        goto LABEL_21;
      goto LABEL_38;
    }
    if ( a2 == *v9 )
      goto LABEL_25;
    ++v9;
  }
  if ( a2 == *v9 )
    goto LABEL_25;
  ++v9;
LABEL_38:
  if ( a2 == *v9 )
    goto LABEL_25;
LABEL_21:
  result = (__int64 **)*(unsigned int *)(a1 + 76);
  v11 = v6 + 1;
  if ( v11 > (unsigned __int64)result )
  {
    sub_2237220(a1 + 64, a1 + 80, v11, 8);
    result = *(__int64 ***)(a1 + 64);
    v7 = &result[*(unsigned int *)(a1 + 72)];
  }
  *v7 = a2;
  ++*(_DWORD *)(a1 + 72);
  return result;
}
